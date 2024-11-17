/*David is studying trigonometry and wants to calculate the sine, cosine, and tangent values for a given angle in degrees.



Write a program to assist David in this task. The program should take an input angle in degrees, convert it to radians, and then output the sine, cosine, and tangent values for that angle using the sin(), cos(), and tan() standard library functions.



Formula: Radians = angle * (M_PI / 180.0) where M_PI is the constant value of pi defined in the math library.

Input format :
The input consists of an integer N representing the angle in degrees.

Output format :
After converting the input to radians,



The first line prints a double value S, which is the sine value in the format "Sine of N is S".

The second line prints a double value C, which is the cosine value in the format "Cosine of N is C".

The third line prints a double value T, which is the tangent value in the format "Tangent of N is T".



All three values are rounded to two decimal places.
*/


#include <stdio.h>
#include <math.h>

int main() {
    int angle;
    double sin_val, cos_val, tan_val;
    scanf("%d", &angle);

    double radians = angle * (M_PI / 180.0);
    
    sin_val = sin(radians);
    cos_val = cos(radians);
    tan_val = tan(radians);
    printf("Sine of %d is %.2lf\n", angle, sin_val);
    printf("Cosine of %d is %.2lf\n", angle, cos_val);
    printf("Tangent of %d is %.2lf\n", angle, tan_val);
    return 0;
}
