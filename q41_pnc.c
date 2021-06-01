#include<stdio.h>

void main()
{
	
	int i,a[50],s,t,n,j;
	
	n=3;
	
	j=0;
	while(j<n)
	{
		a[j]=j+1;
		j++;
	}
	
	i=1;
	while(i<=n)
	{
		j=0;			
		while(j<n-1)
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			s=0;
			while(s<n)	
			{
				printf("%d ",a[s]);
				s++;
			}
			printf("\n");
			j++;	
		}	
		i++;
	}	
	
	getch();
	
}	
