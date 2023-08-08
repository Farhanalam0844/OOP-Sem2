#include<iostream>
#include<string>

using namespace std;

class student{
	private:
		int age;
		char grade;
		string name;
	public:
		void display();
		student operator + (student& right);
		void getdata(int age,char grade,string name);
};

int main(){
	int age;
	char grade;
	string name;

	cout<<"Enter age of student 1 : ";
	cin>>age;
	cout<<"Enter grade of student 1 : ";
	cin>>grade;
	cout<<"Enter name of student 1 : ";
	cin.ignore();
	getline(cin,name);
	student s1;
	s1.getdata(age,grade,name);
	s1.display();


	cout<<"Enter age of student 2 : ";
	cin>>age;
	cout<<"Enter grade of student 2 : ";
	cin>>grade;
	cout<<"Enter name of student 2 : ";
	cin.ignore();
	getline(cin,name);
	student s2;
	s2.getdata(age,grade,name);
	student s3=s1+s2;
	s3.display();

}
void student::getdata(int age,char grade,string name){
	this->age=age;
	this->grade=grade;
	this->name=name;
}
void student::display() {
	cout<<"Age is   : "<<age<<endl;
	cout<<"Grade is : "<<grade<<endl;
	cout<<"Name is  : "<<name<<endl;
	
	}
	
student student::operator + (student& right){
	student s3;
//	cout<<this->age<<endl;
	s3.age=age+right.age;
	s3.grade=grade+right.grade;
	s3.name=name+right.name;
		return s3;
	}
