#include<stdio.h>


int odd1(int n)
{
       if(n==1)
       {
          return 1;
       }
       else
       {
        return odd1(n-2)+n;
       }
}


int odd2(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return odd2(n-2)+n;
    }
}



int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	while(n>=1)
    {
	  printf("sumodd1(%d)=%d\n",n,odd1(n*2-1));
	  printf("sumodd2(%d)=%d\n",n,odd2(n));

	  printf("Enter n:");
	  scanf("%d",&n);
    }
}
