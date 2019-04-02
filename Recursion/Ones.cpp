#include <bits/stdc++.h>
using namespace std; 

int countNumbers(int x, int n)
{
  if (x > n)
    return 0;

  return 1 + countNumbers(x*10, n) + countNumbers(x*10 + 1,n);

}

int main()
{
  int n = 120; 

  cout << countNumbers(1, n);

  return 0;
}

