#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	string name,str;
	int i=1;

	cout<<"Enter the name of file : ";
	cin>>name;
	fstream filee;
	filee.open(name,ios::in);
	if(filee){
		while(filee){
			filee>>str;
			i++;
		
		}
			filee.close();
			filee.open(name,ios::in);
		if(i<=10){
			while(filee.eof()){
			filee>>str;
			cout<<str<<endl;
			
		}
			filee.close();		
				filee.open(name,ios::in);
		}
		else{
				filee.open(name,ios::in);
			i=i-10;
		while(filee){
				filee>>str;
			cout<<str<<endl;
		}	
		}
	filee.close();
	}
}
