#include<stdio.h>
void msort(int x[],int a[],int m ,int b[],int);
void show(int x[],int n)
{
	if(n<2)return;
	int i;
	 int m=n/2;
	 int m2=n-m;
	 int a[m],b[m2];
	for(i=0;i<m;i++)
		a[i]=x[i];
	for(i=0;i<m2;i++)
		b[i]=x[m+i];
	show(a,m);
	show(b,m2);
	msort(x,a,m,b,m2);
}
void msort(int x[],int a[],int m,int b[],int m2)

{
int i,j,k;
 for(i=0,j=0,k=0; k<m+m2;)
 {
	 if(m==i)
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
	int x[]={50,29,35,42,15,41,75,21};
	int n=8,i;
	show(x,n);
	for(i=0;i<n;i++)
		printf("%d\t",x[i]);
	
}