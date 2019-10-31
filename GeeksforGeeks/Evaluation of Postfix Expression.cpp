/* Author: Aviral Verma, Description: This is a soluiton to evaluation of postfix expression problem in gfg */
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
	    int op1, op2, newop;
	    stack<int> st;
	    cin >> s;
	    for(auto ch: s)
	    {
	        if(ch=='*'||ch=='/'||ch=='+'||ch=='-')
	        {
	            op2 = st.top();
	            st.pop();
	            op1 = st.top();
	            st.pop();
	            switch(ch)
	            {
	                case '+': st.push(op1+op2);
	                    break;
	                case '-': st.push(op1-op2);
	                    break;
	                case '*': st.push(op1*op2);
	                    break;
	                case '/': st.push(op1/op2);
	                    break;
	            }
	        }
	        else
	        st.push(ch-'0');
	    }
	    cout << st.top()<< endl;
	    t--;
	}
	return 0;
}
