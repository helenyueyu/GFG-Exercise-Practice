int countOnes(int i) {
  std::bitset<sizeof(int) * CHAR_BIT> bits(i); 
  return bits.count(); 
}

