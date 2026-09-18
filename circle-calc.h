#ifndef CIRCLE_CALC_H
#define CIRCLE_CALC_H
#include <iostream>
#include <cstdio>
#include <windows.h>
#include <stdlib.h>
using namespace std;
class lzy {
public:
	double CircleAreaCalc(double radius, double PI) {
		return PI * radius * radius;
	}
	double CirclePerimeterCalc(double radius, double PI) {
		return PI * radius * 2;
	}
	double CircleGivePerimeterRadiusCalc(double circle_perimeter, double PI) {
		return circle_perimeter / PI / 2;
	}
	double SurfaceAreaOfACylinderThreeFacesCalc(double base_radius, double high, double PI) {
		return(2 * PI * base_radius * base_radius) + (2 * PI * base_radius * high);
	}
	double SurfaceAreaOfACylinderTwoFacesCupCalc(double base_radius, double high, double PI) {
		return (PI * base_radius * base_radius) + (2 * PI * base_radius * high);
	}
	double VolumeOfACylinderCalc(double base_radius, double high, double PI) {
		return PI * base_radius * base_radius * high;
	}
	double VolumeOfAConeCalc(double base_radius, double high, double PI) {
		return PI * base_radius * base_radius * high / 3;
	}
	double SurfaceAreaOfACubeCalc(double a) {
		return a * a * 6;
	}
	double SurfaceAreaOfaCuboidCalc(double a, double b, double high) {
		return 2 * (a * b + a * high + b * high);
	}
	double SurfaceAreaOfACubeLidlessCalc(double a) {
		return a * a * 5;
	}
	double SurfaceAreaOfaCuboidLidlessCalc(double a, double b, double high) {
		return a * b + 2 * (a * high + b * high);
	}
	double AreaOfARectangleCalc(double a, double b) {
		return a * b;
	}
	double AreaOfASquareCalc(double a) {
		return a * a;
	}
	double VolumeOfACubeCalc(double a) {
		return a * a * a;
	}
	double VolumeOfARectangleCalc(double a, double b, double high) {
		return a * b * high;
	}
	double AreaOfATriangleCalc(double a, double high) {
		return a * high / 2;
	}
	double AreaOfATrapezoidCalc(double a, double b, double high) {
		return (a + b) * high / 2;
	}
	double AreaOfAParallelogramCalc(double a, double high) {
		return a * high;
	}
	double AdditionCalc(double a, double b) {
		return a + b;
	}
	double SubtractionCalc(double a, double b) {
		return a - b;
	}
	double MultiplicationCalc(double a, double b) {
		return a * b;
	}
	double DivisionCalc(double a, double b) {
		return a / b;
	}
	double ModularArithmeticCalc(int a, int b) {
		return a % b;
	}
	double NPICalc(double N, double PI) {
		return N * PI;
	}
	lzy() = default;

	bool operator==(const lzy& other) const = default;
};
lzy calc;
#endif