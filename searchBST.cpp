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
    // Search for a key in the BST
    boolean search(Node root, int key) {
        if (root == null) {
            return false;
        }
        if (key == root.key) {
            return true;
        }
        return key < root.key ? search(root.left, key) : search(root.right, key);
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

        int keyToSearch = 400;
        System.out.println("Key " + keyToSearch + " exists: " + tree.search(tree.root, keyToSearch));
    }
}
