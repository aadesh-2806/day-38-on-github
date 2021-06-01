#include<stdio.h>
#include<math.h>

void main()
{	
	int n,i,t,r,c;
	
	printf("hello\nenter value=");
	scanf("%d",&n);
	 
	i=1;c=1;
	t=0;
	r=0;
	while(c<=n)
	{
		t=t+i;
		r++;
		i+=r;
		c++;
	}
	printf("%d",t);
	getch();
}
