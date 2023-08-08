#include<iostream>
using namespace std;
template <class T>
class TestScore{
	private:
		T *sc;
	public:
		TestScore(int size){
			sc=new T[size];
			int i;
			for(i=0;i<size;i++){
				cin>>sc[i];
			}
		}
		T average(int size){
			try{
			
			T sum=0;
			int i;
			for(i=0;i<size;i++){
			sum+=sc[i];
				if(sc[i]<0||sc[i]>100) throw sc[i];
			}
			}
			catch(T a){
				cout<<"Invalid value : "<<a<<endl;
			}
			
		}
};
int main(){
	TestScore <int> s(7);
	s.average(7);
	
}
