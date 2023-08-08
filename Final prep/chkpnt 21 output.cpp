//#include <iostream>
//using namespace std;
//class Tank
// {
// private:
// int gallons;
// public:
// Tank()
// { gallons = 50; }
// Tank(int gal)
// { gallons = gal; }
// int getGallons()
// { return gallons; }
// };
//int main()
// {
// Tank storage[3] = { 10, 20 };
// for (int index = 0; index < 3; index++)
// cout << storage[index].getGallons() << endl;
// return 0;
// } 

//
//#include <iostream>
//using namespace std;
//class Package
// {
// private:
// int value;
// public:
// Package()
// { value = 7; cout << value << endl; }
// Package(int v)
// { value = v; cout << value << endl; }
// ~Package()
// { cout << value << endl; }
// };
//int main()
//{
// Package obj1(4);
// Package obj2();
// Package obj3(2);
// return 0;
//}
#include <iostream>
using namespace std;
class Yard
 {
 private:
 int length, width;
 public:
 Yard()
 { length = 0; width = 0; }
 void setLength(int len)
 { length = len; }
 void setWidth(int w)
 { width = w; }
 };
int main()
 {
 	int length,width=0;
 	Yard y[3];
 	int i;
 	for(i=0;i<3;i++){
 		cout<<"Enter length : ";
 		cin>>length;
 		y[i].setLength(length);
 		cout<<"Enter width : ";
 		cin>>width;
 		y[i].setWidth(width);
	 }
 } 
