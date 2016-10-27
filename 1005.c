#include <stdio.h>

int value(int A,int B,int n);
int main()
{
	int A,B,n;
	while(1)
	{
		scanf("%d%d%d",&A,&B,&n);
		if(A==0&&B==0&&n==0)
		{
			break;
		}
		else
		{
			int result=value(A,B,n);
			printf("%d\n",result);
		}
	}
	return 0;
}
int value(int A,int B,int n)
{
	if(n==1||n==2)
	{
		return 1;
	}
	else
	{
		return (A*value(A,B,n-1)+B*value(A,B,n-2))%7;
	}
}
