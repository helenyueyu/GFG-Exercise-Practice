#include <bits/stdc++.h>
using namespace std; 

bool productEqual(int n)
{
  if (n < 10)
    return false; 
  int prodOdd = 1, prodEven = 1; 

  while (n > 0) {
    int digit = n % 10; 
    prodOdd *= digit; 
    n /= 10; 

  if (n == 0)
    break;

 digit = n % 10; 
 prodEven *= digit; 
 n /= 10; 
  }

  if (prodEven == prodOdd)
    return true; 

  return false;
}

int main()
{
  int n = 6324; 

  if (productEqual(n))
    cout << "Yes";
  else
    cout << "No";
  return 0;
}

