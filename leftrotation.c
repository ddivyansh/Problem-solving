// Complete the rotLeft function below.
//d is the no of rotation,output is the array after d rotations.
vector<int> rotLeft(vector<int> a, int d)
{
int mod=(d)%a.size();
vector<int> res;
for(int i=0;i<a.size();i++)
{
    res.push_back(a[(mod+i)%a.size()]);// this uses the concept of circular array
}
return res;
}
int main()
{


}
