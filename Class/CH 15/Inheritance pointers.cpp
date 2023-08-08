#include<iostream>
#include<string>
using namespace std;
class Base{
	private:
		int PRIVATE;
	protected:
		int PROTECTED;
	public:
		int PUBLIC;
		Base(){
			PRIVATE=0;
			PROTECTED=0;
			PUBLIC=0;
		}
		int get_PRIVATE(){
			return PRIVATE;
		}
		int get_PROTECTED(){
			return PROTECTED;
		}
		int get_PUBLIC(){
			return PUBLIC;
		}
};
class Derived:public Base{
private:
		int D_PRIVATE;
	protected:
		int D_PROTECTED;
	public:
		int D_PUBLIC;
	Derived(){
			D_PRIVATE=0;
			D_PROTECTED=0;
			D_PUBLIC=0;
		}
//	int get_D_PRIVATE(){
//			return D_PRIVATE;
//		}
//	int get_D_PROTECTED(){
//			return D_PROTECTED;
//		}
//	int get_D_PUBLIC(){
//			return D_PUBLIC;
//		}
		int* get_D_PRIVATE(){
			return &D_PRIVATE;
		}
	int* get_D_PROTECTED(){
			return &D_PROTECTED;
		}
	int* get_D_PUBLIC(){
			return &D_PUBLIC;
		}
};
int main(){
	//POINTER TO Derived CLASS
	Base* p=new Derived;
	cout<<"Derived Private : "<<p->get_PRIVATE()<<"\tProtected : "<<p->get_PROTECTED()<<"\tPublic : "<<p->get_PUBLIC()<<endl;

//Derived* p2=new Base
// error cannot create pointer of derived class pointing to base
Base* p4=new Base;
Derived* p3=(Derived*)p4;
//pointer of derived class to base class
	//but cause error to access members
//	cout<<"Base Private : "<<p3->get_PRIVATE()<"\tProtected : "<<p3->get_PROTECTED()<<"\tPublic : "<<p3->get_PUBLIC()<<endl;
	p3->PUBLIC=0;
	p3->D_PUBLIC=0;
	//also same here
//	cout<<"Derived Private : "<<p3->get_D_PRIVATE()<"\tProtected : "<<p3->get_D_PROTECTED()<<"\tPublic : "<<p3->get_D_PUBLIC()<<endl;

	//but okay in accessing members
	cout<<p3->PUBLIC<<p3->D_PUBLIC;

	
}
