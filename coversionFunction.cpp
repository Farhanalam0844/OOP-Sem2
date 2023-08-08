
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string> 
using namespace std;

int main()
{	//atof    string to float	=>	double atof ( const char * str )
    //atoi    string to integer =>  int atoi (const char * str);
    //atol    string to long integer  ==>	long int atol ( const char * str )
    //itoa	  integer to string
    const char *str1 = "xyz 123"; 			// char str1[20]="42";
    const char *str2 = "3.14159"; 
    const char *str3 = "abc 65"; 
     
    int num1 = atoi(str1); //42 integer
    float num2 = atof(str2); //3.14159 float
    long int num3 = atol(str3); //5555 long int
    
    cout << "atoi(\"" << str1  << "\") is " << num1 << '\n'; 
    cout << "atof(\"" << str2  << "\") is " << num2 << '\n'; 
    cout << "atol(\"" << str3  << "\") is " << num3 << '\n'; 
    
    cout<<"\n\n num1="<<num1+3;  //42+3=45
    cout<<"\n num2="<<num2+7;	//3.14159+7=10.14159
    cout<<"\n num3="<<num3+5;	//5555+5=5560
    
    return 0;
}
