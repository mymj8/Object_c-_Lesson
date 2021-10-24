#define _USE_MATH_DEFINES
#include <cmath>

#include "Vector3d.h"

Vector3d::Vector3d()
{
	this->mX = 0.0;
	this->mY = 0.0;
	this->mZ = 0.0;
}

Vector3d::Vector3d(double x, double y, double z)
{
	this->mX=x;
	this->mY=y;
	this->mZ=z;
}

double Vector3d::GetX() const
{
	return this->mX;
}

double Vector3d::GetY() const
{
	return this->mY;
}

double Vector3d::GetZ() const
{
	return this->mZ;
}

void Vector3d::SetX(double x)
{
	this->mX = x;
}

void Vector3d::SetY(double y)
{
	this->mY=y;
}

void Vector3d::SetZ(double z)
{
	this->mZ=z;
}

Vector3d Vector3d::Add(double c) const
{
	Vector3d v3;
	v3.SetX(this->mX + c);
	v3.SetY(this->mY + c);
	v3.SetZ(this->mZ + c);
	return v3;
}

Vector3d Vector3d::Add(const Vector3d& v) const
{
	Vector3d v3;
	v3.mX = this->mX + v.GetX();
	v3.mY = this->mY + v.GetY();
	v3.mZ = this->mZ + v.GetZ();
	return v3;
}

Vector3d Vector3d::Sub(double c) const
{
	Vector3d v3;
	v3.mX = this->mX - c;
	v3.mY = this->mY - c;
	v3.mZ = this->mZ - c;
	return v3;
}

Vector3d Vector3d::Sub(const Vector3d& v) const
{
	Vector3d v3;
	return v3;
}


Vector3d Vector3d::Mul(double c) const
{
	Vector3d v3;
	return v3;
}

Vector3d Vector3d::Mul(const Vector3d& v) const
{
	Vector3d v3;
	return v3;
}

Vector3d Vector3d::Div(double c) const
{
	Vector3d v3;
	return v3;
}

Vector3d Vector3d::Div(const Vector3d& v) const
{
	Vector3d v3;
	return v3;
}

double Vector3d::Sum() const
{
	return this->mX + this->mY + this->mZ;
}

double Vector3d::Length() const
{
	return sqrt(pow(this->mX,2)+pow(this->mY,2)+pow(this->mZ,2));
}

double Vector3d::Distance(const Vector3d& v) const
{
	return sqrt(pow((this->mX - v.mX), 2) + pow((this->mY - v.mY), 2) + pow((this->mZ - v.mZ), 2));;
}

double Vector3d::Inner(const Vector3d& v) const
{
	return (this->mX * v.mX) + (this->mY * v.mY) + (this->mZ * v.mZ);;
}

Vector3d Vector3d::Cross(const Vector3d& v) const
{
	Vector3d v3;
	v3.mX = ((this->mY * v.mZ) - (this->mZ * v.mY));
	v3.mY = ((this->mZ * v.mX) - (this->mX * v.mZ));
	v3.mZ = ((this->mX * v.mY) - (this->mY * v.mX));
	return v3;
}

double Vector3d::Angle(const Vector3d& v, bool radian) const
{
	double v3_radian, v3_degree;
	v3_radian = acos(this->Inner(v) / (this->Length() * v.Length()));
	v3_degree = v3_radian * (180 / M_PI);
	if (radian) {
		return v3_radian;
	}
	else {
		return v3_degree;
	}
}


