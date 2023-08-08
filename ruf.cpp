#include<iostream>
#include<string>
using namespace std;
class LivingOrganisms {
private:
	string specie;
public:
	LivingOrganisms();
	LivingOrganisms(string specie = "Homo sapiens");
	virtual void display()=0;
};
//BASE CLASS PERSON
class Person
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
	~Person();
};
//DERIVED CLASS STUDENT (INHERITANCE)
class Student:public Person {
	protected:
		string university;
		int ID;
public:
	Student() ;
	Student( string name,int age,string uni, int id);
	string get_university()const;
	int get_id()const;
	virtual void display();
	//virtual void major();
	virtual Student* operator=(Student* right);
	friend void friendfunction(Student *d);
	virtual ~Student();
};
int main() {
	LivingOrganisms l1();
	string name, uni;
	int age, id;
	cout << "PERSON CLASS \n";
	cout << "Enter name of person : ";
	getline(cin, name);
	cout << "Enter age of person : ";
	cin>>age;
	Person p1(name,age);
	p1.display();
	Person p2;
	p2 = p1;
	cout << "Displaying After assignment operator(which is also virtual) : Person :\n";
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
	Student *s2;
	s2 = (Student*)s1;
	cout << "Displaying After assignment operator : Student (which is also virtual) :\n";
	s2->display();

	friendfunction((Student*)s1);

}
LivingOrganisms::LivingOrganisms() {
	specie = ' ';
}
LivingOrganisms::LivingOrganisms(string specie ) {
	this->specie = specie;
}
//BASE CLASS|PERSON 
	//DEFAULT CONSTRUCTOR
Person::Person()
{
	name = ' ';
	age = 0;
}
	//PARAMETRIZED CONSTRUCTOR
Person::Person(string name,int age) 
{
	this->name =name;
	this->age = age;
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
	cout << "Name is : " << name
		<< "\tAge is : " << age << endl;
}

//DERIVED CLASS|STUDENT
	//DEFAULT CONSTRUCTOR
Student::Student():Person() {
	university = ' ';
	ID = 0;
}
	//PARAMETRIZED CONSTRUCTOR
Student::Student(string name, int age, string uni, int id) : Person(name, age) {
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
	cout << "Name is : " << name
		<< "\tAge is : " << age
		<< "\tUniversity is : " << university
		<< "\tID is : " << ID << endl;
}
	
/*void Student::major() {
	cout << "Major is Computer Science\n";
}*/
void  friendfunction(Student *s) {
	cout << "Friend Function\n";
	cout << "Protected(Person) members :\nName : " << s->name
		<< "\t age : " << s->age
		<< "\nProtected (Student) members : \nUniversity : " << s->university
		<< "\t ID : " << s->ID << endl;

}
Person* Person::operator=(Person* right) {
	Person temp;
	temp.name = right->name;
	temp.age = right->age;
	return &temp;
}
Student* Student::operator=(Student* right) {
	Student temp;
	temp.name = right->name;
	temp.age = right->age;
	temp.university = right->university;
	temp.ID = right->ID;
	return &temp;
}
//BASE CLASS DESTRUCTOR
Person::~Person()
{
	
}
//DERIVED CLASS DESTRUCTOR
Student::~Student() {

}
