//in this we've to find the depth of a particular node in a BST
//depth value is initially 1


int find_depth(node* root,int data,int depth)
{
if(root==NULL)//if root is  null
return 0;
if(root->data==data)//particular node is found then return depth
return depth;
//for left
if(data<=root->data)
find_depth(root->left,data,depth+1);
else
find_depth(root->right,data,depth+1);

}
