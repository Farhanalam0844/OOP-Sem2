#include <iostream>

using namespace std;

void sum( int a, int& b, int& c)
{	
c=a+b;	a++;	b=b+1;     
}
int main(){
   	int x,y,z;	x=2; y=3;z=4;    
   	sum(x,y,z);	cout<<x<<","<<y<<","<<z<<"\n";	
	sum(y,x,z); 	cout<<x<<","<<y<<","<<z<<"\n";	
	sum(z,y,x);	cout<<x<<","<<y<<","<<z<<"\n";	
	
return 0;
   }



   
