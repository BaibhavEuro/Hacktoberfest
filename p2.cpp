#include<stdio.h>
main()
{ int a[25],i,t=0,x;
  for(i=0;i<=24;i++)
     {printf("enter a no.");
     scanf("%d",&a[i]);
	 }
 printf("enter the no. to searched");
 scanf("%d",&x);
 for(i=0;i<=24;i++)
    {if (x==a[i])
      t=t+1;
	}
	printf("\n%d no of time %d is repeated",t,x);
 
}
