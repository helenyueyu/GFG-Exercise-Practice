std::vector<int> countPosSumNeg(std::vector<int> arr) {
  std::vector<int> results; 
  if (arr.empty()) {
    return results; 
  }
  int count = 0; 
  int sum = 0; 
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > 0) {
      count++; 
    } else if (arr[i] < 0) {
      sum+=arr[i]; 
    }
  }
  results.push_back(count); 
  results.push_back(sum); 
  return results; 
}

