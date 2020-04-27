// in this we find the depth of node in binary tree
//the depth initially is  1

int find_depth(node* root,int data,int depth)
{
if(root==NULL)
return 0;
if(root->data==data)
return depth;
//now since it's a binary tree so we cant put any condition
//now keep going to the left subbtree and if the recursive call return depth(something!=0) return it as it's the depth
// and if it doesn't find anything in the left so it'll hit base case and return zero and move to right subtree.
int d=find_depth(root->left,data,depth+1);
if(d!=0)
return d;
d=find_depth(ropt->right,data,depth+1);
return d;
}
