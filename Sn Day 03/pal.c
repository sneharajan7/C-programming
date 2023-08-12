#include<stdio.h>
int reverse(int);
int main()
{
 	int rev,r,n;
 	scanf("%d",&n);
 	int p = reverse(n);
 	if(p==n)
 	{
 	printf("the number is palindrome");
 	}
 	else
 	{
 	printf("not palindrome");
 	}
 
}
 
 
 	int reverse(int n)
 	{
 	int r,rev=0;
 	while(n>0)
 	{
  	r=n%10;
  
  	rev=(rev*10)+r;
  	n=n/10;
  	}
  	return rev;
 	}
