#include<stdio.h>
int main(){
int row ,col,i ,j ,a1[10][10],t[10][10];
 printf("enter row col");
 scanf("%d %d",&row,&col);

 printf("a1 element");
 for(i=0;i<row;i++)
 {
     for(j=0;j<col;j++)
     {
         printf("a1[%d][%d]=",i,j);
         scanf("%d",&a1[i][j]);
     }
     printf("\n");
 }

 printf("a1=");
 for(i=0;i<row;i++)
 {
     for(j=0;j<col;j++)
     {
         printf("%d",a1[i][j]);

     }
     printf("\n");
 }


 for(i=0;i<row;i++)
 {
     for(j=0;j<col;j++)
     {
        t[j][i]=a1[i][j];
     }
     printf("\n");
 }

  printf("T=");

  for(i=0;i<col;i++)
 {
     for(j=0;j<row;j++)
     {
        printf("%d",t[i][j]);
     }
     printf("\n");
 }


}
