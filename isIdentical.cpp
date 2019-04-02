bool isIdentical(std::string str) {
	char c = str[0]; 
	for (int i = 1; i < str.length(); i++) {
		if (str[i] != c) {
			return false; 
		}
	}
	return true; 
}
