#include<iostream>
using namespace std;
class Points{
	public:
		int x;
		int y;
		Points();
		void disp_points()const;		
};
class Shape{
	protected:
		int num_points;
		Points *points;
	public:
		Shape();
		void set_area();
		void show_area();
		void set_points(Points *);
};
class Triangle: public Shape{
	public:
	Triangle();
	void set_area();
};
void set_triangle();
int main(){
	set_triangle();
}
Points::Points(){
	x=0;
	y=0;
	cout<<"Points constructor \n";
}
void Points::disp_points()const{
	cout<<"X : "<<x<<"\tY : "<<y<<endl;
}		
Shape::Shape(){
	this->num_points=0;
	this->points=NULL;
	cout<<"Shape constructor \n";
	
}
void Shape::set_area(){
	
}
void Shape::show_area(){
	Points* temp=points;
	int i;
	for(i=0;i<this->num_points;i++){
		temp->disp_points();
		temp++;
	}
}
void Shape::set_points(Points *p)
{
	this->points=p;
}
void Triangle::set_area(){
	//area
	cout<<"Triangle area \n";
}
Triangle::Triangle(){
	this->num_points=3;
	cout<<"Triangle constructor \n";
}
void set_triangle(){
	Triangle *t=new Triangle;
	Points* p=new Points[3];
	p[0].x=p[0].y=0;
	p[1].x=p[1].y=10;
	p[2].x=p[2].y=20;
	t->set_points(p);
	t->show_area();
}
