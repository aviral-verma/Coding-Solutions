/* Author: Aviral Verma */
class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for(auto ch: s)
        {
            switch(ch)
            {
              case '(': myStack.push(ch);
                    break;
              case '{': myStack.push(ch);
                    break;
              case '[': myStack.push(ch);
                    break;
              case ')': if(myStack.empty()||myStack.top()!='(') return false; else myStack.pop();
                    break;
              case '}': if(myStack.empty()||myStack.top()!='{') return false; else myStack.pop();
                    break;
              case ']': if(myStack.empty()||myStack.top()!='[') return false; else myStack.pop();
                    break;
            }
        }
        if(myStack.empty()) 
            return true; 
        else 
            return false;
    }
};
