class Node {
    int key;
    Node left, right;

    public Node(int key) {
        this.key = key;
        left = right = null;
    }
}

class BinaryTree {
    Node root;

    // Helper method to check if a binary tree is a BST
    boolean isBSTUtil(Node node, Integer min, Integer max) {
        if (node == null) {
            return true;
        }
        if (min != null && node.key <= min) {
            return false;
        }
        if (max != null && node.key >= max) {
            return false;
        }
        return isBSTUtil(node.left, min, node.key) && isBSTUtil(node.right, node.key, max);
    }

    boolean isBST(Node root) {
        return isBSTUtil(root, null, null);
    }
}

public class Main {
    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        tree.root = new Node(50);
        tree.root.left = new Node(30);
        tree.root.right = new Node(70);
        tree.root.left.left = new Node(20);
        tree.root.left.right = new Node(40);

        System.out.println("Is the binary tree a BST? " + tree.isBST(tree.root));
    }
}
