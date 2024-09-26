#include <stdio.h>
int main()
{
 printf("Perimeter or area of circle (1 for area/2 for perimeter:)");
 int a;
 scanf("%d",&a);
 if (a==1) {
   printf("Enter radius of circle:");
   int r;
   scanf("%d",&r);
   printf("Area of circle is %f",3.14*r*r);
 } else {
   printf("Enter radius of circle:");
   int r;
   scanf("%d",&r);
   printf("Perimeter of circle is %f",3.14*r*2);
 }
}
