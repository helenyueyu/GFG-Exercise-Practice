#include <bits/stdc++.h>
using namespace std; 

bool productDivisible(int n, int k)
{
  int product = 1, position = 1; 
  while (n > 0) {
    if (position % 2 == 0)
      product *= n % 10; 
    n = n / 10; 
    position++; 
  }

  if (product % k == 0) 
    return true; 
  return false; 
}

int main()
{
  int n = 321922; 
  int k = 3; 

  if (productDivisible(n, k))
    cout << "YES"; 
  else
    cout << "NO";

  return 0;
}

