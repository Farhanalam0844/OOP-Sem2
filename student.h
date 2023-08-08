#ifndef _ "student.h" _ 
//#define _ "string.h" _ 
class student{
	private:
	int ID;
	int age;
	public:
	char grade;
	//string getname() {
//		return name;
//	}
	int getID(int id) {
	ID=id;
	return ID;
	};
	int getage(int Age){
	age=Age;
	return age;
	};
};

#endif
