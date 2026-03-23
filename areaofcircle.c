#include <stdio.h>
#include <math.h>
float circleArea(float rad);
int main() {
    float a = 5.0;
    printf("Area is : %f", circleArea(a));
    return 0;
}
float circleArea(float rad) {
    return 3.14 * rad * rad;
}