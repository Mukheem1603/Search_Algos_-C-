#include<stdio.h>
int f[50],fibn,fibn1,fibn2;
int min(int a, int b)
{
    if(a>=b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int fibn12(int fibn)
{
    int i=0;
    while(f[i]<fibn)
    {
        i++;
    }
    fibn1 = f[i-1];
    fibn2 = f[i-2];
}
void sort(int a[],int n)
{
    int temp=0,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

            }
        }
    }
}
int fibonacci(int n)
{
    int i, x=0,  y =1, sum=0;
    for(i=0;i<2*n;i=i+2)
    {
        f[i] = x;
        f[i+1] = y;
        sum = x+y;
        y = y+sum;
        x = sum;
    }
}
int fib_search(int a[],int key, int n)
{
    int i, offset = 0, pos=-1;
    for(i=0;i<n;i++)
    {
        i = min(offset+fibn2,n);
        if(a[i]<key)
        {
            offset = offset+fibn2;
            fibn = fibn2;
            fibn12(fibn);
        }
        else if(a[i]>key)
        {
            fibn = fibn2;
            fibn12(fibn);
        }
        else
        {
            pos = i;
            break;
        }
        return pos;
    }
}
void main()
{
    int a[20],i,j=0,n,key,pos;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("your sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("key to be searched: ");
    scanf("%d",&key);
    fibonacci(n);
    while(f[j]<n)
    {
        j++;
    }
    fibn = f[j];
    fibn12(fibn);
    if(key>=a[0])
    {
        pos = fib_search(a,key,n);
        if(pos!=-1)
        {
            printf("key at pos: %d index: %d",pos+1,pos);
        }
        else
        {
            printf("not found\n");
        }
    }
    else
    {
    printf("not found\n");
    }
}
