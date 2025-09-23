#include<stdio.h>
int main()
{
int m,n,i,j,k;
printf("enter the no of rows and columns of the matrix");
 scanf("%d%d",&m,&n);
 int A[m][n],B[m][n],Sum[m][n],Sub[m][n],Mul[m][n];
 printf("enter elements of matrix A");
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
 scanf("%d",&A[i][j]);
 printf("enter elements of matrix B");
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
 scanf("%d",&B[i][j]);

 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
Sum[i][j]=A[i][j]+B[i][j];

for(i=0;i<m;i++)
  for(j=0;j<n;j++)
Sub[i][j]=A[i][j]-B[i][j];

if(m==n){
for(i=0;i<m;i++){
  for(j=0;j<n;j++){
  Mul[i][j]=0;
  for(k=0;k<n;k++){
  Mul[i][j]+=A[i][k]*B[k][j];
  }}}}
   
   printf("\nMatrix Addition\n");
   for(i=0;i<m;i++){
  for(j=0;j<n;j++)
  printf("%d",Sum[i][j]);
  printf("\n");
  }
   printf("\nMatrix Substarction\n");
   for(i=0;i<m;i++){
  for(j=0;j<n;j++)
  printf("%d",Sub[i][j]);
  printf("\n");
  }
  if(m==n)
  {
   printf("\nMatrix Multiplication\n");
   for(i=0;i<m;i++){
  for(j=0;j<n;j++)
  printf("%d",Mul[i][j]);
  printf("\n");
  }}
  else
  {
  printf("matrix maultiplication not possible(not square matrices)\n");
  }
  return 0;
  }
