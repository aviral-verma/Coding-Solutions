/*Author: Aviral Verma. This solution is just a minor modification of merge sort: line 27 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void merge(int a[], int l, int m, int r, long long int &inversionCount){
    int arr1[m-l+1];
    int arr2[r-m];
    int i,j,k;
    
    for(i=0; i<(m-l+1); i++)
        arr1[i]=a[l+i];
    for(i=0; i<(r-m); i++)
        arr2[i]=a[m+1+i];
    
    i=j=0; k=l;
    while(i<(m-l+1)&&j<(r-m))
    {
        if(arr1[i]<=arr2[j])
            a[k++]=arr1[i++];    
        else
        {
            a[k++]=arr2[j++];
            inversionCount+=(m-l+1-i);
        }    
    }   
    while(i<(m-l+1))
        a[k++]=arr1[i++];   
    while(j<(r-m))
        a[k++]=arr2[j++];    
}
void mergeSort(int a[], int l, int r, long long int &inversionCount)
{
    if(l<r)
    {
        int m = l+(r-l)/2;
        mergeSort(a, l, m, inversionCount);
        mergeSort(a, m+1, r, inversionCount);
        merge(a, l, m, r, inversionCount);     
    }
}

int main() {
    int t;
    cin >> t;
    while(t>0)
    {
        int size;
        cin >> size;
        int a[size];
        int i;
        long long int inversionCount = 0;
        
        for(i=0; i<size; i++)
            cin >> a[i];
            
        mergeSort(a, 0, size-1, inversionCount);
        cout << inversionCount <<endl;
        t--;
    }
        return 0;
}
