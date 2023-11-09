hashDivision (int key, int tableSize) {
	return key%tableSize;
}

hashDivisonString(string key, int tableSize) {
	sum = 0;
	for i = 0 to key.size()-1
		sum = sum + key[i]
	return sum % tableSize;
}
