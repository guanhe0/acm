#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define MAXLEN 16
int main()
{
	int N;
	while(1)
	{
		scanf("%d",&N);
		if(N==0)break;
		char **sp=NULL;
		int *dp=NULL;
		sp=(char **)malloc(N*sizeof(char *));
		dp=(int *)malloc(N*sizeof(int));

		int i;
		for(i=0; i < N;i++)
		{
			sp[i]=(char*)malloc(MAXLEN*sizeof(char));
		}
		i=0;
		int j=N;
		while(j--)
		{
			scanf("%s",sp[i]);
			dp[i]=0;
			i++;
		}
		
		for(i=0;i<N;i++)
		{
			for(j=0; j<=i;j++)
			{
				if(strcmp(sp[i],sp[j])==0)
				{
					dp[j]++;
					break;
				}
			}
		}
		int bollen_max=0;
		for(i=0;i<N;i++)
		{
			if(dp[i]>bollen_max)
			{
				bollen_max=dp[i];
				j=i;
			}
		}
		printf("%s\n",sp[j]);
	}
	return 0;
}
