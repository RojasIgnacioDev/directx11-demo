#pragma once

#include <math.h>
#include <vector.h>

class Vector3 {
public:
	float x, y, z;

	Vector3();
	Vector3(float x, float y, float z);

	float length();
	Vector3 normalized();
};

Vector3::Vector3() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Vector3::Vector3(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

float Vector3::length() {
	float length = 0.0f;
	length = (float)sqrt(
		(this->x) * (this->x) + 
		(this->y) * (this->y) +
		(this->z) * (this->z)
	);
	return length;
}

Vector3 Vector3::normalized() {
	auto normalized_vector = Vector3();
	Vector3& nv = normalized_vector;
	float len = this->length();

	if (len == 0) {
		return Vector3();
	}

	nv.x = this->x / this->length();
	nv.y = this->y / this->length();
	nv.z = this->z / this->length();
	
	return normalized_vector;
}