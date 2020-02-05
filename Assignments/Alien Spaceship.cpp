#include <iostream>

using namespace std;

#define max 10000000
int top = -1, tempTop=-1;
long long int stack[max];
long long int tempStack[max];

bool isEmpty() {
    return top<0;
}

void push(long long int x) {
    if(top<max-1)
    {
      stack[++top] = x;
        if(tempTop==-1)
        {
            tempStack[++tempTop] = x;      
        }
            
        else {
            if(x<tempStack[tempTop])
                tempStack[++tempTop] = x;
        }
            
    }        
}

int get_top() {
    if(top>=0)
        return stack[top];
    else return -1;
}

void pop() {
    if(top>=0)
    {
        if(stack[top]==tempStack[tempTop])
            tempTop--;
        top--;
    }
        
}

int get_min() {
    if(tempTop>=0)
        return tempStack[tempTop];
    else return -1;
}

void clear() {
    top = -1;
    tempTop = -1;
}

int main() {
    int q;
    long long int p;
    string s;
    cin >> q;
    int i;
    for(i=0; i<q; i++)
    {
        cin >> s;
        if(s=="isEmpty")
        {
            if(isEmpty())
            cout << "True" << endl;
            else cout << "False" << endl;
        }
        if(s=="push")
        {
            cin >> p;
            push(p);
        }
        if(s=="get_top")
        {
            cout << get_top() << endl;
        }
        if(s=="pop")
        {
            pop();
        }
        if(s=="get_min")
        {
            cout << get_min() << endl;
        }
        if(s=="clear")
        {
            clear();
        }
    }
    return 0;
}
