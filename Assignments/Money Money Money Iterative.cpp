#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int power(long long int a, long long int b) {
    if(b==0)
        return 1;
    else if(b%2==0)
    {
        return (power(a, b/2)*power(a, b/2))%1000000007;
    }
    else return ((a*power(a, b/2))%1000000007*power(a, b/2))%1000000007;
}

long long int transaction(long long int n, long long int m) {
    long long int i, term;
    if(m==0)
        return 1;
    if(n==1||m==1)
        return 0;
    if(m==2)
        return n-1;
    else
    {
        term = n-1;
        for(i=3; i<=m; i++)
        {
            if(power((n-1), (i-1)) < term)
            {
                term = power((n-1), (i-1)) + 1000000007 - term;
            }
            else
            term = power((n-1), (i-1)) - term;
        }
    }
    return term;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int n;
    long long int m;
    cin >> n;
    cin >> m;
    long long int result = transaction(n,m);
    cout << result;
    return 0;
}
