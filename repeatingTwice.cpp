std::string doubleChar(std::string str) {
  std::string s; 
  for (char& c : str) {
    s+= c; 
    s+= c; 
  }
  return s; 
}

