#include <stdio.h>
#define SIZE 1000
void scan2dArray(int (*arr)[SIZE], int row, int col)
{
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            scanf("%d", &(*(arr + i))[j]);
        }
    }
}
void print2dArray(int (*arr)[SIZE],int row,int col){
    for(int i=0;i<row;i++){
    
      for(int j=0;j<col;j++){
        printf("%d ",arr[i][j]);
      }
      printf("\n");
    
    }
}
void main()
{
    int arr[SIZE][SIZE];
    int row, col;
    printf("Enter Row Col : ");
    scanf("%d %d", &row, &col);
    scan2dArray(arr, row, col);
    print2dArray(arr,row,col);
}