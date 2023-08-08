#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct student 
{	
	string name=" ";
	int ID=NULL;
	char grade = ' ';
};
int textwrite(fstream&, student [], int);
int binarywrite(fstream&, student [], int);
int textread(fstream&,student [], int);
int binread(fstream&,student [], int);
int main() { 
	//DYNAMICALLY CREATING ARRAY OF STRUCTURES
	int SIZE; cout << "Enter the number of students you want to record data of : ";
	cin >> SIZE; 
	student* arr = NULL;
	arr = new student[SIZE];
//FILE POINTER/FSTREAM OBJECT CREATION
	fstream dataT;
	fstream dataB;

	int i; 
//STRUCTURE INPUT 
	for ( i = 0; i < SIZE; i++) 
	{ cin.ignore(); 
	cout << "Enter name of student"<<i+1<<" : ";
	getline(cin,arr[i].name);
	cout << "Enter ID of student" << i + 1 << " : ";
	cin >> arr[i].ID;
	cout << "Enter grade of student" << i + 1 << " : ";
	cin >> arr[i].grade;
	}
//WRITING IN TEXT
	int text=textwrite(dataT, arr, SIZE);
	if (text==1) 
	{ 
		cout << "Data written in text file successfuly___\n";
	}
//WRITING IN BINARY 
	int binary=binarywrite(dataB, arr, SIZE);
	if (binary == 1) {
		cout << "Data written in binary successfuly___\n"; 
	}
//READING FROM TEXT FILE 
	int Read_Text=textread(dataT,arr,SIZE);
	if (Read_Text == 1) {
		cout << "Data read from TextFile successfuly___\n";
	}
//READING FROM BINARY FILE
	int read_bin = binread(dataB, arr, SIZE);
	if (read_bin == 1) {
		cout << "Data read from BinaryFile successfuly___\n";
	}
}
int textwrite(fstream& dataT, student s[], int n)
{
	dataT.open("E://Farhan/University/3rd Semester/OOP/00p mids/all.txt", ios::out);
	if (dataT.fail()) {
		cout << "TextFile could not be created : ";
		return 0;
	}
	else 
	{
		int i; for ( i = 0; i < n; i++) 
		{
			dataT << "Name of student  : " << i + 1 << " is : " << s[i].name << endl;
			dataT << "ID of student    : " << i + 1 << " is : " << s[i].ID << endl;
			dataT << "Grade of student : " << i + 1 << " is : " << s[i].grade;
		}
		dataT.close();
		return 1; 
	}
}
int binarywrite(fstream& dataB,student s[] ,int n) 
{
	dataB.open("E://Farhan/University/3rd Semester/OOP/00p mids/ALL.dat", ios::out| ios::binary);
	if (dataB.fail())
	{
		cout << "Data could not be written in binary file___\n";
		return 0; 
	} 
	else
	{
		dataB.write((char*)s, sizeof(s));
		dataB.close();
		return 1; 
	}
	
}
int textread(fstream& dataT, student s[], int n)
{
	dataT.open("E://Farhan/University/3rd Semester/OOP/00p mids/all.txt", ios::in);
	if (dataT.fail()) 
	{
		cout << "TextFile could not be opened for reading___\n";
		return 0;
	}
	string r;
	//cin.ignore();
	while (!dataT.eof()) 
	{
		getline(dataT, r);
		cout << r<<endl;
	}
	dataT.close();
	return 1; 
}
int binread(fstream& dataB, student s[], int n) {
	dataB.open("E://Farhan/University/3rd Semester/OOP/00p mids/ALL.dat", ios::in | ios::binary);
	if (dataB.fail()) {
		cout << "Binary file could not be opened for reading___\n";
		return 0;
	}
	student* d = new student[n];
		dataB.read((char*)&d, sizeof(d));
		//cout << d[0].name;
	//}
		delete d;

		if (!dataB.fail()) {
			dataB.close();
			return 1;
	}
	
}