#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cout << "Enter csv row: ";
	getline(cin, str);
	FILE* file;
	fopen_s(&file, "data.csv", "a");
	if (file == NULL)
		printf("File open error\n");
	else
	{
		fprintf(file, "%s\n", str.c_str());
		printf("File successfully opened\n");
		fclose(file);
		printf("File successfully closed\n");
	
	}

	return 0;
}