//Given an array of distinct positive numbers, the task is to calculate the minimum number of subsets (or subsequences) from the array such that each subset contains consecutive numbers.

int numofsubset(int arr[], int n)
{
  int i;
  set<int> s;
  for(i=0;i<n;i++)
  {
    //using a set to store the number in ascending order.
     s.insert(arr[i]);
  }
  //set is ready
  set<int> ::iterator it;
  set<int> ::iterator pt;
  int num=0;//number of subsets
  for(it=s.begin();it!=s.end();it++)
  {
      int d=1;
      while(d)//while condition is true
    {
        //f will store the key of next consecutive number of IT.
        int f=(*it+1);
        pt=s.find(f);
        if(pt!=s.end()) //in case next number is present
        it=pt; // updating the value of IT guesss why ? :) 
        if(pt==s.end())// in case the consecutive number is not present
        {
        d=0; // to exit out of while loop    
        }      
    }
      num=num+1; //updating the value of num.
  }
  return num;   
}

int main()
{
 int t;
    vector<int> v1;
    cin>>t;
    while(t>0)
    {
        int i;
        int r;
        int n;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        r=numofsubset(arr,n);
        v1.push_back(r);
        t--;
    }
    for(auto i=v1.begin();i!=v1.end();i++)
    {
        cout<<*i<<endl;
    }
    
	return 0;
}
