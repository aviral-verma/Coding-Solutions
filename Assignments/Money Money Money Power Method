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
    int answer;
    answer = ((power((n-1),m) + (n-1)*power((-1),m))*(power(n,(1000000007-2))))%1000000007;
    return answer;
}
int main() {
    long long int n;
    long long int m;
    cin >> n;
    cin >> m;
    long long int result = transaction(n,m);
    cout << result;
    return 0;
    return 0;
}
