#include <bits/stdc++.h>

using namespace std; 

int findMinSwaps(int arr[], int n)
{
  int noOfZeroes[n];
  memset(noOfZeroes, 0, sizeof(noOfZeroes)); 

  int i, count = 0; 

  noOfZeroes[n-1] = 1 - arr[n-1];
  for (i = n -2; i >= 0; i--) {
    noOfZeroes[i] = noOfZeroes[i+1];
    if (arr[i] == 0)
      noOfZeroes[i]++;
  }

  for (i = 0; i < n; i++) {
    if (arr[i] == 1)
      count += noOfZeroes[i];
  }
  
  return count;
}

int main()
{
  int arr[] = {0, 0, 1, 0, 1, 0, 1, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << findMinSwaps(arr, n); 
  return 0;
}

