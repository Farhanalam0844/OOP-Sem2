#include<iostream>
#include<string>
#include"student.h"
using namespace std;

int main(){
	student st;
	int age,ID;
	string name;
	cout<<"Enter the age : ";
	cin>>age;
	cout<<"Enter the ID : ";
	cin>>ID;
	int age1=st.getage(age);
	int ID1=st.getID(ID);
	//ame=st.getname();
	cout<<age1<<endl<<ID1;


}
