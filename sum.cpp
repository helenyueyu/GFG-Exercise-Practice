#include <bits/stdc++.h>
using namespace std; 

#define N 4
#define M 4

bool isPairWithDiff(int mat[N][M], int k)
{
  unordered_set<int> s; 
  for (int i = 0; i < N; i++) 
    for (int j = 0; j < M; j++)
      s.insert(mat[i][j]);

  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++)
      if (s.find(k + mat[i][j]) != s.end())
        return true; 

