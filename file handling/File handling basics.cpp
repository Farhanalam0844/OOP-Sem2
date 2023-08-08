#include<iostream>
#include<fstream>
using namespace std;

int main(){
//DECLARING FSTREAM VARIABLE
	fstream file;
//OPENING FILE IN OUT/WRITE MODE
	//IF FILE IS NOT PRESENT IT WILL BE CREATED
	file.open("text.txt",ios::out);
	if(file){
		cout<<"File is present/created successfuly \n";
//WRITING IN FILE
		file<<"First line in file\n";
		file<<"2nd line in file\n";
//CLOSING THE FILE
		file.close();
	cout<<"File closed---\n";
	}
	else {
		cout<<"File couldn't be created \n";
	}
//NOW AGAIN OPENING/ACCESSING FILE IN APPEND MODE 
	file.open("text.txt",ios::app);//	file.open("text.txt",ios::out | ios::app );
	
	file<<"Now it is opened in append mode \n";
//CLOSING THE FILE
	file.close();
	ofstream f;
//OPENING IN OFSTREAM (JUST WRITE MODE ONLY)
	f.open("text2.txt");
	if(f){
		cout<<"Created using ofstream \n";
	}
	f.close();
	

	}

