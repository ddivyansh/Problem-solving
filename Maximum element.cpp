/*
You have an empty sequence, and you will be given

queries. Each query is one of these three types:

1 x  -Push the element x into the stack.
2    -Delete the element present at the top of the stack.
3    -Print the maximum element in the stack.
*/
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() 
{
    int q;
    int v;
    int ch;
    stack<int> v1;
    stack<int> max;//for storing max elements in order
    cin>>q;
    while (q>0) 
    {
        cin>>ch;
        if(ch==1)
        {
            cin>>v;
            v1.push(v);
            //if the max stack is empty or the new value is >= top of max 
            if(max.empty() || (v>=max.top()))
            {
                max.push(v);
            }

        }
        if (ch==2)
        {
            int temp=v1.top();
            v1.pop();
        //remove from the max stack only if the maximum value is being removed
            if(temp==max.top())
            {
                max.pop();
            }
        }
        if (ch==3)
        {
            //the top will always containt maximum element
            cout<<max.top()<<endl;
        }
        q--;
    }
    
}
