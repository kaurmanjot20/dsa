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
    // Find in-order predecessor of a node
    Node findInOrderPredecessor(Node root, Node target) {
        Node predecessor = null;
        while (root != null) {
            if (target.key > root.key) {
                predecessor = root;
                root = root.right;
            } else {
                root = root.left;
            }
        }
        return predecessor;
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

        Node target = tree.root.left.right; // Node with key 40
        Node predecessor = tree.findInOrderPredecessor(tree.root, target);
        if (predecessor != null) {
            System.out.println("In-order predecessor of " + target.key + ": " + predecessor.key);
        } else {
            System.out.println("No in-order predecessor exists for " + target.key);
        }
    }
}
