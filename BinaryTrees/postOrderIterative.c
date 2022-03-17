// iterative postorder traversal on binary tree
// postorder : L -> R -> Node
// use two stacks 


void postOrderIterative2 (BTNode *root) {
    Stack s1 , s2;
    s1.size = 0;
    s1.top = NULL;
    s2.size = 0;
    s2.top = NULL;
    // push root into s1
    BTNode *curr = root;
    push(&s1, curr);
    while (!isEmptyStack(s1)) {
        // pop top node of S1 and push into S2
        curr = peek(s1);
        pop(&s1);
        push(&s2, curr);
        // push node->left and node->right into S1
        if (curr->left) push(&s1, curr->left);
        if (curr->right) push(&s1, curr->right);
    }
    
    // pop all the elements from s2
    while (!isEmptyStack(s2)) {
        printf("%d ", peek(s2)->item);
        pop(&s2);
    }
    printf("\n");
}
