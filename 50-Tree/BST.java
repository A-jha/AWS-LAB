import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;;

class BST {
    int data;
    BST left, right;

    public BST(int key) {
        data = key;
    }

    public static void postOrder(BST root) {
        if (root == null) {
            return;
        }
        postOrder(root.left);
        postOrder(root.right);
        System.out.print(root.data + " ");
    }

    public static void levelOrder(BST root) {
        Queue<BST> q = new LinkedList<>();
        ArrayList<Integer> res = new ArrayList<>();
        q.add(root);
        while (q.isEmpty() == false) {
            res.add(q.peek().data);
            if (q.peek().left != null) {
                q.add(q.peek().left);
            }
            if (q.peek().right != null) {
                q.add(q.peek().right);
            }
            q.remove();
        }
        for (int i = 0; i < res.size(); i++) {
            System.out.print(res.get(i) + " ");
        }
    }

    public static int heightBst(BST root) {
        if (root == null) {
            return 0;
        }
        int lh = heightBst(root.left);
        int rh = heightBst(root.right);
        return 1 + Math.max(lh, rh);
    }

    public static int isBalanced(BST root) {
        if (root == null) {
            return 0;
        }
        int lh = isBalanced(root.left);
        int rh = isBalanced(root.right);
        if (Math.abs((lh - rh)) > 1) {
            return -1;
        }
        return 1 + Math.max(lh, rh);

    }

    public static int diameterOfBST(BST root, int maxi) {
        if (root == null) {
            return 0;
        }
        int lh = diameterOfBST(root.left, maxi);
        int rh = diameterOfBST(root.right, maxi);
        maxi = Math.max(maxi, (lh + rh));
        return 1 + Math.max(lh, rh);
    }

    public static int maximumPathSum(BST root, int maxSum) {
        if (root == null) {
            return 0;
        }
        int lh = Math.max(0, maximumPathSum(root.left, maxSum));
        int rh = Math.max(0, maximumPathSum(root.right, maxSum));
        maxSum = Math.max(maxSum, lh + rh + root.data);
        return root.data + Math.max(lh, rh);
    }

    public static void main(String args[]) {
        int maxi = 0;
        int maxSum = 0;
        BST root = new BST(5);
        root.left = new BST(6);
        root.right = new BST(7);
        root.left.left = new BST(8);
        root.left.right = new BST(9);
        root.left.right.left = new BST(10);
        root.left.right.left.right = new BST(10);
        postOrder(root);
        System.out.println("height of Bst = " + heightBst(root));
        levelOrder(root);
        System.out.println("is tree Balanced: " + isBalanced(root));
        System.out.println("Diameter Of BST is : " + diameterOfBST(root, maxi));
        System.out.println("Maximum Path Sum: " + maximumPathSum(root, maxSum));
    }
}
