#include <stdio.h>
int main()
{
  printf("Enter first number:");
  int a;
  scanf("%d",&a);
  printf("Enter second number:");
  int b;
  scanf("%d",&b);
  printf(" 1.Sum \n 2.Difference \n 3.Multiply \n 4.Division \n 5.Remainder \n Choose operation by entering number: ");
  int c;
  scanf("%d",&c);
  int d;
  if (c==1) {
    d=a+b;
    printf("Sum is %d",d);
  } else if (c==2) {
    d=a-b;
    printf("Difference is %d",d);
  } else if (c==3) {
    d=a*b;
    printf("Product is %d",d);
  } else if (c==4) {
    d=a/b;
    printf("Quotient is %d",d);
  } else if (c==5) {
    d=a%b;
    printf("Remainder is %d",d);
  } else {
    printf("Invalid input");
  }

}
