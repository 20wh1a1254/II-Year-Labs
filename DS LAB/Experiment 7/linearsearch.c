#include <stdio.h>
int linear_search(int a[],int key,int n);
int main()
{
    int i,n,pos,key;
    int a[10];
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
	scanf("%d",&a[i]);
    }
    printf("enter the value of key to be searched:");
    scanf("%d",&key);
    pos = linear_search(a,key,n);
    if(pos>=0)
    {
	printf("element is found at %d position",pos);
    }
    else
	printf("element not found");
    return 0;
}
int linear_search(int a[],int key,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
	{
	    return i;
	}
    }
    return -1;
}
