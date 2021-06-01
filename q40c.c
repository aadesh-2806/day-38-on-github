#include<stdio.h>
#include<math.h>

void main()
{	
	int n,i,c,t;
	
	printf("hello\nenter value=");
	scanf("%d",&n);
	
	i=1;
	c=1;
	t=0;
	while(c<=n)
	{
		t=t+i;
		i+=2;
		c++;
	}
	printf("%d",t);
	getch();
}
