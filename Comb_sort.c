#include<stdio.h>
void c_sort(int x[],int g,int n)
{
	if(g==9||g==10)
		g=11;
	if(g<1)return;
	int i,temp;
	for(i=0;i<(n-g);i++)
	{
		if(x[i]>x[i+g])
		{
			temp=x[i];
			x[i]=x[i+g];
			x[i+g]=temp;
		}		
	}
	c_sort(x,(g/1.3),n);	
}
void main()
{
	int n;
	int i;
printf("How many element you want to sort\n");
scanf("%d",&n);
int x[n];
for(i=0;i<n;i++)
{
printf("Please enter the %d element = ",i+1);
scanf("%d",&x[i]);
}
c_sort(x,n/1.3,n);
for(i=0;i<n;i++)
  printf("%d\t",x[i]);
}