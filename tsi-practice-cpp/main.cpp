#include <iostream>

using namespace std;

int main() {
	char* str1 = new char[10];
	char* str2 = new char[10];
	cin >> str1;
	cin >> str2;
	int len1 = 0;
	int len2 = 0;

	while (str1[len1] != '\0') {
		++len1;
	}

	while (str1[len2] != '\0') {
		++len2;
	}
 	char* result = new char[len1 + len2 + 1];

	// Copy str1 to result
	int i = 0;
	for (; i < len1; ++i) {
		result[i] = str1[i];
	}
	// Copy str2 to result
	for (int j = 0; j < len2; ++j, ++i) {
		result[i] = str2[j];
	}
	// Null-terminate the result
	result[i] = '\0';

	cout << result;
	
}