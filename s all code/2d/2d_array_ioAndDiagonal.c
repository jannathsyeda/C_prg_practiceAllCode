#include<stdio.h>
int main(){
    int row, col;
    printf("Enter how many rows & column: ");
    scanf("%d %d", &row, &col);
    int arr[10][10];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j] );
        }
    }
    printf("\nOutput:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", arr[i][j] );
        }
        printf("\n");
    }

     printf("\nDiagonaly:\n");
     int sum = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i == j){
                sum+= arr[i][j];
            }
        }
    }
    printf("Sum of Diagonal is: %d\n",sum );

}
