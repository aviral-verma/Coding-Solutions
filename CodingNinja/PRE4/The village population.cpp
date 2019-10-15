#include <iostream>
using namespace std;

int main() {
    int i,j=0,n;
    cin >> n;
    int arr[n];
    int result[n];
    
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
        
    }
    for(i=0; i<n/2; i++)
    {
        int left = i;
        int right = n-i-1;
        int combinedPeople = arr[left] + arr[right];
        int groups = combinedPeople/10;
        int remainingPeople = combinedPeople%10;
        result[j++] = groups;
        result[j++] = remainingPeople;
    }
    for(i=0; i<n; i++)
    {
        cout << result[i++] << " ";
        cout << result[i] << endl;
    }
	return 0;
}
