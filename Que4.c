#include<stdio.h>
int main()
{
    int radius;
    float area;
    printf("Enter radius of circle ");
    scanf("%d",&radius);
    area=3.14159*radius*radius;
    printf("area of circle is %0.3f having the radius %d",area,radius);
    return 0;
}