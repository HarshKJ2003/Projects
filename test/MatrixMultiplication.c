#include <stdio.h>
int l,m,n,o,a,b,c;
void readmatrix(int **a);
int printmatrix(int a[b][c]);
int multiplymatrix(int a[l][m],int b[n][o]);
int main()
{
  int p,q,r,s;
  printf("Enter number of rows and columns in matrix 1:");
  scanf("%d %d",&p,&q);
  printf("Enter number of rows and columns in matrix 2:");
  scanf("%d %d",&r,&s);
  int m1[p][q];
  int m2[r][s];
  int m3[p][s];
  readmatrix(m1);
  readmatrix(m2);
  multiplymatrix(m1,m2);
  printmatrix(m3);
}
void readmatrix(int **a)
{
  for(int e=0;e<b;e++){
    for(int f=0;f<c;f++){
      printf("Enter value of [%d][%d]:",e,f);
      scanf("%d",&a[e][f]);
    }
  }
}
int printmatrix(int a[b][c])
{
  for(int e=0;e<b;e++){
    for(int f=0;f<c;f++){
      printf("%d ",a[e][f]);
    }
    printf("\n");
  }
}
int multiplymatrix(int a[l][m],int b[n][o])
{

}
