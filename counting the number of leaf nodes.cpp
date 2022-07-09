void inordertraversal(BinaryTreeNode<int> *root , int &count){
    if(root==NULL){
        return;
    }
    inordertraversal(root->left, count);
    if(root->left==NULL && root->right==NULL){
        count++;
    }
    inordertraversal(root->right, count);
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int count=0;
    inordertraversal(root,count);
    return count;
    
}
