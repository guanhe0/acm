#include <stdio.h>
#include <malloc.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N;
		scanf("%d",&N);
		int *arra=(int *)malloc(N*sizeof(int));
		int i=0;
		while(N--)
		{
			scanf("%d",&arra[i++]);
		}
		int j;
		for(j = 0; j < i; j++)
		{
					
		}
	}
	return 0;
}
