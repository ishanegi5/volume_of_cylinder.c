#include<stdio.h>
#define PI 3.14159
float vol_cy(int r,int h)
{ float vol=PI*r*r*h;
    return vol;
}
int main()
{ float radius,height;
  printf("Enter radius: ");
  scanf("%f",&radius);
  printf("Enter height: ");
  scanf("%f",&height);
  float volume=vol_cy(radius,height);
printf("volume= %.3f",volume);
printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
    return 0;
}
