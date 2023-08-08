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
	
	file.write((char*)&Std, sizeof(Std));


	cout << "Data Written on file Sucessfully" << endl;
	file.close();
	file.open("data.dat", ios::binary | ios::in);
	int i = 0;
	while(file.read((char*)&Std[i], sizeof(Std[i])))
	{
		
		cout << " id :"<< Std[i].id << endl;
			 

		cout << " Name :" << Std[i].name << endl;
		i++;

	}
	file.close();
	fstream txtfile("adnan.txt", ios::out);
	for (int j = 0; j < 2; j++)
	{
		txtfile<< Std[j].id << endl;
		txtfile<<Std[j].name << endl;
	}
	cout << "Txt file data also written" << endl;
	return 0;
}