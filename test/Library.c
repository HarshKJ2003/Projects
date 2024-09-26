#include <stdio.h>
int main()
{
  printf("Welcome to Library \nPress 1 for student access and 2 for admin access:");
  int a,book=100,issued,roll,d,returned,b,pw,fee;
  scanf("%d",&a);
  if (a==1) {
    printf("Enter roll number:");
    scanf("%d",&roll);
    printf("Enter number of books issued:");
    scanf("%d",&issued);
    book=book-issued;
    printf("Book successfully issued to roll no.%d \nNote that 10 rupee fee will be added for each day above 15 days. \nThank You",roll);
  } else {
    printf("Enter password:");
    scanf("%d",&pw);
    if (pw==12345) {
          printf("Press 1 to update book count and 2 for fee calculation and 3 to view book count:");
          scanf("%d",&b);
          if (b==1) {
            printf("Enter number of book(s) returned:");
            scanf("%d",&returned);
            book=book+returned;
          } else if (b==2) {
            printf("Enter number of days:");
            scanf("%d",&d);
            fee=(d/2)*(20+(d-1)*10);
            printf("Fee is %d",fee);
          } else {
            printf("Book count is %d",book);
          }
    } else {
      printf("Wrong password.");
    }
  }
}
