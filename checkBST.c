//check whether binary tree is BST or not
// uses inorder traversal to check whether tree is BST or not.
//if BST then inorder is sorted array
vector<int> r;
    void checkinorder(Node* root)
    {
        if (root==NULL) return ;
        checkinorder(root->left);
        r.push_back(root->data);
        checkinorder(root->right);
    }
    //vector r contains the inorder traversal
	bool checkBST(Node* root)
    {
        if(root==NULL)
        return 0;
        checkinorder(root);
        for(int  i=0;i<r.size();i++)
        {
            if((i+1)<r.size())
            if(r[i+1]<=r[i])//checking whether inorder is sorted or not ??
                return 0;
        }
        return 1;

	}
