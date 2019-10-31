/* Author: Aviral Verma. Description: Kadane's Algorithm for Maximum Sum Subarray Problem */
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
 {
	int t;
	cin >> t;
	while(t>0)
	{
	    int n;
	    cin >> n;
	    int i, ele;
	    vector<int> myVec;
	    for(i=0; i<n; i++)
	    {
	        cin >> ele;
	        myVec.push_back(ele);
	    }
	    int max_ending_here=0, max_so_far=INT_MIN;
	    for(i=0; i<n; i++)
	    {
	        max_ending_here = max_ending_here + myVec[i];
	        if(max_ending_here>max_so_far)
	            max_so_far = max_ending_here;
	        if(max_ending_here<0)
	            max_ending_here = 0;
	    }
	    cout << max_so_far << endl;
	    t--;
	}
	return 0;
}
