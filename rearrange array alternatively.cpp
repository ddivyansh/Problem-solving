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
    Creating an array of binded values, which allows us to access two values at the same time
    if we want to access a & b, (a,b<=n)
    so a=a+(b%n)*n, old value can be accessed using a%n and a/n
    
     void rearrange(long long *a, int n) 
    { 
    int maxi=n-1; //maximum index
    int mini=0; //minimum index
    int z=a[n-1]+1;
    int i=0;
    //prepare the array of binded values of maximum(at even indexs)
    //& minimum(at odd indexes)
    while(i<n)
    {
        if(i%2==0)//even index
            {
                a[i]=a[i]+(a[maxi]%z)*z;
                maxi--;
            }
        else
        {
            a[i]=a[i]+(a[mini]%z)*z;
            mini++;
        }
        i++;
    }
    for(int k=0;k<n;k++)
    {
     a[k]=a[k]/z;   
    }
    
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
