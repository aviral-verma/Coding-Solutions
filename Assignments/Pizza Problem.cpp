#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

bool possible(vector<int> &a, int k, int maxSum)
{
    /* Greedily insert elements into the same part
     * Create a new part when sum exceeds maxSum 
     */
    
    int parts = 1;
    int sum = 0;
    
    int i = 0;
    while(i < a.size())
    {
        parts = parts + 1;
        int backup = a[i];
        
        int currentSum = a[i] + sum;
        if(currentSum > maxSum)
        {
            sum = backup;
        }
        else
        {
            sum += backup;
            parts = parts - 1;
        }
        
        if(sum > maxSum or a[i] > maxSum)
            return false;
        
        i++;
    }
    
    if(parts > k)
        return false;
    else
        return true;
}

int books(vector<int> &a, int k)
{
    // Tricky test case. Missed it in the first attempt
    if(k >= a.size())
        return *max_element(a.begin(), a.end());
        
    int low = 1;
    int high = 1000000000;
    while(low < high)
    {
        int mid = (low + high)/2;
        
        if(possible(a, k, mid))
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    
    return low;
}

int32_t main()
{
    // fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while(q--)
    {
    int n;
    cin >> n;
    int k;
    cin >> k;
    
    vector<int> a(n);
    for(auto &ele : a)
        cin >> ele;
    

    
    cout << books(a, k) << endl; 
    }

    return 0;
}
