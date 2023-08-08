#include<iostream>
using namespace std;

class Student{
//	private:
	public:
		int id;
		static int next_id;
	public:
		static int get_next_id(){
			next_id++;
			return next_id;
		}
		int get_id(){
			return id;
		}
		Student(){
			id=Student::get_next_id();
			
		}

};
int Student::next_id=0;
int main(){
	Student a;
	cout<<a.get_id()<<endl;
	Student b;
	cout<<b.get_id()<<endl;
	//if public 
//	b.next_id=5;
	Student::next_id=5;
	Student c;
	cout<<c.get_id()<<endl;
//	cout<<b.get_id()<<endl;
	Student::get_next_id();
	cout<<c.get_id()<<endl;
//	cout<<b.get_next_id()<<endl;
}
