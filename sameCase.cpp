bool sameCase(std::string str) {
  int lower = 0; 
  int upper = 0; 
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == tolower(str[i]))
      lower++; 
    if (str[i] == toupper(str[i]))
      upper++; 
  }
  return lower == str.length() || upper == str.length(); 
}

