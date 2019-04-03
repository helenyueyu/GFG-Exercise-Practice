#include <string.h>

int numberSyllables(std::string word) {
  int count = 0;
  for (int i = 0; i < word.length(); i++) {
    if (strncmp(&word[i], "-", 1) == 0)
      count++; 
  }
  return count+1; 
}

