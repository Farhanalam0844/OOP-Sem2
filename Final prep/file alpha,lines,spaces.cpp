#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
using namespace std;

class ABC{
	public:
		string line;
};
int main(){
	fstream data;
	ABC d;
	char y;
	data.open("data.txt",ios::out);
	do{
		cout<<"Enter data in line : ";
		getline(cin,d.line);
		data<<d.line<<endl;
		cout<<"You want to enter again : ";
		cin>>y;
		cin.ignore();
		
	}while(y=='y'||y=='Y');
	data.close();
	data.open("data.txt",ios::in);
	char ch;
	int count=0;
	while(data.get(ch)){
		if(isalpha(ch)){
			count++;
		}
	}
	data.close();
	cout<<"Alphabets are : "<<count;
}
