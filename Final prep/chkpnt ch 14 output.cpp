//#include <iostream>
//using namespace std;
//class Sky
// {
// public:
// Sky()
// { cout << "Entering the sky.\n"; }
// ~Sky()
// { cout << "Leaving the sky.\n"; }
// };
//class Ground : public Sky
// {
// public:
// Ground()
// { cout << "Entering the Ground.\n"; }
// ~Ground()
// { cout << "Leaving the Ground.\n"; }
// };
// int main()
// {
// Ground object;
// return 0;
// } 

//#include <iostream>
//using namespace std;
//class Sky
// {
// public:
// Sky()
// { cout << "Entering the sky.\n"; }
// Sky(string color)
// { cout << "The sky is " << color << endl; }
// ~Sky()
// { cout << "Leaving the sky.\n"; }
// };
//class Ground : public Sky
// {
// public:
// Ground()
// { cout << "Entering the Ground.\n"; }
// Ground(string c1, string c2) : Sky(c1)
// { cout << "The ground is " << c2 << endl; }
// ~Ground()
// { cout << "Leaving the Ground.\n"; }
// };
//int main()
// {
// Ground object;
// return 0;
// }
//
//#include <iostream>
//using namespace std;
//class First
// {
// protected:
// int a;
// public:
// First(int x = 1)
// { a = x; }
// int getVal()
// { return a; }
// };
//class Second : public First
// {
// private:
// int b;
// public:
// Second(int y = 5)
// { b = y; }
// int getVal()
// { return b; }
// };
//int main()
// {
// First object1;
// Second object2;
// cout << object1.getVal() << endl;
// cout << object2.getVal() << endl;
// return 0;
// }  

//#include <iostream>
//using namespace std;
//class First
// {
// protected:
// int a;
// public:
// First(int x = 1)
// { a = x; }
// void twist()
// { a *= 2; }
// int getVal()
// { twist(); return a; }
// };
//class Second : public First
// {
// private:
// int b;
// public:
// Second(int y = 5)
// { b = y; }
// void twist()
// { b *= 10; }
// };
//int main()
// {
// First object1;
// Second object2;
// cout << object1.getVal() << endl;
// cout << object2.getVal() << endl;
// return 0;
// }

#include <iostream>
using namespace std;
class First
 {
 protected:
 int a;
 public:
 First(int x = 1)
 { a = x; }
 virtual void twist()
 { a *= 2;
 //cout<<a<<"\n";
  }
 int getVal()
 { twist(); return a; }
 };
class Second : public First
 {
 private:
 int b;
 public:
 Second(int y = 5)
 { b = y; }
 virtual void twist()
 { b *= 10;
 //cout<<b<<"\n"; }
 };
int main()
 {
 First object1;
 Second object2;
 cout << object1.getVal() << endl;
 cout << object2.getVal() << endl;
 return 0;
 }  
