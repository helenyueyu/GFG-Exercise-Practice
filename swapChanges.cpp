#include <bits/stdc++.h>
using namespace std; 

int minOperations(string s, string t, int n)
{
  int ct0 = 0, ct1 = 0; 
  for (int i = 0; i < n; i++) {
    if (s[i] == t[i]) 
      continue; 

    if (s[i] == '0') 
      ct0++; 
    
    else
      ct1++;
  }

  return max(ct0, ct1);
}

int main()
{
  string s = "010", t = "101"; 
  int n = s.length(); 
  cout << minOperations(s, t, n); 

  return 0;
}

