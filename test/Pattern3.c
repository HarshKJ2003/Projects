#include <stdio.h>
int main()
{
  for (int i=9;i>0;i--) {
    if (i!=1) {
    for (int j=0;j<i;j++){
      if (i==j+5 || i==j-5) {
        printf("*");
      } else printf(" ");
      }
    } else printf("* * * * * * * * *");
    printf("\n");
  }
}
