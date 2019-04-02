#include <bits/stdc++.h>
using namespace std;

void minSwaps(string str1, string str2) 
{
  int count = 0; 
  for (int i = 0; i < str1.length(); i++) {
    if (str1[i] != str2[i])
      count++; 
  }

  if (count % 2 == 0)
    cout << count / 2;
  else 
    cout << "Not Possible"; 
}

int main()
{
  string binaryString1 = "1110000";
  string binaryString2 = "0001101";

  minSwaps(binaryString1, binaryString2);

  return 0;
}

