#include<stdio.h>
#include<algorithm>
using namespace std;
#define gc() getchar_unlocked()
#define pc(s) putchar_unlocked(s)
inline unsigned long long int fastIO()
{
	unsigned long long int val=0;
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

int main()
{
	int t,n,i,f;
	unsigned long long int m,a[8];
	scanf("%d",&t);
	while(t--)
	{
		f=0;
		scanf("%d",&n);
		m=fastIO();
		for(i=0;i<n;i++)
			a[i]=fastIO();
		sort(a,a+n);
		for(i=n-1;i>-1;i--)
		{
			if(m<=a[i])
			{
				f=1;
				break;
			}
			m-=a[i];
		}
		if(f==1)
			pc(n-i+48);
		else
		{
			pc('-');
			pc('1');
		}
		pc('\n');
	}
	return 0;
}
