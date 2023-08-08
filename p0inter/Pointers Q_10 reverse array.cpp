#include<iostream>
using namespace std;
int* arrfunc(int *arr,int n){
	int *arr2;
	arr2=new int[n];
	int j,i=0;
	for(i=0,j=n-1;i<n;i++,j--){
		
		arr2[j]=arr[i];
	}
	return arr2;
}
int main(){
	const int SIZE=5;
	int arr[SIZE];
	int i;
	for(i=0;i<SIZE;i++){
		cout<<"Enter value in the index : "<<i+1<<" : ";
		cin>>arr[i];
	}	
	int *arr2=arrfunc(arr,SIZE);
		for(i=0;i<SIZE;i++){
		cout<<"Value in the index : "<<i+1<<" is : "<<arr2[i]<<"\n";
	}
}
