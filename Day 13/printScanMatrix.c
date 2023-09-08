#include <stdio.h>

void printMatrix(int (*arr)[20], int n, int m)
{
  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < n; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
void scanMatrix(int (*arr)[20], int n, int m)
{
  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < m; j++)
    {
      int t;
      printf("Enter the a[%d][%d] element : ",i,j);
      scanf("%d",&(*(arr + i))[j]);
      printf("\n");
    }
  }
}
void main()
{   
  // int **arr = (int **) malloc(20 * sizeof(int *));

  // for(int i=0; i<20; i++)
	// {
	// 	arr[i] = (int *) malloc(20 * sizeof(int));
	// }
  int arr[20][20];
  scanMatrix(arr,3,3);
  printMatrix(arr,3,3);
}
