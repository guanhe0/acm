#include <stdio.h>

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
			int fn_1=1,fn_2=1;
			int i=3;
			int fn=0;
			if(n==1|n==2)
			{
				printf("%d\n",1);
			}
			else
			{
				while(i<=n)
				{
					fn=(A*fn_1+B*fn_2)%7;
					fn_2=fn_1;
					fn_1=fn;
					i++;
				}
				printf("%d\n",fn);
			}
		}
	}
	return 0;
}
