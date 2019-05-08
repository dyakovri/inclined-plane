#include "Cylinder.h"



Cylinder::Cylinder(double M, double R, double width, double height) : RungeKutta(4)
{
	this->M = M;
	this->R = R;
	this->width = width;
	this->height = height;

	this->a = atan(height / width);

	std::vector<double> Y0(4);
	Y0[0] = 0;
	Y0[1] = 0;
	Y0[2] = 0;
	Y0[3] = 0;
	SetInit(0, Y0);
}


Cylinder::~Cylinder()
{
}

std::vector<double> Cylinder::F(double t, std::vector<double>& Y)
{
	FY[0] = Y[2];	// x' = V
	FY[1] = Y[3];	// f' = w
	FY[2] = 9.81 * cos(a);								// MV' = Силы действующая вдоль оси движения
	FY[3] = -9.81 * M * R * cos(a) / (0.5 * M * R * R);	// Jw' = Момент силы тяжести

	return FY;
}
