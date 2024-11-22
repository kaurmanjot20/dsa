import java.util.*;

// TreeNode class for BST
class TreeNode {
    int val;
    TreeNode left, right;

    TreeNode(int val) {
        this.val = val;
        this.left = this.right = null;
    }
}

// DLLNode class for Doubly Linked List
class DLLNode {
    int val;
    DLLNode next, prev;

    DLLNode(int val) {
        this.val = val;
        this.next = this.prev = null;
    }
}

public class MergeBSTs {

    // Helper function to do inorder traversal and store nodes in a list
    private static void inorderTraversal(TreeNode root, List<TreeNode> nodes) {
        if (root == null) return;
        inorderTraversal(root.left, nodes);
        nodes.add(root);
        inorderTraversal(root.right, nodes);
    }

    // Function to merge two sorted lists of nodes into one sorted doubly linked list
    private static DLLNode mergeBSTsToDLL(List<TreeNode> list1, List<TreeNode> list2) {
        int i = 0, j = 0;
        DLLNode head = null, tail = null;

        // Merge two sorted lists into a sorted DLL
        while (i < list1.size() && j < list2.size()) {
            DLLNode newNode;
            if (list1.get(i).val < list2.get(j).val) {
                newNode = new DLLNode(list1.get(i).val);
                i++;
            } else {
                newNode = new DLLNode(list2.get(j).val);
                j++;
            }
            if (head == null) {
                head = newNode;
                tail = head;
            } else {
                tail.next = newNode;
                newNode.prev = tail;
                tail = tail.next;
            }
        }

        // Add remaining elements from list1
        while (i < list1.size()) {
            DLLNode newNode = new DLLNode(list1.get(i).val);
            if (head == null) {
                head = newNode;
                tail = head;
            } else {
                tail.next = newNode;
                newNode.prev = tail;
                tail = tail.next;
            }
            i++;
        }

        // Add remaining elements from list2
        while (j < list2.size()) {
            DLLNode newNode = new DLLNode(list2.get(j).val);
            if (head == null) {
                head = newNode;
                tail = head;
            } else {
                tail.next = newNode;
                newNode.prev = tail;
                tail = tail.next;
            }
            j++;
        }

        return head;
    }

    // Function to merge two BSTs into a sorted doubly linked list
    public static DLLNode mergeBSTs(TreeNode root1, TreeNode root2) {
        List<TreeNode> list1 = new ArrayList<>();
        List<TreeNode> list2 = new ArrayList<>();

        // Get the sorted nodes of both BSTs through inorder traversal
        inorderTraversal(root1, list1);
        inorderTraversal(root2, list2);

        // Merge the two sorted lists into a sorted doubly linked list
        return mergeBSTsToDLL(list1, list2);
    }

    // Function to print the doubly linked list
    private static void printDLL(DLLNode head) {
        DLLNode curr = head;
        while (curr != null) {
            System.out.print(curr.val + " ");
            curr = curr.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        // Creating the first BST
        TreeNode root1 = new TreeNode(4);
        root1.left = new TreeNode(2);
        root1.right = new TreeNode(6);
        root1.left.left = new TreeNode(1);
        root1.left.right = new TreeNode(3);
        root1.right.left = new TreeNode(5);
        root1.right.right = new TreeNode(7);

        // Creating the second BST
        TreeNode root2 = new TreeNode(8);
        root2.left = new TreeNode(5);
        root2.right = new TreeNode(10);
        root2.left.left = new TreeNode(3);
        root2.left.right = new TreeNode(7);
        root2.right.left = new TreeNode(9);
        root2.right.right = new TreeNode(12);

        // Merge the two BSTs into a doubly linked list
        DLLNode head = mergeBSTs(root1, root2);

        // Print the merged doubly linked list
        System.out.println("Merged Doubly Linked List in Sorted Order:");
        printDLL(head);
    }
}
