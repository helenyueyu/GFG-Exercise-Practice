bool validatePIN(std::string pin) {
  return std::all_of(pin.begin(), pin.end(), ::isdigit) && (pin.length() == 4 || pin.length() == 6);
}

