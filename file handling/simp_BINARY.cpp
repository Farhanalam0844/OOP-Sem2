#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream f;
	f.open("f.dat",ios::out | ios::binary);
	int x=25;
	f.write((char*)&x,sizeof(x));
	
	if(!f.bad()){
		cout<<"Data has been written successfuly : \n";
		
	}
		f.close();
		f.open("f.dat",ios::in | ios::binary);
		f.read((char *)(&x),sizeof(x));
		if(f.good()){
		cout<<"Data has been read successfuly : ";		
	}	
		f.close();
}
