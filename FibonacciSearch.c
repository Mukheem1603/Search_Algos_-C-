#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int f[50],fibn,fibn1,fibn2;
int min(int a,int b)
{
	if(a>=b)
	return b;
	else
	{
		return a;
	}
}
void fibn12(int fibn)
{
	int i=0;
	while(f[i]<fibn)
	{
		i++;
	}
	fibn1=f[i-1];
	fibn2=f[i-2];
}
void sort(int a[],int n)
{
int i,j,c=0;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
 c=a[i];
 a[i]=a[j];
 a[j]=c;
}
}
}
}
int fibonacci(int n)
{
	int i,x=0,y=1,sum=0;
	for(i=0;i<2*n;i=i+2)
	{
		f[i]=x;
		f[i+1]=y;
		sum=x+y;
		y=y+sum;
		x=sum;
	}
}
int FibSearch(int a[],int key,int n)
{
	int offset=0,i,pos=-1;
	for(i=0;i<n;i++)
	{
		i=min(offset+fibn2,n);
		if(a[i]<key)
		{
			offset=offset+fibn2;
			fibn=fibn1;
			fibn12(fibn);
		}
		else if(a[i]>key)
		{
			fibn=fibn1;
			fibn12(fibn);
		}
		else
		{
			pos=i;
			break;
		}
	}
	return pos;
}
void main()
{
	int a[20];
	int i,j=0,n,key,k,pos;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Key element:\n");
	scanf("%d",&key);
	sort(a,n);
	printf("The sorted list is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	fibonacci(n);
	while(f[j]<n)
	{
		j++;
	}
	fibn=f[j];
	fibn12(fibn);
	if(key>=a[0])
	{
		pos=FibSearch(a,key,n);
		if(pos!=-1)
		{
			printf("Position of the element:%d\nIts index is:%d\n",pos+1,pos);
		}
		else
		{
			printf("Element not found!!\n");
		}
	}
	else
		{
			printf("Element not found!!\n");
		}
}
