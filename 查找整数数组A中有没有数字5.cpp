#include<stdio.h>

int main()
{
	int a[10000];
	int n,m=0;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(j=0;j<n;j++)
	{
		if (a[j]==5)
		m=m+1;
	}
    if(m==0) printf("NO");
	if(m>0) printf("YES %d",m);
}
