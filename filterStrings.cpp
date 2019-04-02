std::vector<std::string> filterArray(std::vector<std::string> arr) {
  std::vector<std::string> results; 
  for (int i = 0; i < arr.size(); i++) {
    if (std::any_of(std::begin(arr[i]), std::end(arr[i]), ::isdigit)) {
      results.push_back(arr[i]); 
    }
  }
  return results;
}

