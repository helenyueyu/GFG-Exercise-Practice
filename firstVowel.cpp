int firstVowel(std::string str) {
  int first; 
  for (int i = 0; i < str.length(); i++) {
    char c = tolower(str[i]); 
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      first = i; 
      break; 
    }
  }
  return first; 
}

