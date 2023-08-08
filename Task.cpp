#include<iostream>
using namespace std;

class xyz{
	private:
		int x;
		double y;
		char z;
	public:
		xyz(){
		x=0;
		y=0.0;
		z=' ';
		}
		xyz(int x,double y,char z){
			this->x=x;
			this->y=y;
			this->z=z;
		}
		xyz operator+(xyz& right){
			xyz temp;
			temp.x=this->x+right.x;
			temp.y=this->y+right.y;
			temp.z=this->z+right.z;
			return temp;
		}
		void display(){
			cout<<"int x    = "<<this->x<<endl;
			cout<<"double y = "<<this->y<<endl;
			cout<<"char z   = "<<this->z<<endl;
		}
};
int main(){
	xyz Obj1(5,6.3,'A');
	xyz Obj2(6,7.7,'B');
	xyz Obj3=Obj1+Obj2;
	cout<<"Values in Object 1 are : ";
	Obj1.display();
	cout<<"Values in Object 2 are : ";
	Obj2.display();
	cout<<"Values in Object 3 are : ";
	Obj3.display();
}
