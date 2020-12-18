nt main() {
	//code
	int t;
	cin >> t;
	while(t > 0){
	    int n;
	    int p;
	    cin >> n;
	    vector<int> a;
	    for(int i = 0; i< n; i++){
	        int x;
	        cin >> x;
	        a.push_back(x);
	    }
	    cin >>  p;
      //sorted the vector
	    sort(a.begin(),a.end());
	    int sum = 0;
      //starting from the last index so we get the maximum possible sum
	    for(int i = n-1;i > 0; i--)
      {
	        if(a[i] - a[i-1] < p )
          {
	            sum = sum  + a[i] + a[i-1];
	            i--;
	        }
	    }
	    cout << sum <<endl;
	    t--;
	}
	return 0;
}
