#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){
	fstream data;
	char name[20];
//	string name;
	string DATA,search;
	cout<<"Enter the name of file : ";
	cin>>name;
	data.open(name,ios::in);
	cin.ignore();
	cout<<"Enter the string to search in file : ";
	getline(cin,search);

	if(data){
		cout<<"File has been opened successfuly.\n";
		int sum=0,i=1;
	//	cin.ignore();
	//	data<<DATA;
	//	getline(data,DATA);
	//	cin.ignore();
		while(!(data.eof())){
				getline(data,DATA);
			if(search==DATA){
				//	cin.ignore();			
				cout<<"String is present in line : "<<i<<endl;
				sum=sum+1;
			
			}
				i++;		
		}
		cout<<"String in total lines are : "<<sum<<endl;		
	}
}
