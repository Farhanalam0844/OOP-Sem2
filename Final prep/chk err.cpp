//#include <iostream>
//using namespace std;
//class Circle
// {
// private:
// double centerX;
// double centerY;
// double radius;
// public:
// setCenter(double, double);
// setRadius(double);
// };
// int main(){
// 	
// }
// #include <iostream>
//using namespace std;
//class Moon
// {
// private:
// double earthWeight;
// double moonWeight;
// public:
// void MoonWeight(double ew)
// { earthWeight = ew; 
// moonWeight = earthWeight / 6; }
// double getMoonWeight()
// { return moonWeight; }
// };
//int main()
// {
// double earth;
// cout << "What is your weight? ";
// cin >> earth;
// Moon lunar;
// lunar.MoonWeight(earth);
// cout << "On the moon you would weigh "
// <<lunar.getMoonWeight() << endl;
// return 0;
// } 

class Change
 {
 public:
 int pennies;
 int nickels;
 int dimes;
 int quarters;
 Change()
 { pennies = nickels = dimes = quarters = 0; }
 Change(int p = 100, int n = 50, int d = 50,int q = 25);
 };
Change::Change(int p, int n, int d,int q)
 {
 pennies = p;
 nickels = n;
 dimes = d;
 quarters = q;
 } 
