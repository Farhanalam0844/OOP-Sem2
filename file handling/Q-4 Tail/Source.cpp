#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	string name, str;
	int i = 0;

	cout << "Enter the name of file : ";
	cin >> name;
	fstream filee;
	filee.open(name,  ios::in);
	if (filee) {

			while (!filee.eof()) {
		
			getline(filee,str);
			i=i+1;

		}
		filee.close();
		
		if (i <= 10) {
			filee.open(name, ios::in);
			while (!filee.eof()) {
				filee << str;
				cout << str << endl;
			}
			filee.close();
			
		}
		
		else {
			filee.open(name, ios::in);
			int j = 0;
			for (j = 0; j < 10; j++) {
				getline(filee, str);
			}
			while (!filee.eof()) {
				getline(filee,str);
				j++;
				cout << str << endl;
			}
		}
		filee.close();
	}
}