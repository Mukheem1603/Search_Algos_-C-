#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int f[50],fibn,fibn1,fibn2;
int min(int a,int b)
{
	if(a<=b)
	return a;
	else
	{
		return b;
	}
}
void sort(int a[],int n)
{
	int i,j,c;
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
void fibn12(fibn)
{
	int j;
}
void fibonacci(int n)
{
	int i,x=0,y=1,sum=0;
	for(i=0;i<2*n;i=i+2)
	{
		f[i]=x;
		f[i+1]=y;
		sum=x+y;
		x=sum;
		y=y+sum;
	}
}
int FibSearch(int a[],int n,int key)
{
	int i,offset=0,pos;
	for(i=0;i<n;i++)
	{
	
	i=min(offset+fibn2,n);
	if(a[i]<key)
	{
		fibn=fibn1;
		fibn12(fibn);
	}
	else if(a[i]>key)
	{
		offset=offset+fibn2;
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
	int a[100],n,i,j,key,pos=-1;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("The Sorted list is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("Key element:");
	scanf("%d",&key);
	fibonacci(n);
	while(f[j]<n)
	{
		j++;
	}
	fibn=f[j];
	fibn12(fibn);
	if(key>=a[0])
	{
		pos=FibSearch(a,n,key);
		if(pos!=-1)
		{
			printf("Position:%d\nIndex:%d\n",pos+1,pos);
		}
		else
		{
			printf("Not Found!!\n");
		}
	}
	else
		{
			printf("Not Found!!\n");
		}
	
	getch();
	
}
