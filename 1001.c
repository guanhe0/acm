#include <stdio.h>

int main()
{
	int n,sum=0;
	while(scanf("%d",&n)!=EOF)
	{
		sum=((1+n)*n)/2;
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}
