#include<iostream>
using namespace std;
int* shifter(int* a,int n){
	const int SIZE=n+1;
	int i,j;
	int* b=new int[SIZE];
	b[0]=0;
	for(i=1,j=0;i<SIZE;i++,j++){
		b[i]=a[j];
	}
	return b;
}
int main(){
	const int SIZE=5;
	int i,arr1[SIZE];
	for(i=0;i<SIZE;i++){
		cout<<"Enter value in index : "<<i+1<<" : ";
		cin>>arr1[i];
	}
	for(i=0;i<SIZE;i++){
		cout<<"Value in index : "<<i+1<<" is : "<<arr1[i]<<endl;
	}
	int* a2=shifter(arr1,SIZE);
	for(i=0;i<=SIZE;i++){
		cout<<"Value in index in array 2 : "<<i+1<<" is : "<<a2[i]<<endl;
	}
}
