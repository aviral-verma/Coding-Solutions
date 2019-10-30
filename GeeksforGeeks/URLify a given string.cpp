/*https://practice.geeksforgeeks.org/problems/urlify-a-given-string/0
Solution Author: Aviral Verma
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
 {
	int t;
	cin >> t;
	while(t>0)
	{
	    string s;
	    cin.ignore();
	    getline(cin, s);
	    int size;
	    cin >> size;
	    stringstream check(s);
	    string token;
	    vector<string> tokens;
	    while(getline(check, token, ' '))
	    {
	        tokens.push_back(token);
	    }
	    int tokensize = tokens.size();
	    string result = tokens[0];
	    int i = 1;
	    while(i<tokensize)
	    {
	        result=result+"%20"+tokens[i];
	        i++;
	    }
	    cout << result <<endl;
	    
	    
	    t--;
	}
	return 0;
}
