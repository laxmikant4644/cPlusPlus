#include<stdio.h>
#define gc() getchar_unlocked()
int main()
{
	int t;
	char ch;
	long long int n,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld\n",&n);
		//gc();
		ch=gc();
		while(ch!='\n'&&ch!='\r')
			ch=gc();
		printf("%lld\n",(n*(n-1))/2);
	}
	return 0;
}
