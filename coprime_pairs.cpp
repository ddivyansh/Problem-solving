#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool coprime (int a,int b)
{
    return(__gcd(a,b)==1);
}

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        vector<long int> a;
        long int sum=0;
        int n;
        long int value;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>value;
            a.push_back(value);
        }
        for(int j=0;j<n-1;j++)
        {
            for(int l=j+1;l<n;l++)
            {
                if(coprime(a[j],a[l]))
                {
                    sum=sum+(a[j]*a[l]);
                }
            }
        }
        cout<<sum % 1000000007<<endl;
        t--;
   }
return 0;
}
