#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	string name,name2;
//	cout << "Enter the name of the file : ";
	//getline(cin, name);
	fstream file;
	file.open("name.txt", ios::in);
	int i=0;
	if (file) {
//		cin.ignore();

		while (file&&i<10)
		{
			getline(file, name2);
			cout << name2<<endl;
			i++;
		}
		

	}
	if (i == 10&& file.eof()) {
		cout<<"\nAll 10 lines are displayed : ";

	}
}
