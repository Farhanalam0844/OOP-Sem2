#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Structure{
	string item_descrip;
	int quantity;
	double wholesome_cost;
	double retail_cost;
	int date_added;
};
int main(){
	Structure s1;
	cout<<"Enter item description : ";
	getline(cin,s1.item_descrip);
	cout<<"Enter item quantity : ";
	cin>>s1.quantity;
	cout<<"Enter item wholesale cost : ";
	cin>>s1.wholesome_cost;
	cout<<"Enter item retail cost : ";
	cin>>s1.retail_cost;
	cout<<"Enter date added : ";
	cin>>s1.date_added;
	fstream data;
	data.open("task.dat",ios::out|ios::binary);
	data.write((char*)&s1,sizeof(s1));
	
}
