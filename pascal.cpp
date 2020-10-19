#include <stdio.h>
int fact(int i)
{
int  f=1;
for (int n=1;n<=i;n++)
f*=n;
return f;
}
//nCr=n!/(r!*(n-r)!)
int nCr(int n,int r)
{

if (r>n)
printf("Invalid format");
else
{
int x=fact(r)*fact(n-r);
int y=fact(n)/x;
printf("%d",y);	
return y;
}
}
main()
{int n,r,s,y;
 printf("enter the no. of row u want to enter");
 scanf("%d",&r);
 for(n=0;n<=r;n++)
    {for(s=1;s<=r-n;s++)
     printf(" ");
     for(s=0;s<=n;s++)
       {y=nCr(n,s);
        printf(" ");
	   }
	   printf("\n");
    }
}
