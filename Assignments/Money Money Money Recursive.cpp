#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int power(int a, int b)
{
    long long int i;
    long long int ans = 1;
    for(i=0; i<b; i++)
    {
        ans = (ans*a)%1000000007;
    }
    return ans;
}
long long int transaction(int n, int m) {
    if(m==0)
        return 1;
    if(n==1||m==1)
        return 0;
    else 
    {
        if(power((n-1),(m-1))<transaction(n, m-1))
           {
            return power((n-1),(m-1)) + 1000000007 - transaction(n, m-1);
           }
        else
            return power((n-1),(m-1)) - transaction(n, m-1);
    }

}
int main() {
    int n;
    int m;
    cin >> n;
    cin >> m;
    long long int result = transaction(n,m);
    cout << result;
    return 0;
}
