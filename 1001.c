#include <stdio.h>

int main()
{
	int n,sum=0;
	while(scanf("%d",&n)!=EOF)
	{
		if((n+1)%2==0)
		{sum=((n+1)/2)*n;}
		else
		{sum=(n/2)*(n+1);}
		printf("%d\n\n",sum);
		sum=0;
	}
	return 0;
}
