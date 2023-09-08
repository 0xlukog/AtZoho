#include<stdio.h>
#define N 100
void add(int (*a)[N],int (*b)[N],int row, int col){
for(int i=0;i<row;i++){

  for(int j=0;j<col;j++){
    int t;
    t= a[i][j]-b[i][j];
    a[i][j] = t;
  }

}
}

void scan2dArray(int (*arr)[N], int row, int col)
{
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("Enter %d %d value : ",i,j);
            scanf("%d", &(*(arr + i))[j]);
        }
    }
}
void print2dArray(int (*arr)[N],int row,int col){
    for(int i=0;i<row;i++){
    
      for(int j=0;j<col;j++){
        printf("%d ",arr[i][j]);
      }
      printf("\n");
    
    }
}
void main(){
int a[N][N];
int b[N][N];

int row,col;


printf("Enter Row and Col : ");
scanf("%d %d",&row,&col);

scan2dArray(a,row,col);
scan2dArray(b,row,col);

add(a,b,row,col);

print2dArray(a,row,col);

}