#include <stdio.h>
#define MAX_RAND 7
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
			int i=2;
			int fn[MAX_RAND-1];
			fn[0]=fn_1;
			fn[1]=fn_2;
			while(i<MAX_RAND)
			{
				fn[i]=(A*fn_1+B*fn_2)%MAX_RAND;
				fn_2=fn_1;
				fn_1=fn[i];
				i++;
			}
			printf("%d\n",fn[((n-1)%(MAX_RAND-1))]);
		}
	}
	return 0;
}
