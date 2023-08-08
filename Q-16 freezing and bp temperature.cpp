#include<iostream>
#include<string>
#include<iomanip>
#include"Temperature.h"
using namespace std;

int main(){
	int TEMP;
	cout<<"\t\t\t*****MENU*****\n\n";
	cout<<"Substances"<<setw(20)<<"Freezing Points"<<setw(20)<<"Boiling Points"<<endl;
	cout<<"Ethyl Alcohol"<<setw(14)<<"-173"<<setw(16)<<"172"<<endl;
	cout<<"Oxygen "<<setw(20)<<"-362"<<setw(16)<<"-306"<<endl;		
	cout<<"Water "<<setw(20)<<"32"<<setw(17)<<"212"<<endl;
	cout<<"\nEnter the temperature you want to test--\nfreezing & boiling points of substances on : ";
	cin>>TEMP;
	Temperature chk_temp(TEMP);
	int temp_member=chk_temp.getTemp();
	if(chk_temp.isEthylBoiling(temp_member)){
		cout<<"Boiling point of : Ethyl\n";
	}
	if(chk_temp.isOxygenBoiling(temp_member)){
		cout<<"Boiling point of : Oxygen\n";
	}
	if(chk_temp.isWaterBoiling(temp_member)){
		cout<<"Boiling point of :Water\n";
	}
	if(chk_temp.isEthylFreezing(temp_member)){
		cout<<"Freezing point of : Ethyl\n";
	}
	if(chk_temp.isOxygenFreezing(temp_member)){
		cout<<"Freezing point of : Oxygen\n";
	}
	if(chk_temp.isWaterFreezing(temp_member)){
		cout<<"Freezing point of : Water\n";
	}
}
