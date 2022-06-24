# Introduction To Binary Tree

### Representation Of Binary Tree In Java and CPP

- Java

```java
class BST{
   int data;
   BST left,right;
   // constructor to set data and left and right
   public void BST(int key){
       data = key;
       left = null;
       right = null;
   }

   // no you can create a Main method and implement BST
}
```

- CPP

```c++
class BST{
    public:
    int data;
    BST *left, *right;
    // constructor to set data and pointers
    void BST(int key){
        data = key;
        left = NULL;
        right = NULL;
    }
}
```

## BFS and DFS in Binary Tree

- Depth First Search

  1. In-order Traversal (left, root, right)

     ```c++
     //Recursive Approach
     public static void inOrder(BST root){
        if(root == NULL){
            return;
        }
        inOrder(root.left);
        System.out.print(root.data+" ");
        inOrder(root.right);
     }
     ```

  2. Pre-order Traversal ( root,left right)
     ```c++
     //recursive approach
     public static void inOrder(BST root){
      if(root == NULL){
          return;
      }
      System.out.print(root.data+" ");
      inOrder(root.left);
      inOrder(root.right);
     }
     ```
  3. Post-order Traversal (left, right, root)
     ```c++
     // recursive approach
     public static void inOrder(BST root){
        if(root == NULL){
            return;
        }
        inOrder(root.left);
        inOrder(root.right);
        System.out.print(root.data+" ");
     }
     ```

- Breadth First Search

  1. Level Order Traversal
     ```java
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
     ```

For the given tree

```
         1
       /   \
      2     3
     / \   / \
    4  5  6   7
   / \/ \/ \ / \
  x   x  x  x   x
```

- Pre Order Traversal: [1, 2, 4, 5, 3, 6, 7]
- In Order Traversal : [4, 2, 5, 1, 6, 3, 7]
- Post Order Traverse: [4, 5, 2, 6, 7, 3, 1]
- Level Order Traverse:[1, 2, 3, 4, 5, 6, 7]

### Find the height of a binary tree

- We can use Recursion and it will take auxillary space. O(height)
- We can use Level order traversal and in worst case it can take O(n) space

So most of the case tree are skewed so go for recursion so the recurrence relation will be

```
height of root = 1 + max(height of left tree, height of right tree)
```

```java
    public static int heightBst(BST root) {
        if (root == null) {
            return 0;
        }
        int lh = heightBst(root.left);
        int rh = heightBst(root.right);
        return 1 + Math.max(lh, rh);
    }
```

### Check if tree is Balance or Not

A Binary tree is balance if for every node

```
height(left) - height(right) <= 1
```

```java
public static int isBalanced(BST root) {
    if (root == null) {
        return 0;
    }
    int lh = isBalanced(root.left);
    int rh = isBalanced(root.right);
    // if it return -1 then tree is unbalanced
    if (Math.abs((lh - rh)) > 1) {
        return -1;
    }
    return 1 + Math.max(lh, rh);
}
```

### Diameter Of Binary Tree

- Longest path between any two node
- longest path may or may not pass through root node.

```java
    public static int diameterOfBST(BST root, int maxi) {
        if (root == null) {
            return 0;
        }
        int lh = diameterOfBST(root.left, maxi);
        int rh = diameterOfBST(root.right, maxi);
        maxi = Math.max(maxi, (lh + rh));
        return 1 + Math.max(lh, rh);
    }
```

### Maximum Path Sum In BST

- Maximum path sum means it can be any path
- may and may not pass through root
