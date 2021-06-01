#include<stdio.h>
#include<math.h>

void main()
{	
	int n,i,t,r,c;
	
	printf("hello\nenter value=");
	scanf("%d",&n);
	
	i=0;
	printf("%d ",i);
	c=1;
	t=1;
	while(c<n)
	{
		printf("%d",t);
		r=t;
		t=t+i;
		i=r;
		c++;
	}
	getch();
}
