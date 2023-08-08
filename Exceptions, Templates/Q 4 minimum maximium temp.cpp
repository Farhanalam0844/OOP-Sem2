#include<iostream>
#include<string>
using namespace std;
template <typename T>
T minimum(T a,T b){
	if(a<b) return a;
	else return b;
} 
template <typename T>
T maximum(T a,T b){
	if(a>b) return a;
	else return b;
}
int main(){
	cout<<"Maximum int    : "<<maximum<int>(4,5);
	cout<<"\nMaximum double : "<<maximum<double>(4.4,5.7);
	cout<<"\nMinimum int    : "<<minimum<int>(4,5);
	cout<<"\nMinimum double : "<<minimum<double>(4.4,5.7);
}
