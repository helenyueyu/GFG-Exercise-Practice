int missingNums(std::vector<int> arr) {
  int sum = 0; 
  for (int i = 0; i < arr.size(); i++) {
    sum+=arr[i]; 
  }
  return 55 - sum; 
}

