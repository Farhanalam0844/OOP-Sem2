#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
	fstream data;
	char name[20];
//	string name;
	string DATA;
	cout<<"Enter the name of file : ";
	cin>>name;
	data.open(name,ios::in);
	if(data){
		cout<<"File has been opened successfuly.\n";
		int i=1;
	//	getline(data,DATA);
		while(!data.eof()){
				getline(data,DATA);
			cout<<i<<" : "<<DATA<<endl;
		
			i++;
		}
		
		
	}
}
