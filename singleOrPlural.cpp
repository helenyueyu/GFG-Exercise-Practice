#include <string.h>

bool isPlural(std::string word) {
  char lastChar = word.at(word.length() - 1); 
  return strncmp(&lastChar, "s", 1) == 0; 
}

