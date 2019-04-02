#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define ROW 5 
#define COL 5

int isSafe(int M[][COL], int row, int col, bool visited[][COL])
{
  return (row >= 0) && (row < ROW) &&
         (col >= 0) && (col < COL) &&
         (M[row][col] && !visited[row][col]);


