//count zeroes xor pair which result in zero
{
    int t;
    cin>>t;//test case
    while(t>0)
    {
    int n;// no of elements
    cin>>n;
    int v;
    map<int, int> m;//using hash-map
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        m[v]++;
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(i->second>=2)//if value is more or equal to 2
        count=count+((i->second)*(i->second-1))/2;//no of possible pairs with this value.
    }
    cout<<count<<endl;
    t--;
    }

	return 0;
}
