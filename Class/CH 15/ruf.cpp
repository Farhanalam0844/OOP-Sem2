#include<iostream>
using namespace std;
class First
 {
 private:
 int a;
 protected:
 double b;
 public:
 long c;
 };
class Second : protected First
 {
 private:
 int d;
 protected:
 double e;
 public:
 long f;
 };
class Third : public Second
 {
 private:
 int g;
 protected:
 double h;
 public:
 long i;
// 	Third(){
// 		this->
//	 }
 };
