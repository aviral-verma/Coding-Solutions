#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int power(int a, int b) {
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
        
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    int m;
    cin >> n;
    cin >> m;
    long long int result = transaction(n,m);
    cout << result;
    return 0;
}
