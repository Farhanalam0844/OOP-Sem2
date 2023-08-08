#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	fstream data("mid3.txt",ios::out);
	data<<"This is 1 \n";
	data<<"This is 2 \n";
	data<<"This is 3 ";
	data.close();
	data.open("mid3.txt",ios::in);
	string s;
	int i=0;
	while(!data.eof()){
		getline(data,s);
		cout<<s<<endl;
		i++;
	}
	cout<<i;
}
