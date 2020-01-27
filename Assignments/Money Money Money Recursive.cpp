#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int transaction(int n, int m) {
    if(n==1||m==1)
        return 0;
    else 
        return pow((n-1),(m-1)) - transaction(n, m-1);
}
int main() {
    int n;
    int m;
    cin >> n;
    cin >> m;
    int result = transaction(n,m);
    cout << result;
    return 0;
}
