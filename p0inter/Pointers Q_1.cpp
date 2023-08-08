#include<iostream>
using namespace std;
int* funct(int n){
	int *arr=NULL;
	arr=new int[n];
	return arr;
}
int main()
{
	int n;
	cout<<"How many indexes you want to create : ";
	cin>>n;
	int *arr=funct(n);
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"Enter value in index : "<<i+1<<" : ";
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<"Value in index : "<<i+1<<" is : "<<arr[i]<<"\n";
	}
}
