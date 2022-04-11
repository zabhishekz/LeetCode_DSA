node* deleteInBST(node*root, int data){
    if(root == NULL){
        return NULL;
    }
    if(data < root->data){
        root->left = deleteInBST(root->left, data);
    }
    else if(data > root->data){
        root->right = deleteInBST(root->right, data);
    }
    else if(data == root->data){
        if(root->left == NULL and root->right == NULL){
            delete root;
            return NULL;
        }
        else if(root->right != NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->left != NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        else{
            node* ino = root->right;
            while(ino->left != NULL){
                ino = ino->left;
            }
            root->data = ino->data;
            root->right = deleteInBST(root->right, ino->data);
        }
    }
    return root;
}