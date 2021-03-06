/* Author: Aviral Verma */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r){
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
        a[k++]=arr2[j++];
    }   
    while(i<(m-l+1))
        a[k++]=arr1[i++];
    while(j<(r-m))
        a[k++]=arr2[j++];  
}
void mergeSort(int a[], int l, int r)
{
    if(l<r)
    {
        int m = l+(r-l)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);     
    }
}

int main() {
    int size;
    cin >> size;
    int a[size];
    int i;
    for(i=0; i<size; i++)
        cin >> a[i];
    mergeSort(a, 0, size-1);
    cout << '[';
    for(i=0; i<size-1;i++)
        cout << a[i] <<',';
    cout << a[i] << ']';
    return 0;
}
