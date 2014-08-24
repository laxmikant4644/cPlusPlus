#include<stdio.h>

#define gc() getchar()
inline long int fastIO()
{
	long int val=0;
	char ch;
	ch=gc();
	while(ch==' '||ch=='\n'||ch=='\r')
		ch=gc();
	while(ch!=' '&&ch!='\n'&&ch!='\r')
	{
		val=val*10+ch-48;
		ch=gc();
	}
	return val;
}

long int gcd(long int a,long int b)
{
	return b?gcd(b,a%b):a;
}

int main()
{
	int t,n,i;
	long int ans,a,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		ans=fastIO();
		for(i=1;i<n;i++)
		{
			a=fastIO();
			while(a>0)
			{
				temp=a;
				a=ans%a;
				ans=temp;
			}
		}	//ans=gcd(fastIO(),ans);
		printf("%ld\n",ans);
	}
	return 0;
}
