/*Solution to 'Given a positive integer n, check if the sum of bits in the binary representation of n is prime or not'*/
*/Author: Aviral Verma*/

#include <iostream>
using namespace std;

bool primeCheck(int num)
{
    int i;
    int count = 0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
            count++;
    }
    if(count!=0)
        return false;
    return true;
}

int binarySum(int n)
{
    int sum = 0;
    while(n>0)
    {
        sum = sum + n%2;
        n=n/2;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int num = binarySum(n);
    bool prime = primeCheck(num);
    if(prime == 1)
    cout << "true" << endl;
    else
    cout << "false" << endl;
	return 0;
}
