# circle-calc
by bilibili @Chency_Wang_lzy

- Function: specially used to calculate the volume and surface area of circles, solid figures and plane figures.

## Function list
1. [CircleAreaCalc](#CircleAreaCalc) : Calculate the area of a circle
2. [CirclePerimeterCalc](#CirclePerimeterCalc) : Calculate the circumference of a circle
3. [CircleGivePerimeterRadiusCalc](#CircleGivePerimeterRadiusCalc) : Calculate radius from circle perimeter
4. [SurfaceAreaOfACylinderThreeFacesCalc](#SurfaceAreaOfACylinderThreeFacesCalc) : Calculate total surface area of cylinder(3 faces)
5. [SurfaceAreaOfACylinderTwoFacesCupCalc](#SurfaceAreaOfACylinderTwoFacesCupCalc) : Calculate surface area of cylinder cup(2 faces)
6. [VolumeOfACylinderCalc](#VolumeOfACylinderCalc) : Calculate volume of cylinder
7. [VolumeOfAConeCalc](#VolumeOfAConeCalc) : Calculate volume of cone
8. [SurfaceAreaOfACubeCalc](#SurfaceAreaOfACubeCalc) : Calculate total surface area of cube
9. [SurfaceAreaOfaCuboidCalc](#SurfaceAreaOfaCuboidCalc) : Calculate total surface area of cuboid
10. [SurfaceAreaOfACubeLidlessCalc](#SurfaceAreaOfACubeLidlessCalc) : Calculate surface area of lidless cube
11. [SurfaceAreaOfaCuboidLidlessCalc](#SurfaceAreaOfaCuboidLidlessCalc) : Calculate surface area of lidless cuboid
12. [AreaOfARectangleCalc](#AreaOfARectangleCalc) : Calculate area of rectangle
13. [AreaOfASquareCalc](#AreaOfASquareCalc) : Calculate area of square
14. [VolumeOfACubeCalc](#VolumeOfACubeCalc) : Calculate volume of cube
15. [VolumeOfARectangleCalc](#VolumeOfARectangleCalc) : Calculate volume of cuboid
16. [AreaOfATriangleCalc](#AreaOfATriangleCalc) : Calculate area of triangle
17. [AreaOfATrapezoidCalc](#AreaOfATrapezoidCalc) : Calculate area of trapezoid
18. [AreaOfAParallelogramCalc](#AreaOfAParallelogramCalc) : Calculate area of parallelogram
19. [AdditionCalc](#AdditionCalc) : Addition operation
20. [SubtractionCalc](#SubtractionCalc) : Subtraction operation
21. [MultiplicationCalc](#MultiplicationCalc) : Multiplication operation
22. [DivisionCalc](#DivisionCalc) : Division operation
23. [ModularArithmeticCalc](#ModularArithmeticCalc) : Modular arithmetic operation
24. [NPICalc](#NPICalc) : Calculate N multiply PI

<a id="CircleAreaCalc"></a>
### CircleAreaCalc() : Calculate the area of a circle
```cpp
double CircleAreaCalc(double radius, double PI) {
	return PI * radius * radius;
}
```

<a id="CirclePerimeterCalc"></a>
### CirclePerimeterCalc() : Calculate the circumference of a circle
```cpp
double CirclePerimeterCalc(double radius, double PI) {
	return PI * radius * 2;
}
```

<a id="CircleGivePerimeterRadiusCalc"></a>
### CircleGivePerimeterRadiusCalc() : Calculate radius from circle perimeter
```cpp
double CircleGivePerimeterRadiusCalc(double circle_perimeter, double PI) {
	return circle_perimeter / PI / 2;
}
```

<a id="SurfaceAreaOfACylinderThreeFacesCalc"></a>
### SurfaceAreaOfACylinderThreeFacesCalc() : Calculate total surface area of cylinder(3 faces)
```cpp
double SurfaceAreaOfACylinderThreeFacesCalc(double base_radius, double high, double PI) {
	return(2 * PI * base_radius * base_radius) + (2 * PI * base_radius * high);
}
```

<a id="SurfaceAreaOfACylinderTwoFacesCupCalc"></a>
### SurfaceAreaOfACylinderTwoFacesCupCalc() : Calculate surface area of cylinder cup(2 faces)
```cpp
double SurfaceAreaOfACylinderTwoFacesCupCalc(double base_radius, double high, double PI) {
	return (PI * base_radius * base_radius) + (2 * PI * base_radius * high);
}
```

<a id="VolumeOfACylinderCalc"></a>
### VolumeOfACylinderCalc() : Calculate volume of cylinder
```cpp
double VolumeOfACylinderCalc(double base_radius, double high, double PI) {
	return PI * base_radius * base_radius * high;
}
```

<a id="VolumeOfAConeCalc"></a>
### VolumeOfAConeCalc() : Calculate volume of cone
```cpp
double VolumeOfAConeCalc(double base_radius, double high, double PI) {
	return PI * base_radius * base_radius * high / 3;
}
```

<a id="SurfaceAreaOfACubeCalc"></a>
### SurfaceAreaOfACubeCalc() : Calculate total surface area of cube
```cpp
double SurfaceAreaOfACubeCalc(double a) {
	return a * a * 6;
}
```

<a id="SurfaceAreaOfaCuboidCalc"></a>
### SurfaceAreaOfaCuboidCalc() : Calculate total surface area of cuboid
```cpp
double SurfaceAreaOfaCuboidCalc(double a, double b, double high) {
	return 2 * (a * b + a * high + b * high);
}
```

<a id="SurfaceAreaOfACubeLidlessCalc"></a>
### SurfaceAreaOfACubeLidlessCalc() : Calculate surface area of lidless cube
```cpp
double SurfaceAreaOfACubeLidlessCalc(double a) {
	return a * a * 5;
}
```

<a id="SurfaceAreaOfaCuboidLidlessCalc"></a>
### SurfaceAreaOfaCuboidLidlessCalc() : Calculate surface area of lidless cuboid
```cpp
double SurfaceAreaOfaCuboidLidlessCalc(double a, double b, double high) {
	return a * b + 2 * (a * high + b * high);
}
```

<a id="AreaOfARectangleCalc"></a>
### AreaOfARectangleCalc() : Calculate area of rectangle
```cpp
double AreaOfARectangleCalc(double a, double b) {
	return a * b;
}
```

<a id="AreaOfASquareCalc"></a>
### AreaOfASquareCalc() : Calculate area of square
```cpp
double AreaOfASquareCalc(double a) {
	return a * a;
}
```

<a id="VolumeOfACubeCalc"></a>
### VolumeOfACubeCalc() : Calculate volume of cube
```cpp
double VolumeOfACubeCalc(double a) {
	return a * a * a;
}
```

<a id="VolumeOfARectangleCalc"></a>
### VolumeOfARectangleCalc() : Calculate volume of cuboid
```cpp
double VolumeOfARectangleCalc(double a, double b, double high) {
	return a * b * high;
}
```

<a id="AreaOfATriangleCalc"></a>
### AreaOfATriangleCalc() : Calculate area of triangle
```cpp
double AreaOfATriangleCalc(double a, double high) {
	return a * high / 2;
}
```

<a id="AreaOfATrapezoidCalc"></a>
### AreaOfATrapezoidCalc() : Calculate area of trapezoid
```cpp
double AreaOfATrapezoidCalc(double a, double b, double high) {
	return (a + b) * high / 2;
}
```

<a id="AreaOfAParallelogramCalc"></a>
### AreaOfAParallelogramCalc() : Calculate area of parallelogram
```cpp
double AreaOfAParallelogramCalc(double a, double high) {
	return a * high;
}
```

<a id="AdditionCalc"></a>
### AdditionCalc() : Addition operation
```cpp
double AdditionCalc(double a, double b) {
	return a + b;
}
```

<a id="SubtractionCalc"></a>
### SubtractionCalc() : Subtraction operation
```cpp
double SubtractionCalc(double a, double b) {
	return a - b;
}
```

<a id="MultiplicationCalc"></a>
### MultiplicationCalc() : Multiplication operation
```cpp
double MultiplicationCalc(double a, double b) {
	return a * b;
}
```

<a id="DivisionCalc"></a>
### DivisionCalc() : Division operation
```cpp
double DivisionCalc(double a, double b) {
	return a / b;
}
```

<a id="ModularArithmeticCalc"></a>
### ModularArithmeticCalc() : Modular arithmetic operation
```cpp
double ModularArithmeticCalc(int a, int b) {
	return a % b;
}
```

<a id="NPICalc"></a>
### NPICalc() : Calculate N multiply PI
```cpp
double NPICalc(double N, double PI) {
	return N * PI;
}
```

Tip:The interaction part is written by AI!
