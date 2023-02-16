#include<stdio.h>
void m_sort(int x[],int a[],int m1,int b[],int m2);
void show(int x[],int n)
{
	if(n<2)return;
	int m1=n/2;
	int m2=n-m1;
	int a[m1];
	int b[m2];
	 for(int i=0;i<m1;i++)
		 a[i]=x[i];
	for(int i=0;i<m2;i++)
		 b[i]=x[m1+i];
	 show(a,m1);
	 show(b,m2);
	m_sort(x,a,m1,b,m2);
}
void m_sort(int x[],int a[],int m1,int b[],int m2)
{
int i,j,k;
for(i=0,j=0,k=0;k<m1+m2;)
 { 
	if(m1==i)
	x[k++]=b[j++];
	else if(m2==j)
	x[k++]=a[i++];
	else if(a[i]<b[j])
	x[k++]=a[i++];
	else
	x[k++]=b[j++];
 }	
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
scanf("%d",&x[i]);
}
show(x,n);
for(int i=0;i<n;i++)
	printf("%d\t",x[i]);
}