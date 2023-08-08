#include<iostream>
#include<fstream>
#include<string>
#include <cstdio>
using namespace std;

int main(){
		fstream data,datab;
//	string name,name2;
//	cout<<"Enter name of binary file : ";
//	cin>>name;
//	cout<<"Enter the text file name : ";
//	cin>>name2;
	datab.open("binary.dat",ios::out | ios::binary);
	char y;
	string s;
	do{
	
		cout<<"Enter the data : ";	
		
		getline(cin,s);
		datab.write((char*)&s,sizeof(string));
		cout<<"Do you want to write again : ";
		cin>>y;
		cin.ignore();	
	}while(y=='Y'||y=='y');	
		datab.close();
		datab.open("binary.dat",ios::in | ios::binary);
//	datab.open("binary.dat",ios::in | ios::binary);
		string r;
			datab.read((char*)&r,sizeof(string));
	while(!datab.eof()){
		cout<<"Reading line \n";
		datab.read((char*)&r,sizeof(string));
	}
	datab.close();
	datab.open("binary.dat",ios::in | ios::binary);
	data.open("textt.txt",ios::out | ios::app);
	if(data.fail()){
		cout<<"File couldn't be created : ";
		exit(0);
	}
		string S;
		datab.read((char*)&S,sizeof(S));
	while(!datab.eof()){
		data<<S;
		datab.read((char*)&S,sizeof(S));

	}
}
