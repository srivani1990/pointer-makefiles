#include "header.h"
int sort(int *a,int n)
{ 
    int i,j,temp;
     for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
           if(a[j]>a[j+1])
           {
           	temp=a[j];
           	a[j]=a[j+1];
           	a[j+1]=temp;
		   }
         }
   }
 }
