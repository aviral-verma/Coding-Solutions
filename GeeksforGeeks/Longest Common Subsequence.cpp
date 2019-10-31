/* Author: Aviral Verma, Description: Solution to Longest Common Subsequence problem using Dynamic Programming approach */
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int LCS(string X, string Y, int m, int n, map<string, int> &myMap)
{
    if(m==0 || n==0)
        return 0;
    
    string key = to_string(m) + "|" + to_string(n);
    if(myMap.find(key)==myMap.end())
    {
        if(X[m-1]==Y[n-1])
        myMap[key] = LCS(X, Y, m-1, n-1, myMap)+1;
        
    else  
        myMap[key] = max(LCS(X, Y, m-1, n, myMap), LCS(X, Y, m, n-1, myMap));
    }
    return myMap[key];

}
int main()
 {
	int t;
	cin >> t;
	while(t>0)
	{
	    int m, n;
	    cin >> m >> n;
	    string str1, str2;
	    cin.ignore();
	    getline(cin, str1);
	    getline(cin, str2);
	    
	    map<string, int> myMap;
	    cout << LCS(str1, str2, m, n, myMap) << endl;
	    
	    t--;
	}
	return 0;
}
