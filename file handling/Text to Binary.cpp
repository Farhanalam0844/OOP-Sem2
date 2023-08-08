#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
	fstream data;
	data.open("task.txt",ios::out);
	data<<"This is 1st line : "<<endl;
	data<<"This is 2nd line : "<<endl;
	data<<"This is 3rd line : "<<endl;
	data<<"This is 4th line : "<<endl;
	data<<"This is 5th line : "<<endl;
	data<<"This is 6th line : "<<endl;
	data.close();
	data.open("task.txt",ios::in);
	string s;
		getline(data,s);
	while(!data.eof()){
		cout<<s<<endl;
		getline(data,s);
	}
	data.close();
	fstream datab;
	data.open("task.txt",ios::in);
	datab.open("task.dat",ios::out|ios::binary);
		getline(data,s);
	while(!data.eof()){
		datab.write((char*)&s,sizeof(s));
		if(datab){
			cout<<"string : "<<i+1<<" has been written successfuly : \n";
		}
			getline(data,s);
	}	datab.close();
	
}
