#include<stdio.h>//&& is necessary
int main()
{
    float a,b,c,area,pre;
    scanf("%f%f%f",&a, &b, &c);
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        pre = a+b+c;
        printf("Perimetro = %.1f\n",pre);
    }
    else
    {
        area = 0.5*(a+b)*c;
        printf("Area = %.1f\n",area);
    }
    return 0;
}
