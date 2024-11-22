class Node {
    int key;
    Node left, right;

    public Node(int key) {
        this.key = key;
        left = right = null;
    }
}

class BST {
    Node root;
    Node insert(Node root, int key) {
        if (root == null) {
            return new Node(key);
        }
        if (key < root.key) {
            root.left = insert(root.left, key);
        } else if (key > root.key) {
            root.right = insert(root.right, key);
        }
        return root;
    }
    // Find in-order successor of a node
    Node findInOrderSuccessor(Node root, Node target) {
        Node successor = null;
        while (root != null) {
            if (target.key < root.key) {
                successor = root;
                root = root.left;
            } else {
                root = root.right;
            }
        }
        return successor;
    }
}

public class Main {
    public static void main(String[] args) {
        BST tree = new BST();
        tree.root = tree.insert(tree.root, 50);
        tree.insert(tree.root, 30);
        tree.insert(tree.root, 70);
        tree.insert(tree.root, 20);
        tree.insert(tree.root, 40);

        Node target = tree.root.left; // Node with key 30
        Node successor = tree.findInOrderSuccessor(tree.root, target);
        if (successor != null) {
            System.out.println("In-order successor of " + target.key + ": " + successor.key);
        } else {
            System.out.println("No in-order successor exists for " + target.key);
        }
    }
}
