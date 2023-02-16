  #include<stdio.h>
//void showloop(int [],int );
//void delete(int [],int );
void show(int x[],int n,int i)
{
	int t;
	int l=i*2+1;
	int r=i*2+2;
	int max=i;
	
	 if(r<n)
	 {
		 if(x[l]>x[max]) max=l;
		 if(x[r]>x[max]) max=r;		 
	 }
	 else if(l<n)
	      { 
             max=l;
		  }
	 if(x[max]>x[i])
	 {
		 t=x[i];
		 x[i]=x[max];
		 x[max]=t;
		 show(x,n,max);		 
	 }	
}
void showloop(int x[],int n)
{
	int i;
	for(i=(n/2)-1;i>=0;i--)
		show(x,n,i);
}
void delete(int x[],int n)
{
	int t;
	for(int i=n-1; i>0;i--)
	{
		t=x[0];
		x[0]=x[i];
		x[i]=t;
		show(x,i,0);
	}	
}
void main()
{
	int i;
	int x[]={82,90,12,10,15,77,55,23};
	int n=8;
	showloop(x,n);
	delete(x,n);
	for(i=0;i<n;i++)
		printf("%d\t",x[i]);
}