#include <stdio.h>
#define PI 3.1415
void main() {
    float area, radius, circumf;
    printf("Enter radius of cirle");
    scanf("%f", &radius);

    area = radius * radius * PI;
    circumf = 2 * PI * radius;
    printf("\nArea of the circle = %f", area);
    printf("\nCircumference of the circle = %f", circumf);

}