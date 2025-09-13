#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
    float peri=0,area=0;
    printf("enter the radius r\n");
    scanf("%d\n",&r);
    peri= 2*PI*r;
    printf("the perimeter is%.2f\n",peri);
    area=PI*r*r;
    printf("the area is %.2f\n",area);
    return 0;
}

