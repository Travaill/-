#include<stdio.h>
	double a[1000000];
	double b[1000000];
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%lf",&b[i]);
	}
	for(j=0;j<n;j++)
	{
		b[j]=a[j];
	}
	
}
