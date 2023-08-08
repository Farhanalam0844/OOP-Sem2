#include<iostream>
#include<string>
using namespace std;

class ShapeArea{
	protected:
		double area;
	public:
		double get_area()const;
		virtual void cal_area()=0;
		
};
class Circle : public ShapeArea{
	private:
		long centerX;
		long centerY;
		double radius;
	public:
		Circle(long x,long y,double r);
		long get_centerX()const;
		long get_centerY()const;
		virtual void cal_area();
};
class Rectangle :public ShapeArea{
	private:
		int width;
		int length;
	public:
		Rectangle(int w,int l);
		int get_width()const;
		int get_length()const;
		virtual void cal_area();
};
int main(){
	int x,y,w,l;
	double r;
	cout<<"Calculate the area of Circle/Rectangle : ";
	cout<<"For Circle \nEnter radius : ";
	cin>>r;
	cout<<"Enter center x value : ";
	cin>>x;
	cout<<"Enter center y value : ";
	cin>>y;
	ShapeArea* s=new Circle(x,y,r);
	cout<<"For Rectangle \nEnter lenth : ";
	cin>>l;
	cout<<"Enter width : ";
	cin>>w;
	ShapeArea* R=new Rectangle(w,l);
	cout<<"Area of Cirle : "<<s->get_area()<<endl;
	cout<<"Area of Rectangle : "<<R->get_area()<<endl;
}
double ShapeArea::get_area()const{
	return area;
}
Circle::Circle(long x,long y,double r){
	this->centerX=x;
	this->centerY=y;
	this->radius=r;
	this->cal_area();
}
long Circle::get_centerX()const{
	return centerX;
}
long Circle::get_centerY()const{
	return centerY;
}
void Circle::cal_area(){
	area=3.1456*radius*radius;
}
Rectangle::Rectangle(int w,int l){
	this->width=w;
	this->length=l;
	this->cal_area();
}
int Rectangle::get_length()const{
	return length;
}
int Rectangle::get_width()const{
	return width;
}
void Rectangle::cal_area(){
	area=width*length;
}

