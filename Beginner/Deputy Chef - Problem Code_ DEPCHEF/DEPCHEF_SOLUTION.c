#include<stdio.h>
int main(void)
{
	int t,n,i,k,c,max;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		float a[n];
		int ar[n];
		for(i=0;i<n;i++)
		scanf("%f",&a[i]);
		for(i=0;i<n;i++)
		{
			c=0;
			for(k=0;k<i;k++)
			{
				if(a[k]%a[i]==0)
				c+=1;
			}
			ar[i]=c;
		}
		for(i=0;i<n;i++)
		{
			if(i==0)
			max=ar[0];
			else
			if(ar[i]>max)
			max=ar[i];
		}
		
		printf("%d",max);
		
	}
}
