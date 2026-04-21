# Rotation

Rotation is a restructuring operation in an AVL Tree used to rebalance the tree when it becomes unbalanced after insertion or deletion. Rotation changes the position of nodes while preserving the Binary Search Tree (BST) property, where left child values are smaller and right child values are larger.

AVL balances itself by rotating its structure until the balance factor satisfies the valid condition, which must be -1, 0, or 1.

## Why Rotation is Needed

When nodes are inserted or deleted, one side of the tree may become taller than the other side. If this imbalance is not fixed, the tree can become skewed, making search, insertion, and deletion slower.

Rotation is needed to:

- Maintain balance of the tree
- Keep operations efficient
- Preserve O(log n) time complexity
- Prevent the tree from becoming like a linked list

## What is Balance Factor (BF)

Balance Factor is the difference between the height of the left subtree and the height of the right subtree of a node.

BF = h(left) - h(right)

Where:

- BF = -1 → balanced
- BF = 0 → balanced
- BF = 1 → balanced
- BF > 1 → left-heavy (unbalanced)
- BF < -1 → right-heavy (unbalanced)

To determine which rotation should be performed during insertion or deletion, the AVL Tree checks the balance factor of nodes iteratively.

```cpp
int _getBalanceFactor(AVLNode* node){
    if(node==NULL)
        return 0;
    return _getHeight(node->left)-_getHeight(node->right);
}
