#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
	fstream data1,data2;
	string s;
	data1.open("data1.txt",ios::app);
	data2.open("data2.txt",ios::in);
	getline(data2,s);
	while(!data2.eof()){
		data1<<s<<endl;
		getline(data2,s);
	}
	
}
