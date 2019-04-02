std::string maskify(std::string str) {
  for (int i = 0; i < str.size() - 4; i++) {
    str[i] = '#'; 
  }
}

