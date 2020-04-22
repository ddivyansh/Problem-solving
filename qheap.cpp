#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int  main()
{
int q;
cin>>q;
int ch;
int x;
set<int> s;
set<int> :: iterator it;
while(q>0)
{
    cin>>ch;
    if(ch==1)
    {
        cin>>x;
        s.insert(x);
    }
    if (ch==2)
    {
        cin>>x;
        auto it=s.find(x);
        s.erase(x);
    }
    if(ch==3)
    {
        it=s.begin();
        cout<<*it<<endl;
    }
    q--;

}
return 0;

}
