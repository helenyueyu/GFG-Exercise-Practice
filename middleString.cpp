std::string getMiddle(std::string str) {
  int i = str.length(); 
  if (i % 2 == 0) {
    return str.substr(i/2 - 1, 2); 
  } else {
    return str.substr(i/2, 1); 
  }
}

