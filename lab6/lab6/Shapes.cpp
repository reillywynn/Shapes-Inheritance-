#include "Shapes.h"
#include <string>
#include <iostream>
using namespace std;

Shape::~Shape(){

}

void Shape2D::ShowArea() const{
	cout << "The area of the " << GetName2D() << " is : " << Area() << endl;
}

bool Shape2D::operator>(const Shape2D& rhs) const {
	return (this->Area() > rhs.Area());
}
bool Shape2D::operator<(const Shape2D& rhs) const {
	return (this->Area() < rhs.Area());
}
bool Shape2D::operator==(const Shape2D& rhs) const {
	return (this->Area() == rhs.Area());
}

Square::Square() {
	_length = 0;
}

Square::Square(float length) {
	_length = length;
}

float Square::Area() const {
	float area = _length * _length;
	return area;
}

string Square::GetName2D() const {
	string name = "Square";
	return name;
}

void Square::Scale(float scaleFactor) {
	_length = _length * scaleFactor;
}

void Square::Display() const {
	cout << "The area of the Square is : " << Area() << endl;
	cout << "Length of a side: " << _length << endl;
}

Triangle::Triangle() {
	_base = 0;
	_height = 0;
}

Triangle::Triangle(float base, float height) {
	_base = base;
	_height = height;
}

float Triangle::Area() const {
	float area =  (_base * _height)/2;
	return area;
}

string Triangle::GetName2D() const {
	string name = "Triangle";
	return name;
}

void Triangle::Scale(float scaleFactor) {
	_base = _base * scaleFactor;
	_height = _height * scaleFactor;
}

void Triangle::Display() const {
	cout << "The area of the Triangle is : " << Area() << endl;
	cout << "Base: " << _base << endl;
	cout << "Height: " << _height << endl;
}

Circle::Circle() {
	_radius = 0;
}

Circle::Circle(float radius) {
	_radius = radius;
}

float Circle::Area() const {
	const float PI = 3.14159f;
	float area = PI * _radius * _radius;
	return area;
}

string Circle::GetName2D() const {
	string name = "Circle";
	return name;
}

void Circle::Scale(float scaleFactor) {
	_radius = _radius * scaleFactor;
}

void Circle::Display() const {
	cout << "The area of the Circle is : " << Area() << endl;
	cout << "Radius: " << _radius << endl;
}

void Shape3D::ShowVolume() const {
	cout << "The Volume of the " << GetName3D() << " is : " << Volume() << endl;
}

bool Shape3D::operator>(const Shape3D& rhs) const {
	return (this->Volume() > rhs.Volume());
}
bool Shape3D::operator<(const Shape3D& rhs) const {
	return (this->Volume() < rhs.Volume());
}
bool Shape3D::operator==(const Shape3D& rhs) const {
	return(this->Volume() == rhs.Volume());
}

TriangularPyramid::TriangularPyramid() {
	_pHeight = 0;
	_base = 0;
	_height = 0;
}

TriangularPyramid::TriangularPyramid(float pHeight, float base, float height) {
	_pHeight = pHeight;
	_base = base;
	_height = height;
}

float TriangularPyramid::Volume() const {
	float volume = (Area() * _pHeight) / 3;
	return volume;
}

string TriangularPyramid::GetName3D() const {
	string name = "TriangularPyramid";
	return name;
}

void TriangularPyramid::Scale(float scaleFactor) {
	_pHeight = _pHeight * scaleFactor;
}

void TriangularPyramid::Display() const {
	cout << "The volume of the TriangularPyramid is : " << Volume() << endl;
	cout << "The height is: " << _pHeight << endl;
	cout << "The area of the Triangle is : " << Area() << endl;
	cout << "Base: " << _base << endl;
	cout << "Height: " << _height << endl;
}

Cylinder::Cylinder() {
	_cHeight = 0;
	_radius = 0;
}

Cylinder::Cylinder(float cHeight, float radius) {
	_cHeight = cHeight;
	_radius = radius;
}

float Cylinder::Volume() const {
	float PI = 3.14159f;
	float volume = PI * _radius * _radius * _cHeight;
	return volume;
}

string Cylinder::GetName3D() const {
	string name = "Cylinder";
	return name;
}

void Cylinder::Scale(float scaleFactor) {
	_cHeight = _cHeight * scaleFactor;
	_radius = _radius * scaleFactor;
}

void Cylinder::Display() const {
	cout << "The volume of the Cylinder is : " << Volume() << endl;
	cout << "The height is: " << _cHeight << endl;
	cout << "The area of the Circle is: " << Area() << endl;
	cout << "Radius: " << _radius << endl;
}

Sphere::Sphere() {
	_radius = 0;
}

Sphere::Sphere(float radius) {
	_radius = radius;
}

float Sphere::Volume() const {
	float PI = 3.14159f;
	float volume = (4 * PI * _radius * _radius * _radius) / 3;
	return volume;
}

string Sphere::GetName3D() const{
	string name = "Sphere";
	return name;
}

void Sphere::Scale(float scaleFactor) {
	_radius = _radius * scaleFactor;
}

void Sphere::Display() const {
	cout << "The volume of the Sphere is : " << Volume() << endl;
	cout << "The area of the Circle is: " << Area() << endl;
	cout << "Radius: " << _radius << endl;
}