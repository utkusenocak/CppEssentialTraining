#include <iostream>
using namespace std;

double volume(double);
double volume(double, double);
double volume(double, double, double);

int main()
{
	printf("volume of 2 x 2 x 2 cube: %.3lf\n", volume(2.0));
	printf("volume of cylinder, radius 2, height 2: %.3lf\n", volume(2.0, 2.0));
	printf("volume of 2 x 3 x 4 cuboid: %.3lf\n", volume(2.0, 3.0, 4.0));
	return 0;
}

//volume of a cube
double volume(double a) {
	printf("cube of %.3lf\n", a);
	return a * a * a;
}

//volume of a cylinder
double volume(double r, double h) {
	const static double _pi = 3.14159265359;
	printf("cylinder of %.3lf x %.3lf\n", r, h);
	return _pi * r * h;
}

//volume of cuboid
double volume(double a, double b, double c) {
	printf("cuboid of %.3lf x %.3lf x %.3lf\n", a, b, c);
	return a * b * c;
}