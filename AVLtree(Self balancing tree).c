/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node;
this is the main function.
*/
int height(node* root)
{
    if(root==NULL)
        return -1;
    return root->ht;
}
node* create_node(int key)
{
    node* temp=new node();
    temp->val=key;
    temp->left=temp->right=NULL;
    temp->ht=0;
    return temp;
}
int max_(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}
int get_balance(node* root)
{
        return height(root->left)-height(root->right);
}
node* right_rotate(node* root)
{
    node * new_root=root->left;
    node* temp=new_root->right;
    new_root->right=root;
    root->left=temp;
    root->ht= max(height(root->left),height(root->right))+1;
    new_root->ht= max(height(new_root->left),height(new_root->right))+1;
    return new_root;
}
node* left_rotate(node* root)
{
    node* new_root=root->right;
    node* temp=new_root->left;
    new_root->left=root;
    root->right=temp;
    root->ht= max(height(root->left),height(root->right))+1;
    new_root->ht= max(height(new_root->left),height(new_root->right))+1;
    return new_root;
}

node * insert(node * root,int val)
{
	if(root==NULL)
    {
        root=create_node(val);
        return root;
    }
    if(val<=root->val)//left
        root->left=insert(root->left,val);
    else if(val>root->val)
        root->right=insert(root->right,val);//right
    //for updating height of ancestor node
    root->ht=1+max(height(root->left),height(root->right));
    //now find the balance factor for node
    int balance=get_balance(root);
    if(balance>1 && val<root->left->val) //left left case
        return right_rotate(root);
    if(balance<-1 && val>root->right->val) //right right case
        return left_rotate(root);
    if(balance>1 && val>root->left->val) //left right case
    {
        root->left=left_rotate(root->left);//first left rotate
        return right_rotate(root);//then rotate right
    }
    if(balance<-1 && val<root->right->val)// right left
    {
        root->right=right_rotate(root->right);
        return left_rotate(root);
    }
    //finally return root
    return root;
}
int main()
{


}
