#include<iostream>
using namespace std;
void sortFunct(int* a,int n){
	int i,j,*temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++)
		{
			if(*(a+i)>*(a+j)){
				*temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=*temp;
			}
		}
	}
	
}
void displayFunct(int* a,int n){
	int i;
	for(i=0;i<n;i++){
		cout<<"Movies the student : "<<i+1<<" watched are : "<<*(a+i)<<"\n";
	}
}
double medianFunct(int* a,int n){

	if(n%2==0){
		n=n/2;
	double ans= (a[n-1]+(a[n]));
		return ans/2;
	}
	else{
			n=n/2;
		return *(a+n);
	}
	
}
int modeFunct(int* a,int n){
	int i,j,count,countpre=0;
	int ans;
	for(i=0;i<n;i++){
		for(j=1;j<n;j++){
			if(*(a+j)==*(a+i))
			{
			count++;	
			}
		if(count>countpre){		
		countpre=count;
		ans=*(a+i-1);
		}
	}
}
if(count==0){
	return -1;
}
else return ans;
}
int main(){
	int stds;
	cout<<"How many students were surveyed : ";
	cin>>stds;
	int *arr=NULL;
	arr=new int[stds];
	int i;
	for(i=0;i<stds;i++){
		cout<<"How many movies did the student : "<<i+1<<" watched : ";
		cin>>arr[i];
	}
	sortFunct(arr,stds);
	displayFunct(arr,stds);
	cout<<medianFunct(arr,stds)<<"\n";
	cout<<modeFunct(arr,stds);
}
