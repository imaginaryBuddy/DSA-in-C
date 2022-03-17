// using stack to perform inorder traversal on the binary tree 
// inorder : L -> Node -> R
void inOrderIterative (BTNode *root) {
  
  // initialize a stack 
    Stack s;
    s.size = 0;
    s.top = NULL;
    BTNode *curr = root;
    
    
    while (!isEmptyStack(s) || curr != NULL) {
      // goal : traverse all the way to the leftmost leafnode 
        if (curr != NULL) {
            push(&s, curr);
            curr = curr->left;
        }
       
      // here, curr == NULL 
        else {
          // visit the node 
            curr = peek(s);
            pop(&s);
            printf("%d ", curr->item);
            curr = curr->right;
        }
    }
    printf("\n");
}
