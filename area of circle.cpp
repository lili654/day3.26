#include <stdio.h>
#include <math.h>
#define PI atan(1.0)*4

int main()
{
    int r;
    
    scanf("%d",&r);
    double s;
    s=PI*r*r;
    printf("%.7f\n",s);
    return 0;
}
