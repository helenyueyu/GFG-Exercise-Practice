class firstReverse {
  static boolean isReverseEqual(String s1, String s2)
  {
    if (s1.length() != s2.length())
      return false; 

    int len = s1.length();
    for (int i = 0; i < len; i++)

      if (s1.charAt(i) != s2.charAt(len - i - 1))
        return false; 

    return true; 
  }

  static String getWord(String str[], int n)
  {
    for (int i = 0; i < n - 1; i++) 
      for (int j = i+1; j < n; j++)
        if (isReverseEqual(str[i], str[j]))
          return str[i];

    return "-1"; 
  }

  public static void main(String[] args)
  {
    String str[] = {"geeks", "for", "skeeg"};
    int n = str.length; 

    System.out.print(getWord(str, n));
  }
}

