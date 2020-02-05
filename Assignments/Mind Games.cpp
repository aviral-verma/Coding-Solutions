#include <iostream>
using namespace std;
#define max 1000000
int arr[max], countArr[max]={0}, ptr=0, size=0;

void learn(int x) {
    int i, found = 0;
    for(i=0; i<size; i++) {
        if(arr[i]==x)
        {
            countArr[i]++;
            found = 1;
        }
    }
    if(found==0)
    {
        arr[size++]=x;
    }
    
    
    arr[ptr] = x;
}

void forget(int x) {
    
}

void decrease(int x, int n) {
    
}

int smaller_nums(int x) {
    
}

int larger_nums(int x) {
    
}

int asc(int k) {
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i, q;
    cin >> q;
    for(i=0; i<q; i++)
    {
        
    }
    return 0;
}
