/*
Complete the function isBalanced in the editor below. It must return a string: YES if the sequence is balanced or NO if it is not.

isBalanced has the following parameter(s):

s: a string of brackets

*/

#include<iostream>
using namespace std;
#include<stack>
string isBalanced(string s) 
{
    string yes="YES";
    string no="NO";
    stack<char> b;
    for(int i=0;i<s.length();i++)
    {
    //if opening bracket is encountered push it
    if(s[i]=='(' || s[i]=='{' || s[i]=='[')
    {
        b.push(s[i]);
    }
    //if closing bracket is encountered,match it with top element in stack
    //only if the stack is not empty.
    if(!b.empty())
    {
    if(s[i]==')' || s[i]=='}' || s[i]==']')
    {
    //if match happens pop the element from stack if not return NO
        if(s[i]==')' && b.top()=='(')
        b.pop();
        else if(s[i]=='}' && b.top()=='{')
        b.pop();
        else if(s[i]==']' && b.top()=='[')
        b.pop();
        else
        //match does not happen
        return no;
    }
    }
    else
    return no;
    }
    //at the end of loop stack should be empty
    if(b.empty())
    {
        return yes;
    }
    //if not then stack is unbalanced
    return no;
}
int main()
{
}
