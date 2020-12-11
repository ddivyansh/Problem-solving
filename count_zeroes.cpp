//you're given an input array, it consists of 1s and 0s you've to find the number of times 0s
int countZeroes(int arr[], int n) 
    {
        // code here
        map<int, int> m;
        int i;
        for(i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        map<int,int> ::iterator it;
        it=m.find(0);
        return it->second; 
    }
