std::string removeVowels(std::string str) {
  std::string s; 
  for (int i = 0; i < str.length(); i++) {
    char ch = tolower(str[i]); 
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      continue; 
    } else {
      s += str[i]; 
    }
  }
  return s;
}

