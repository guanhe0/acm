#include <stdio.h>
#include <string.h>
int add(char a[],char b[]);
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

		#printf("%s\n%s\n",a,b);
		printf("Case %d:\n",index++);
		sum=add(a,b);
		printf("%s + %s = %d\n\n",a,b,sum);
	}
	return 0;
}
int add(char a[],char b[])
{
	char c[1002];
	memset(c,0,sizeof(c));
	int len-a=strlen(a);
	int len-b=strlen(b);
	int arra=0;
	int index=0;
	while(len-a&&len-b)
	{
		c[index]='0'+a[len-a-1]-'0'+b[len-b-1]-'0';
		if(c[index]>'1)
		len-a--;
		len-b--;
	}
	return 0;
}
