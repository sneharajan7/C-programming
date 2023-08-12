#include<stdio.h>
int reverse(int);
int main()
{
 	int rev,i,r,n,temp=0, flag=0;
 	int arr[1200];
 	printf("enter the number of elements");
 	scanf("%d",&n);
 	printf("enter the array elements");
 	for(i=0;i<n;i++)
 	{
 	scanf("%d",&arr[i]);
 	}
 	
 	for(i=0;i<n;i++)
 	{
 	temp= arr[i];
 	int p = reverse(arr[i]);
 	if(p==temp)
 	{
 	flag++;
 	}
 	}
 	if(n==flag)
 	{
 	printf("palinarray");
 	}
 	else
 	{
 	printf("not palinarray");
 	}
 
}
 
 
 	int reverse(int a)
 	{
 	int r,i,rev=0;
 	while(a>0)
 	{
  	r=a%10;
  
  	rev=(rev*10)+r;
  	a=a/10;
  	}
  	return rev;
 	}
