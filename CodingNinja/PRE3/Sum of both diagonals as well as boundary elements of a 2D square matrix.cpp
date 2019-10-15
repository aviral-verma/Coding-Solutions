#include <iostream>
using namespace std;

int main() {
    int i, j, n;
    cin >> n;
    int a[n][n];
    
    //taking matrix elements as the input
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
           cin >> a[i][j];
        }
    }
    //define variables to store the respective sum
    int leftDiagonal = 0, rightDiagonal = 0, boundaryElements = 0, duplicates = 0;
    
    /* iterate over each and every element of the matrix and 
    start storing sum of both the diagonals as well as 
    boundary elemnts and also keep track of duplicate elements 
    that we store more than once */
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                leftDiagonal+=a[i][j];
            }
            if(i==n-j-1)
            {
                rightDiagonal+=a[i][j];
            }
            if(i==0 || i==n-1)
            {
                //storing the sum of all the horizontal boundary elements
                boundaryElements+=a[i][j];
            }
            if(j==0 || j==n-1)
            {
                //storing the sum of all the vertical boundary elements
                boundaryElements+=a[i][j];
            }
            if(i==0 && j==0 || i==0&&j==n-1 || i==n-1&&j==0 || i==n-1&&j==n-1)
            {
                //duplicates stores the 4 corner elements of the matrix
                duplicates+=a[i][j];
            }
        }
    }
    //if n is odd, we need to remove the common element amongst both diagonals
    if(n%2!=0)
    {
        duplicates = 2*duplicates + a[n/2][n/2];
    }
    
    /* else just multiply duplicates by 2 since we 
    calculated the corner elements twice while calculating boundary elements */
    else 
    {
        duplicates = 2*duplicates;
    }
    
    /* remove the duplicates from the sum of both the diagonals 
    along with boundary elements */
    int sum = leftDiagonal+rightDiagonal+boundaryElements-duplicates;
    
    cout << sum;
    
	return 0;
}
