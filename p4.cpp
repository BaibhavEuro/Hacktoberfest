#include<stdio.h>
main()
{
 int a[4]={5,66,66,20};
int i=a[0],j;
for (j=0;j<4;j++)
	{if(a[i+1]<a[i])
	 i=a[i+1];
 	}
  printf("%d",i);
 }
 
