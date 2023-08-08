#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	fstream data("data.txt",ios::out);
	data<<"123456789123456789";
	data.close();
	data.open("data.txt",ios::in);
	data.seekg(4,ios::beg);
	string s;
	getline(data,s);
	cout<<s<<"\n";
	data.close();
	data.open("data.txt",ios::in|ios::out);
	data.seekp(-4,ios::end);
	data<<"0000";
	data.close();
	data.open("data.txt",ios::in);
	getline(data,s);
	cout<<s;
}
