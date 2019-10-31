/* Author: Aviral Verma. Description: Infix to Postfix expression converison using stack */
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if(c=='^')
        return 3;
    if(c=='/' || c=='*')
        return 2;
    if(c=='+' || c=='-')
        return 1;
    return -1;
}
int main()
 {
	int t;
	cin >> t;
	while(t>0)
	{
	    string s;
	    cin >> s;
	    string result="";
	    stack<char> st;
	    for(auto ch: s)
	    {
	        if((ch>='a' && ch<='z') || (ch>='A'&&ch<='Z'))
	            result+=ch;
	        else if(ch=='(')
	            st.push(ch);
	        else if(ch==')')
	        {
	            while(!st.empty() && st.top()!='(')
	            {
	                result+=st.top();
	                st.pop();
	            }
	            if(st.top()=='(')
	                st.pop();
	        }
	        else 
	        {
	            while(!st.empty() && prec(ch)<=prec(st.top()))
	            {
	                result+=st.top();
	                st.pop();
	            }
	            st.push(ch);
	        }
	    }
	    while(!st.empty())
	    {
	        result+=st.top();
	        st.pop();
	    }
	    cout << result << endl;
	    t--;
	}
	return 0;
}
