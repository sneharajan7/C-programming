#include<stdio.h>

int main()
{
  int *ptr;
  int arr[2] = {1,2};
  
  ptr = &arr[0]; //Base address of an array or head of the array
  
  //printf("\n%d",arr[0]);
  //scanf("\n%d",&arr[0]);
  //scanf("\n%d",arr+0);
  printf("\n%d",*(arr+0));
  printf("\n address of arr[o] =%u",arr);
  printf("\n address of arr[o] =%u",(arr+1));
}
