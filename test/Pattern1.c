#include <stdio.h>
int main()
{
 int i,j,k,a=5;
 for (i=1;i<=a+4;i++) {
   for (j=1;j<i;j++) {
     printf(" ");
   }

  for (k=1;k<=a;k++) {
    printf("%d",k);
  }
    printf("\n");
    a--;
}

}
