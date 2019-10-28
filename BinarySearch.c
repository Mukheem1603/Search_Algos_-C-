#include<stdio.h>
#include<conio.h>
int BinSearch(int a[],int low,int high,int key)
{
	int mid,pos;
	mid=(low+high)/2;
	
while(low<=high)
	{
	
	if(a[mid]==key)
	{
		pos=mid;
	}
 	else if(key>a[mid])
	{
		BinSearch(a,mid+1,high,key);
	}
	else
	{
		BinSearch(a,low,mid-1,key);
	}
	}
	if(low>high)
	{
		pos=-1;

	}
	return pos;
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
void main()
{
	int a[100];
	int n,low=0,high,pos=-1,key,i;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	high=n-1;
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
	printf("\n");
	printf("Enter the key element:\n");
	scanf("%d",&key);
	if(key>=a[0]&&key<=a[n-1])
	{
		pos=BinSearch(a,low,high,key);
		if(pos!=-1)
		{
			printf("Position:%d\nIndex:%d\n",pos+1,pos);
		}
		else
		{
			printf("Not Found.,%d\n",pos);
		}
	}
      else
		{
			printf("Not Found!!\n");
		}
		
}
