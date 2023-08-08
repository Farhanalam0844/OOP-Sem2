#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;



int main()
{
int i ;
    //char sports[5]20];
    char *sports[] = {
                         "golf",
                         "hockey",
                         "football",
                         "cricket",
                         "shooting"
                     };
 
    for(i = 0; i < 5; i++)
    {
        cout<<"\nString ="<< sports[i] ;
        cout<<"\t\tAddress of string literal sports["<<i <<"]= "<<&sports[i];
    }
	return 0;
}

