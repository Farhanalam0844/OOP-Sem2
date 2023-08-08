//class Box
// {
// private:
// double width;
// double length;
// double height;
// public:
// Box(double w,double l,double h)
// { width = w; length = l; height = h; }
// Box(Box &b) // Copy constructor
// { width = b.width;
// length = b.length;
// height = b.height; }
// }; 
// class Circle
// {
// private:
// double diameter;
// int centerX;
// int centerY;
// public:
// Circle(double d, int x, int y)
// { diameter = d; centerX = x; centerY = y; }
// // Overloaded = operator
//  Circle(Circle &right)
// { diameter = right.diameter;
// centerX = right.centerX;
// centerY = right.centerY; }
//
// };

//class Point
// {
// private:
// int xCoord;
// int yCoord;
// public:
// Point (int x, int y)
// { xCoord = x; yCoord = y; }
// // Overloaded + operator
// void operator+(const Point& right)
// { xCoord += right.xCoord;
// yCoord += right.yCoord;
// }
// }; 
// class Box
// {
// private:
// double width;
// double length;
// double height;
// public:
// Box(double w,double l,double h)
// { width = w; length = l; height = h; }
// // Overloaded prefix ++ operator
// void operator++()
// { ++width; ++length;}
// // Overloaded postfix ++ operator
// void operator++(int)
// { width++; length++;}
// };
 class Yard
 {
 private:
 float length;
 public:
 yard(float l)
 { length = l; }
 // float conversion function
operator float()
 { return length; }
 }; 
