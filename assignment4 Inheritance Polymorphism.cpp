#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class LivingOrganisms {
protected:
	string specie;
public:
	LivingOrganisms();
	virtual void display()=0;
	string get_specie();
	virtual ~LivingOrganisms();
};
//BASE CLASS PERSON
class Person : public LivingOrganisms
{
protected:
	string name;
	int age;
public:
	Person();
	Person(string name, int age);
	string get_name() const;
	int get_age() const;
	//virtual void major() = 0;
	virtual void display();
	virtual Person* operator=(Person* right);
	virtual ~Person();
};
//DERIVED CLASS STUDENT (INHERITANCE)
class Student:public Person {
	protected:
		string university;
		int ID;
public:
	Student() ;
	Student(string name,int age,string uni, int id);
	string get_university()const;
	int get_id()const;
	virtual void display();
	//virtual void major();
	virtual Student* operator=(Student* right);
	friend void friendfunction(Student *d);
	virtual ~Student();
};
int main() {
	cout << "\t\t\tClass Hierarichy\n"
		<< "\t\t\t1. LivingOrganisms\n"
		<< "\t\t\t2. Person\n"
		<< "\t\t\t3. Student\n\n";
	LivingOrganisms* l1;
	l1 = new Person;
	cout <<"Living Organisms member : \nSpecie : \n"<< l1->get_specie() << endl;
	string name, uni;
	int age, id;
	
	
	cout << "PERSON CLASS \n";
	cout << "Enter name of person : ";
	getline(cin, name);
	try{
	cout << "Enter age of person : ";
	cin>>age;
	if(age<0){
		throw"Error";
	}
}	
	catch(...){
		cout<<"Age can't be negative : \n";
	}
	Person p1(name,age);
		p1.display();
			Person p2;
	p2 = p1;
	cout << "\nDisplaying Person After assignment operator(which is also virtual)\n";
	p2.display();
	cout << "STUDENT CLASS\n";
//	cout << "Enter name of person : ";
//	getline(cin, name);
//	cout << "Enter age of person : ";
//	cin>>age;
	cout << "Enter University of student : ";
	cin.ignore();
	getline(cin, uni);
	cout << "Enter ID of student : ";
	cin>>id;
	Person* s1 = new Student(name,age,uni,id);
	s1->display();
	Student s2;
	s2 = (Student*)s1;
	cout << "\nDisplaying After assignment operator : Student (which is also virtual) :\n";
	s2.display();
/*	Student *s2;
	s2 = (Student*)s1;
	cout << "\nDisplaying After assignment operator : Student (which is also virtual) :\n";
	s2->display();
*/
	friendfunction((Student*)s1);

}

LivingOrganisms::LivingOrganisms() {
	cout<<"Calling LivingOrganisms Constructor : \n";
	this->specie = "Homo Sapiens";
}
string LivingOrganisms::get_specie() {
	return specie;
}
//BASE CLASS|PERSON 
	//DEFAULT CONSTRUCTOR
Person::Person():LivingOrganisms()
{
	cout<<"Calling Person Constructor : \n";
	name = ' ';
	age = 0;
	
}
	//PARAMETRIZED CONSTRUCTOR
Person::Person(string name,int age) : LivingOrganisms()
{
		cout<<"Calling Person Constructor : \n";
	this->name =name;
	this->age = age;
	this->specie = "Homo Sapiens";
}	//NAME GETTER
string Person::get_name() const {
	return name;
}
	//AGE GETTER
int Person::get_age() const{
	return age;
}
	//DISPLAY FUNCTION VIRTUAL
void Person::display() {

	cout << "Specie : " << setw(8)
		<< "\tName : " << setw(8)
		<< "\tAge : " << endl;
	cout << specie << setw(3)
		<< "\t" << name << setw(3)
		<< "\t" << age << endl;
}

//DERIVED CLASS|STUDENT
	//DEFAULT CONSTRUCTOR
Student::Student():Person() {
		cout<<"Calling Student Constructor : \n";
	specie = ' ';
	name = ' ';
	age = 0;
	university = ' ';
	ID = 0;
}
	//PARAMETRIZED CONSTRUCTOR
Student::Student(string name, int age, string uni, int id) : Person(name, age) {
	cout<<"Calling Student Constructor : \n";
	this->university = uni;
	this->ID = id;

	
}
	//UNIVERSITY GETTER
string Student::get_university()const {
	return university;
}
	//ID GETTER
int Student::get_id()const {
	return ID;
}
	//BASE CLASS VIRTUAL FUNCTION
void Student::display() {
	cout <<"Specie : "<<setw(8)
		<<"\tName : " << setw(8)
		<< "\tAge : " << setw(8)
		<< "\tUniversity : " << setw(8)
		<< "\tID is : " << endl;
	cout <<specie << setw(3)
		<<"\t"<<name << setw(3)
		<< "\t"<< age << setw(3)
		<< "\t" << university << setw(8)
		<< "\t" << ID << endl;
}
	
/*void Student::major() {
	cout << "Major is Computer Science\n";
}*/
void  friendfunction(Student *s) {
	cout << "\nFriend Function\n";
	cout << "Protected(LivingOrganisms)\n"
		<< "Specie : \n" << s->specie<< endl
		<< "Protected(Person) members\n" 
		<< "Name : " 
		<< "\tAge : \n"
		<<s->name
		<<"\t\t"<<s->age<<endl

		<< "Protected (Student) members :" << endl
		<< "University : "
		<< "\tID is : " << endl
		<<s->university
		<< "\t\t"<< s->ID << endl;
}
Person* Person::operator=(Person* right) {

	this->specie = right->specie;
	this->name = right->name;
	this->age = right->age;
	return this;

}
Student* Student::operator=(Student* right) {

	this->specie = right->specie;
	this->name = right->name;
	this->age = right->age;
	this->university = right->university;
	this->ID = right->ID;
	return this;

}
//BASE CLASS DESTRUCTOR
LivingOrganisms::~LivingOrganisms()
{
	cout<<"Calling LivingOrganisms Destructor : \n";
}
Person::~Person()
{
	cout<<"Calling Person Destructor : \n";
}
//DERIVED CLASS DESTRUCTOR
Student::~Student() {
	cout<<"Calling Student Destructor : \n";
}
