//#include <iostream>
//#include<cmath>
//using namespace std;
//const double PI = 3.14159265;
//class Shape3D
//{
//public:
//	string shapeName;
//	Shape3D(string name) :shapeName(name) {}
//	virtual double calVolume() = 0;
//	string getName() { return shapeName; }
//};
//class Cube :public Shape3D
//{
//	double side;
//public:
//	Cube(string name, double l) :Shape3D(name), side(l) {}
//	double calVolume()
//	{
//		return side * side * side;
//	}
//};
//class Cuboid :public Shape3D
//{
//	double length, width, height;
//public:
//	Cuboid(string name, double l, double w, double h) :Shape3D(name), length(l), width(w), height(h) {}
//	double calVolume()
//	{
//		return length * width * height;
//	}
//	
//};
//class Sphere :public Shape3D
//{
//	double radius;
//public:
//	Sphere(string name, double r) :Shape3D(name), radius(r) {}
//	double calVolume()
//	{
//		return 4.0/3*PI*radius*radius*radius;
//	}
//	
//};
//class Cone :public Shape3D
//{
//	double radius,height;
//public:
//	Cone(string name, double r,double h) :Shape3D(name), radius(r),height(h) {}
//	double calVolume()
//	{
//		return PI * radius * radius*height*1.0/3;
//	}
//};
//int main() {
//
//	double length, width, height, radius;
//
//	Shape3D* sp;
//
//	cin >> length;
//
//	Cube cube("Cube", length);
//
//	cin >> length >> width >> height;
//
//	Cuboid cuboid("Cuboid", length, width, height);
//
//	cin >> radius;
//
//	Sphere sphere("Sphere", radius);
//
//	cin >> radius >> height;
//
//	Cone cone("Cone", radius, height);
//
//	sp = &cube;
//
//	cout << sp->getName() << ":" << sp->calVolume() << endl;
//
//	sp = &cuboid;
//
//	cout << sp->getName() << ":" << sp->calVolume() << endl;
//
//	sp = &sphere;
//
//	cout << sp->getName() << ":" << sp->calVolume() << endl;
//
//	sp = &cone;
//
//	cout << sp->getName() << ":" << sp->calVolume() << endl;
//
//	return 0;
//
//}