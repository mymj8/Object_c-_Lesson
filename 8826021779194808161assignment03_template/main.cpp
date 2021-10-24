#include <stdio.h>

#include "Vector3d.h"

int main() {
    Vector3d v1(0.0, 0.0, 0.0);
    Vector3d v2(0.0, 0.0, 0.0);
    Vector3d v3(0.0, 0.0, 0.0);

    
    v1.SetX(1.0);
    v2.SetY(1.0);
    v3.SetZ(1.0);
    
    
    // Problem a
    printf("(a): v1.getX=%.2lf, v2.getY=%.2lf, v3.getZ=%.2lf\n", v1.GetX(), v2.GetY(), v3.GetZ());
    printf("==================================================\n");
    
    // Problem b
    printf("(b): addTest1: (%lf, %lf, %lf)\n", v1.Add(5).GetX(), v1.Add(5).GetY(), v1.Add(5).GetZ());
    printf("(b): addTest2: (%lf, %lf, %lf)\n", v1.Add(v2).GetX(), v1.Add(v2).GetY(), v1.Add(v2).GetZ());
    printf("\n");
    
    printf("(b): subTest1: (%lf, %lf, %lf)\n", v1.Sub(5).GetX(), v1.Sub(5).GetY(), v1.Sub(5).GetZ());
    printf("(b): subTest2: (%lf, %lf, %lf)\n", v1.Sub(v2).GetX(), v1.Sub(v2).GetY(), v1.Sub(v2).GetZ());
    printf("\n");
    
    printf("(b): mulTest1: (%lf, %lf, %lf)\n", v1.Mul(5).GetX(), v1.Mul(5).GetY(), v1.Mul(5).GetZ());
    printf("(b): mulTest2: (%lf, %lf, %lf)\n", v1.Mul(v2).GetX(), v1.Mul(v2).GetY(), v1.Mul(v2).GetZ());
    printf("\n");
    
    printf("(b): divTest1: (%lf, %lf, %lf)\n", v1.Div(5).GetX(), v1.Div(5).GetY(), v1.Div(5).GetZ());
    printf("(b): divTest2: (%lf, %lf, %lf)\n", v1.Div(v2).GetX(), v1.Div(v2).GetY(), v1.Div(v2).GetZ());
    printf("==================================================\n");

    
    // Problem c
    printf("(c): Sum = %.2lf\n", v1.Sum());
    printf("==================================================\n");

    // Problem d
    printf("(d): length of v1 = %.2lf\n", v1.Length());
    printf("(d): distance with v1&v2: %lf\n", v1.Distance(v2));
    printf("(d): inner with v1&v2: %.2lf\n", v1.Inner(v2));
    printf("(d): cross with v1&v2: (%lf, %lf, %lf)\n", v1.Cross(v2).GetX(), v1.Cross(v2).GetY(), v1.Cross(v2).GetZ());
    printf("(d): angle of v1&v2: %lf\n", v1.Angle(v2));
    printf("==================================================\n");
}