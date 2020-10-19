#include<stdio.h>
main()
{int a[4]={3,7,4,5};
 int i,t,z;

 for(t=0;t<3;t++)
   {for (i=0;i<3-t;i++)
     {if(a[i]>a[i+1])
        {z=a[i+1];
         a[i+1]=a[i];
         a[i]=z;
		}}}
 for(i=0;i<4;i++)
  printf("%d\n",a[i]);
}
