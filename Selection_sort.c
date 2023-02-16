#include<stdio.h>

void display(int x[],int n);
void s_sort(int x[],int n);

void s_sort(int x[],int n)
{
	int i,j,min,t;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i;j<n;j++)
		{
			if(x[min]>x[j])
				min=j;
		}
		if(i!=min)
		{
			t=x[i];
			x[i]=x[min];
			x[min]=t;
			display(x , n);
		}
   }
}
void display(int x[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d\t",x[i]);
		printf("\n");
}
void main()
{   
	int n;
printf("How many element you want to sort\n");
scanf("%d",&n);
int x[n];
for(int i=0;i<n;i++)
{
printf("Please enter the %d element = ",i+1);
//int x[]={56,29,35,42,15,41,75,21};
scanf("%d",&x[i]);
}
	s_sort(x,n);
	display(x,n);
}
