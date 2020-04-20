/*
problem statement:
Given a sorted integer array. We need to make array elements distinct by increasing values and keeping array sum minimum possible.
We need to print the minimum possible sum as output.
*/
#include <iostream>
using namespace std;
#include<set>
#include<vector>
int main()
{
	//code
	int t;
	cin>>t;//test case
	while(t>0)
	{
	    int n;//no of elements
	    cin>>n;
	    vector<int> a;
	    int v;//value
	    int sum=0;
	    set<int> m;//to store unique elements
	    for(int i=0;i<n;i++)// create a vector
	    {
	        cin>>v;
	        a.push_back(v);
	    }
	    for (int k=0;k<a.size();)//iterate through the vector
	    {
	        int s=a[k];
	        while(1)
	        {
	        auto itr=m.find(s);//find s
//if not found,the value is unique and insert it in the set !!
	         if(itr==m.end())
	         {
	            m.insert(s);
	            k++;// increment the k and break
	            break;
	         }
//if found,then it means we'll have to increase the value and search again !!
	         else if(itr!=m.end())
	         {
                s=s+1;
             }
            }
        }
	    for(auto i=m.begin();i!=m.end();i++)
	    {
	        sum=sum+(*i);
	    }
	    cout<<sum<<endl;
	    t--;

	}
	return 0;
}
