#pragma once
#include "RungeKutta.h"
class Cylinder :
	public RungeKutta
{
private:
	double M, R;			// Масса и радиус 
	double width, height;	// Ширина и высота наклонной плоскости
	double a;				// Угол наклона плоскости

protected:
	double get_x() { return Y[0]; };
	double get_phi() { return Y[1]; };
	double get_V() { return Y[2]; };
	double get_w() { return Y[3]; };

public:
	Cylinder(double M, double R, double width, double height);
	~Cylinder();

	double get_cylinder_x() { return get_x() * cos(a); };
	double get_cylinder_y() { return (width - get_cylinder_x()) * tan(a) + R / cos(a); };
	
	double get_dot_x() { return get_cylinder_x() + R * cos(get_phi()); };
	double get_dot_y() { return get_cylinder_y() + R * sin(get_phi()); };

	virtual std::vector<double> F(double t, std::vector<double>& Y) override;

};

