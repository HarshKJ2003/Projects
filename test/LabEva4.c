#include <stdio.h>
int main()
{
  int mat[3][3];
  int w,x;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&mat[i][j]);
    }
  }
  for(int k=0;k<3;k++){
    for(int l=k;l<3;l++){
      if(mat[k][l]==0){
        w++;
      }
    }
  }
  for(int m=0;m<3;m++){
    for(int n=m;n>=0;n--){
      if(mat[m][n]==0){
        x++;
      }
    }
  }
  if(w!=0){
    printf("Lower triangle");
  }else if(x!=0){
    printf("Upper triangle");
  }else{
    printf("None");
  }
}
