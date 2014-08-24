#include<stdio.h>

int main()
{
	int t,k,i,j,p,edited[100000],binary[50];
	long int pow2[17],n,rn;
	pow2[0]=1;
	for(i=1;i<17;i++)
		pow2[i]=pow2[i-1]<<1;
	char s[100000],newStr[100000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %s",&k,s);
		for(i=1;i<pow2[k];i++)
			edited[i]=0;
		edited[i-1]=1;
		newStr[0]=s[0];
		newStr[pow2[k]-1]=s[pow2[k]-1];
		for(i=1;i<pow2[k];i++)
		{
			if(edited[i]==0)
			{
				n=i;
				j=0;
				while(n>0)
				{
					binary[j++]=n%2;
					n/=2;
				}
				rn=0;
				for(p=0;p<j;p++)
				{
					rn+=pow2[k-p-1]*binary[p];
				}
				
				newStr[rn]=s[i];
				newStr[i]=s[rn];
				edited[i]=edited[rn]=1;
			}
		}
		newStr[pow2[k]]='\0';
		printf("%s\n",newStr);
	}
	return 0;
}
