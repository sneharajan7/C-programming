#include<stdio.h>
#define CAP 100
int main()
{
	int arr[CAP] 
        int n,i,j,sum,res;
        
        scanf("%d",&n)
        for(i=0;i<n;i++)
        {
          scanf("%d,arr[i]);
        }
        
        printf("sum = ");
        scanf("%d",res);

        /*if(sum = = 7)
        {
        printf("Sum found between indexes %d and %d",ind,indl);
        }
        else
        {
        printf("No subarray found");*/
        
        for(i=0;i<n;i++)
        {
        for(j=i; sum =0;j<n;j++)
        {
           sum += a[j];
           if(sum == res)
           {
            flag = 1;
            break;
           }
         }
         if(flag==1)
        {
         printf("Sum found between indexes %d and %d",i,j);
        }
        else
        {
        printf("no subarray found");
        }
       }  
       }      
