#include <stdio.h>
#include <string.h>
void add(char a[],char b[]);
int main()
{
	int T;
	char a[1002],b[1002];
	scanf("%d",&T);
	int index=1;
	int sum=0;	
	while(T--)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		scanf("%s",a);
		scanf("%s",b);

		//printf("%s\n%s\n",a,b);
		printf("Case %d:\n",index++);
		
		printf("%s + %s = ",a,b);
		add(a,b);
		if(T>=1)
		{
			printf("\n\n");
		}
		else
		{
			printf("\n");
		}
	}
	return 0;
}
void add(char a[],char b[])
{
	char c[1002];
	memset(c,0,sizeof(c));
	int len_a=strlen(a);
	int len_b=strlen(b);
//	printf("len_a=%d len_b=%d",len_a,len_b);
	int arra=0;
	int index=0;
	while(len_a&&len_b)
	{
		c[index]='0'+a[len_a-1]-'0'+b[len_b-1]-'0'+arra;
		if((c[index]-'0')>=10)
		{
			arra=1;
			c[index]='0'+(c[index]-'0')%10;	
		}
		else
		{
			arra=0;
		}
		//printf("c[]=%d arra=%d\n",c[index]-'0',arra);
		len_a--;
		len_b--;
		index++;
	}
	if(len_a)
	{   int i;
		for(i=len_a-1;i>=0;i--)
		{
			c[index]='0'+a[i]-'0'+arra;
			if((c[index]-'0')>=10)
			{
			   arra=1;
			   c[index]='0'+(c[index]-'0')%10;	   
			}
			else
			{
				arra=0;
			}
			index++;
		}
	}
	if(len_b)
	{   int j;
		for(j=len_b-1;j>=0;j--)
		{
			c[index]='0'+b[j]-'0'+arra;
			if((c[index]-'0')>=10)
			{
				arra=1;
				c[index]='0'+(c[index]-'0')%10;
			}
			else
			{
				arra=0;
			}
			index++;
		}
	}
	if(arra)
	{
		c[index++]='0'+arra;
	}
	char tmp;
	int k;
	for(k=index-1;k>=0;k--)
	{
	//	tmp=c[k-1];
	//	c[k-1]=c[index-k];
	//	c[index-k]=tmp;
	    printf("%c",c[k]);
	}
}
