
#include <vector>
#include "catch.hpp"
#include <iostream>

class Vector3f
{
public:
	Vector3f(); // default constructor
	~Vector3f(); // deconstructor
	Vector3f(float x, float y, float z); // custom vector
		float x = 0.0f;
		float y = 0.0f;
		float z = 0.0f;
	void newValue(float xNew, float yNew, float zNew);

private:


};
Vector3f::Vector3f()
{
	std::cout << x << std::endl << y << std::endl << z << std::endl;
}

 Vector3f::~Vector3f()
{
	std::cout << "Deconstructed" <<  std::endl;
}

void Vector3f::newValue(float xNew, float yNew, float zNew)
{
	x = xNew;
	y = yNew;
	z = zNew;
	std::cout << x << std::endl << y << std::endl << z << std::endl;
}

Vector3f::Vector3f(float x, float y, float z)
{
	newValue(x, y, z);
}

bool operator==(const Vector3f& a, const Vector3f& b) { return (a.x == b.x) && (a.y == b.y) && (a.z == b.z); }
bool operator!=(const Vector3f& a, const Vector3f& b) { return (a.x != b.x) || (a.y != b.y) || (a.z != b.z); }


	TEST_CASE("Testing our default values", "[Vector3f]") {
		Vector3f a;
		REQUIRE(a.x == 0.0f);
		REQUIRE(a.y == 0.0f);
		REQUIRE(a.z == 0.0f);
	}


	TEST_CASE("Testing if our values can change", "[Vector3f]") {
		Vector3f b(1.0f, 2.0f, 3.0f); 
		
		REQUIRE(b.x == 1.0f);
		REQUIRE(b.y == 2.0f);
		REQUIRE(b.z == 3.0f);
	}
	TEST_CASE("Testing if our values can copy", "[Vector3f]") {
		Vector3f a(1, 2, 3);
		Vector3f b(a);
		REQUIRE(b.x == a.x);
		REQUIRE(b.y == a.y);
		REQUIRE(b.z == a.z);

	}
	TEST_CASE("Testing if == operator works", "[Vector3f]") {
		Vector3f a(1, 2, 3);
		Vector3f b(a);
		REQUIRE(b == a);
		

	}
	TEST_CASE("Testing if != operator works", "[Vector3f]") {
		Vector3f a(1, 2, 3);
		Vector3f b(2,a.y,a.z);
		REQUIRE(b != a);


	}
