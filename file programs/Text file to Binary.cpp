#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
using namespace std;
struct Student
{
	int id;
	string name;
};
int main()
{
	Student Std[2], Std1[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "Enter id" << endl;
		cin >> Std[i].id;
		cin.ignore();
		cout << "Enter Name" << endl;
		getline(cin, Std[i].name);
	}
	fstream file("data.dat", ios::binary | ios::out);
	cout << "Writting on file" << endl;
	int i = 0;
	file.write((char*)&Std, sizeof(Std));

	cout << "Data Written on file Sucessfully" << endl;
	file.close();
	file.open("data.dat", ios::binary | ios::in);
	for (int i=0;i<2;i++)
	{
		file.read((char*)&Std1[i], sizeof(Std1[i]));
		cout << " id" 
			<< Std1[i].id << endl;
		
		cout << " Name" <<
			Std1[i].name << endl;
	
		
	}
	file.close();

	return 0;
}