#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
 {
 const int SIZE = 5;
 ofstream outFile("out.txt");
 double nums[SIZE] = {100.279, 1.719, 8.602, 7.777, 5.099};
 outFile << fixed << setprecision(2);
 for (int count = 0; count < 5; count++)
 {
 outFile << setw(8) << nums[count];
 }
 outFile.close();
 return 0;
 } 
