#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	int x,i;
	cout<<"How many of lines from file : 1 you want to split in second : ";
	cin>>x;
	fstream data1;
	data1.open("data1.txt",ios::in);
	fstream data2;
	data2.open("data3.txt",ios::out);
	fstream data3;
	data3.open("data4.txt",ios::out);
		i=0;
		string s;
		getline(data1,s);
	while(i<x&&!data1.eof()){	
		data2<<s<<endl;
		getline(data1,s);
		i++;
	}
	while(!data1.eof()){
		data3<<s<<endl;
		getline(data1,s);
	}
}
