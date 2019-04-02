#include <bits/stdc++.h>
using namespace std; 

int Maxsum(int c1, int c2, int c3, int c4)
{
  int sum = 0; 
  int two34 = min(c2, min(c3, c4)); 

  sum = two34 * 234; 

  c2 -= two34; 

  sum += min(c2, c1) * 12; 

  return sum;
}

int main()
{
  int c1 = 5, c2 = 2, c3 = 3, c4 = 4; 
  cout << Maxsum(c1, c2, c3, c4); 
  return 0;
}

