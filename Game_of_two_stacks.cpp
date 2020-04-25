/*
Alexa has two stacks of non-negative integers, stack A and stack B
Alexa challenges Nick to play the following game:
In each move, Nick can remove one integer from the top of either stack A or
or stack B
Nick keeps a running sum of the integers he removes from the two stacks.
Nick is disqualified from the game if, at any point, his running sum becomes greater than some integer given at the beginning of the game.
Nick's final score is the total number of integers he has removed from the two stacks.
*/
//greedy approach(test case-4/14)
int twoStacks(int x, vector<int> a, vector<int> b) 
{
stack<int >A;
int h_A=0;
stack<int >B;
int h_B=0;
int sum=0;
int count=0;
//create two stacks
//removal operation takes till sum<=x
//for nick to win the game then he has to remove max no of elements, it can only happen
//if he removes the minimum element from either of two stacks
for(int i=a.size()-1;i>=0;i--)
{
A.push(a[i]);
h_A++;
}
for(int j=b.size()-1;j>=0;j--)
{
B.push(b[j]);
h_B++;
}
while(sum<=x && h_A>0 && h_B>0)
{
    //greedy approach
    if(A.top()<=B.top())
    {
        if(sum+A.top()<=x)
        {
        if (h_A==0)
        break;
        sum=sum+A.top();
        count=count+1;
        A.pop();
        h_A=h_A-1;
        }
        else
        break;
    }
    else
    {
        if(sum+B.top()<=x)
        {
        if(h_B==0)
        break;
        sum=sum+B.top();
        count=count+1;
        B.pop();
        h_B=h_B-1;
        }
        else
        break;
    }
}   

return count;

}


//Dynamic programming(all test case)
function()
{
int sum=0,count=0,temp=0,i=0,j=0;        
        
        while(i<n && sum+a[i]<=x){    //considering only first stack and calculating count
            sum+=a[i];
            i++;
        }
        count=i;        
       
        while(j<m && i>=0){          //now adding one element of second stack at a time and subtracting the top element of first stack and calculating the count   
            sum+=b[j];             
            j++;
            while(sum>x && i>0){
                i--;
                sum-=a[i];
            }
            if(sum<=x && i+j>count)
                count=i+j;
        }
        cout<<count<<endl;
    } 
    return 0;
    }
