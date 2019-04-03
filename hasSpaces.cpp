#include <ctype.h>

bool hasSpaces(std::string str) {
  int count = 0; 
  int i = 0; 
  while (str[i]) 
  {
    if (isspace(str[i]))
      count++;
    i++;
  }
  return count > 0;
}

