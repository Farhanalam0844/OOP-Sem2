#include<iostream>
using namespace std;

class ABC{
	public:
		int a;
		int b;

		ABC(){
		a=5;
		b=10;
		}
		ABC operator,(ABC& right)
		{
//			ABC temp;
//			temp.a=right.a;
//			temp.b=right.b;
//			return temp;
//	
	this->a=right.a;
	this->b=right.b;
	
	}
	ABC operator()(int a,int b)
		{
	this->a=a;
	this->b=b;
	return *this;
	}
		void print(){
			cout<<"a : "<<this->a<<"\tb : "<<this->b<<endl;
		}
};
int main(){
	ABC a,b;
	a.print();
	b.print();
	b.a=20;
	b.b=40;
	b.print();
	ABC c=(a,b);
	a.print();
	//c.print();
//	ABC d=
	c(5,6);
	c.print();
}
