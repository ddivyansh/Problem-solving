
/*
The structure of the node is

typedef struct node {

	int freq;
    char data;
    node * left;
    node * right;

} node;
*/
map<string,string>   m;
void create_map(node* root,string key)
{
if(root==NULL)
return;
//in our map we'll store only nodes with characters like 'a'/'b'.
if(root->data!='\0')
{
m[key].push_back(root->data);
}
create_map(root->left,key+"0");//for left
create_map(root->right,key+"1");//for right
//now when our call gets cleared we'll remove that value of edge from key
//for ex: when call of B gets cleared so key should contain '0' only not
//'0 1' for this we'll do the below operation so that when recursive call terminates it does this thing.
key.pop_back();
}

void decode_huff(node * root, string s)
{
    if(root==NULL)
    return;
    string key="";
    string decode="";//result string
    create_map(root,key);
    map<string,string> :: iterator itr;
    string res="";//for checking the combination of s in hash-map
    //now my map is created
    for(auto i=0;i<s.length();i++)
    {
        res=res+s[i];
        itr=m.find(res);
        //when res is found it'll not contain the address of  m.end()
        if(itr!=m.end())
        {
            decode=decode+m[res];//add to the o/p string
            res="";//resetting so that new key value can be used
        }

    }
cout<<decode;//print the output
}
