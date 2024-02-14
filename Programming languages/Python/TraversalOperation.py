# Tree Node class
class TreeNode:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

# Binary Tree class
class BinaryTree:
    def __init__(self, root):
        self.root = root

    # Inorder traversal (left -> root -> right)
    def inorder_traversal(self, node):
        if node:
            self.inorder_traversal(node.left)
            print(node.data, end=" ")
            self.inorder_traversal(node.right)

    # Preorder traversal (root -> left -> right)
    def preorder_traversal(self, node):
        if node:
            print(node.data, end=" ")
            self.preorder_traversal(node.left)
            self.preorder_traversal(node.right)

    # Postorder traversal (left -> right -> root)
    def postorder_traversal(self, node):
        if node:
            self.postorder_traversal(node.left)
            self.postorder_traversal(node.right)
            print(node.data, end=" ")

    # Level order traversal (breadth-first)
    def level_order_traversal(self):
        if self.root is None:
            return

        queue = [self.root]
        while queue:
            node = queue.pop(0)
            print(node.data, end=" ")
            if node.left:
                queue.append(node.left)
            if node.right:
                queue.append(node.right)

# Create a binary tree
root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)
root.left.left = TreeNode(4)
root.left.right = TreeNode(5)
root.right.left = TreeNode(6)
root.right.right = TreeNode(7)

# Create a binary tree instance
binary_tree = BinaryTree(root)

# Perform different traversals
print("Inorder Traversal:")
binary_tree.inorder_traversal(root)  # Output: 4 2 5 1 6 3 7
print("\nPreorder Traversal:")
binary_tree.preorder_traversal(root) # Output: 1 2 4 5 3 6 7
print("\nPostorder Traversal:")
binary_tree.postorder_traversal(root) # Output: 4 5 2 6 7 3 1
print("\nLevel Order Traversal:")
binary_tree.level_order_traversal() # Output: 1 2 3 4 5 6 7
