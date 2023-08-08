#include<iostream>
using namespace std;
class A{
	private:
		int  *ptr;
		int size;
		public:
		A(int size);
		void print();
		int& operator[](int &s); 
};
int main()
{
	#define SIZE 5
	A a(5);
	int i;
	for(i=0;i<SIZE;i++){
		a[i]=i;
	}
	a.print();
	for(i=0;i<SIZE;i++){
		a[i]++;
	}a.print();
	for(i=0;i<SIZE;i++){
		a[i]+=5;
	}
	a.print();
}
A::A(int size){
	this->size=size;
	ptr=new int[size];
	int i;
	for(i=0;i<size;i++){
		*(ptr+i)=0;
	}
}
int& A::operator[](int &s){
	return ptr[s];
}
void A::print(){
	int i;
	for(i=0;i<size;i++){
		cout<<ptr[i]<<"\t";
	}
	cout<<"\n";
}
