// { Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    /*
    Approach 1 :
    using 0(n) space
    take a vector to store the required order, we don't have to sort the array, as
    the sorted array is provided to us(corner case for odd element)
    
    Approach 2 :
    using O(1) space
    */
    
    void rearrange(long long *a, int n) 
    { 
    if(n==1)
        return ;
    else {
    vector<int> res;
    int l=0;
    int h=n-1;
    while(l<=h)//for odd elements
    {
        res.push_back(a[h]);
        res.push_back(a[l]);
        h--;
        l++;
    }
    for(int i=0;i<n;i++)
    {
        a[i]=res[i];
    }
    
    	 
    }}
};

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends
