#pragma once
#include <string>
#include <vector>
#include <math.h>

using namespace std;

class Shape {

public:
	virtual void Scale(float scaleFactor) = 0;
	virtual void Display() const = 0;
	virtual ~Shape();
};

class Shape2D : virtual public Shape {

public:
	virtual float Area() const = 0;
	void ShowArea() const;
	virtual string GetName2D() const = 0;
	bool operator>(const Shape2D &rhs) const;
	bool operator<(const Shape2D& rhs) const;
	bool operator==(const Shape2D& rhs) const;
};

class Square : public Shape2D {
protected:
	float _length;

public:
	float Area() const;
	string GetName2D() const;
	void Scale(float scaleFactor);
	void Display() const;

	Square();
	Square(float length);
};

class Triangle : public Shape2D {
protected:
	float _base;
	float _height;

public:
	float Area() const;
	string GetName2D() const;
	void Scale(float scaleFactor);
	void Display() const;

	Triangle();
	Triangle(float base, float height);
};

class Circle : public Shape2D {
protected:
	float _radius;

public:
	float Area() const;
	string GetName2D() const;
	void Scale(float scaleFactor);
	void Display() const;

	Circle();
	Circle(float radius);
};

class Shape3D : virtual public Shape {

public:
	virtual float Volume() const = 0;
	void ShowVolume() const;
	virtual string GetName3D() const = 0;
	bool operator>(const Shape3D& rhs) const;
	bool operator<(const Shape3D& rhs) const;
	bool operator==(const Shape3D& rhs) const;
};

class TriangularPyramid : public Shape3D, private Triangle {
private:
	float _pHeight;
public:
	TriangularPyramid();
	TriangularPyramid(float _pHeight, float base, float height);

	float Volume() const;
	string GetName3D() const;
	void Scale(float scaleFactor);
	void Display() const;
};

class Cylinder : public Shape3D, private Circle {
private:
	float _cHeight;
public:
	Cylinder();
	Cylinder(float cHeight, float radius);

	float Volume() const;
	string GetName3D() const;
	void Scale(float scaleFactor);
	void Display() const;
};

class Sphere : public Shape3D, private Circle {
public:
	Sphere();
	Sphere(float radius);

	float Volume() const;
	string GetName3D() const;
	void Scale(float scaleFactor);
	void Display() const;
};

