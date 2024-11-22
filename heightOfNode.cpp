class Node {
    int value;
    Node left, right;

    Node(int value) {
        this.value = value;
        left = right = null;
    }
}

class BinarySearchTree {
    Node root;

    // Method to find a node in the BST
    Node findNode(Node root, int key) {
        if (root == null || root.value == key) {
            return root; // Return the node if found, or null if not found
        }
        if (key < root.value) {
            return findNode(root.left, key); // Search in the left subtree
        }
        return findNode(root.right, key); // Search in the right subtree
    }

    // Method to calculate the height of a node
    int findHeight(Node node) {
        if (node == null) {
            return -1; // Height of an empty tree is -1
        }
        int leftHeight = findHeight(node.left);
        int rightHeight = findHeight(node.right);
        return Math.max(leftHeight, rightHeight) + 1; // Height is 1 + maximum of left/right subtree heights
    }

    // Wrapper method to find the height of a node with a specific key
    int getHeight(int key) {
        Node node = findNode(root, key); // Find the node first
        if (node == null) {
            return -1; // Node not found
        }
        return findHeight(node); // Compute the height of the found node
    }
}

public class Main {
    public static void main(String[] args) {
        BinarySearchTree bst = new BinarySearchTree();
        bst.root = new Node(10);
        bst.root.left = new Node(5);
        bst.root.right = new Node(15);
        bst.root.left.left = new Node(2);
        bst.root.left.right = new Node(7);
        bst.root.right.left = new Node(12);
        bst.root.right.right = new Node(18);

        int key = 5;
        int height = bst.getHeight(key);

        if (height != -1) {
            System.out.println("The height of node " + key + " is: " + height);
        } else {
            System.out.println("Node " + key + " is not found in the BST.");
        }
    }
}
