#include<iostream>
using namespace std;
template<class T,int n>
class Array{
	private:
		T* arr;
		int SIZE;
	public:
		Array();
		void set_array();
		void disp_array();	
};
int main(){
	const int ind=10;
	Array<int,ind> a;
	a.set_array();
	a.disp_array();
}
template<class T,int n>
Array<T,n>::Array(){
	SIZE=n;
	arr=new T[SIZE];
}
template<class T,int s>
void Array<T,s>::set_array(){
	int i;
	for(i=0;i<SIZE;i++){
		*(arr+i)=i;
	}
}
template<class T,int s>
void Array<T,s>::disp_array(){
	int i;
	for(i=0;i<SIZE;i++){
		cout<<*(arr+i)<<endl;
	}
}

