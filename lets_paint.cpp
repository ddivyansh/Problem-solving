/*
let's paint 
find minimum number of boxes for bob to win the competition.
*/
long long findMinimum (vector<long long> arr) 
{
   long long sum=0;
   multiset<long long> s;
   for(long long i=0;i<arr.size();i++)
   {
   sum=sum+arr[i];
   s.insert(arr[i]);
   }
   long long count=0;
   long long  check_sum=0;
   long long rem_sum=0;
   multiset<long long>::reverse_iterator itr;
   for(itr=s.rbegin();itr!=s.rend();itr++)
   {
      check_sum=check_sum+(*itr);
      count=count+1;
      rem_sum=sum-check_sum;
      if(check_sum>rem_sum)
      break;
   }
   //cout<<check_sum<<rem_sum<<endl;
   return count;  
}
