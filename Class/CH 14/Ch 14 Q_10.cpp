#include<iostream>
using namespace std; 
class FeetInches{
	int x;
	public:
		FeetInches(){
			x=0;
		}
		FeetInches(int y){
			x=y;
		}
		FeetInches operator*(FeetInches &right){
			FeetInches temp;
			temp.x=this->x*right.x;
			return temp;
		}
};
class RoomDimension{
	private:
	FeetInches *width;
	FeetInches *length;
	public:
		RoomDimension(){
			width=NULL;
			length=NULL;
		}
		RoomDimension(int width,int length){
			width=width;
			length=length;
		}
		
		RoomDimension operator=(RoomDimension &right){
			RoomDimension temp;
			temp.width=right.width;
			temp.length=right.length;
			return temp;
		}
		/*RoomDimension(int width,int length){
			this->width=new FeetInches(width);
			this->length=new FeetInches(length);
		}
		*/
		FeetInches area(){
			return(*width*(*length));
		}
};
 class RoomCarpet{
	private:
		RoomDimension cost_per_square;
	public:
		int Total_cost(){
		return (RoomDimension::area()*cost_per_square);
		}
		RoomCarpet(RoomDimension c){
			this->cost_per_square=c;
		}	
		
};
int main(){
	
	RoomDimension x(5,5);
	FeetInches y;
	RoomCarpet z(8);
}
