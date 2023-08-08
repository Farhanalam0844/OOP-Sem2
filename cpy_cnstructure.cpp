#include<iostream>
using namespace std;
class Member{
	public:
	int ID;
	int age;
	char grade;

		Member(int ID,int age,char grade){
			this->ID=ID;
			this->age=age;
			this->grade=grade;
		}
		Member(Member &m1){
			ID=m1.ID;
			age=m1.age;
			grade=m1.grade;
		}
};
int main(){
	int age=5;
	int ID=2;
	char c='a';
	Member m1(ID,age,c);
	Member m2(m1);
	cout<<m1.ID<<"\t"<<m1.age<<"\t"<<m1.grade<<"\n";
	cout<<m2.ID<<"\t"<<m2.age<<"\t"<<m2.grade<<"\n";

}
