import java.util.*;

class topViewTree
{
  static class Node {
    Node left; 
    Node right; 
    int data; 
  };

  static class Pair {
    Node first; 
    int second; 
    Pair(Node n, int a)
    {
      first=n;
      second=a;
    }
  };

  static Node newNode(int key)
  {
    Node node = new Node();
    node.left = node.right = null;
    node.data = key;
    return node;
  }

  static void topView(Node root)
  {
    if (root == null) {
      return;
    }

    Node temp = null;

    Queue<Pair> q = new LinkedList<Pair>(); 

    Map<Integer, Integer> mp = new HashMap<Integer, Integer>(); 

    q.add(new Pair(root, 0));
    while (q.size() > 0) {

      temp = q.peek().first; 
      int d = q.peek().second; 
      q.remove();

      if (mp.get(d) == null) {
        System.out.print(temp.data + " "); 
        mp.put(d, temp.data);
      }

      if (temp.left!=null) {
        q.add(new Pair(temp.left, d-1));
      }

      if (temp.right!=null) {
        q.add(new Pair(temp.right, d+1));
      }
    }
  }

  public static void main(String args[])
  {
    Node root = newNode(1);
    root.left = newNode(2);
    root.right = newNode(3);
    root.left.right = newNode(4);
    root.left.right.right = newNode(5);
    root.left.right.right.right = newNode(6);
    System.out.println("The following is in the top view of the binary tree.\n");
    topView(root);
  }
}

