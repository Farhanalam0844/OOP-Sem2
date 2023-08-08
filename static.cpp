#include<iostream>
#include<string>
using namespace std;

class staticmember{
	private:

		int x;
	public:
		static int no;
		staticmember();
		void display();
		int static memberfunction();
		
};

int staticmember::no=0;
int main(){
	cout<<"Program begins : \n";
	
	staticmember member1;
//	member1.no=5;
	int d=member1.memberfunction();
	cout<<d<<"\n";
//	int staticmember::no=5;
//access in main just if public can't be accessed in private in function but outside functions
	staticmember::no;
cout<<"How many objects have been created : "<<member1.no;

}

staticmember::staticmember(){
	no++;
}
int staticmember::memberfunction(){
	return no;
}
