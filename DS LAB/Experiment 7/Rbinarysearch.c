#include <stdio.h>
int Rbinary_search(int a[],int l,int h,int key);
int main()
{
    int a[10];
    int i,pos,key,n,l,h;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value of key to be searched:");
    scanf("%d",&key);
    pos = Rbinary_search(a,0,n-1,key);
    if(pos>=0)
        printf("element is found at %d position",pos);
    else
        printf("element not found");
    return 0;
}
int Rbinary_search(int a[],int l,int h,int key)
{
    int mid;
    if(l<=h)
    {
        mid = (l+h)/2;
        if(key==a[mid])
	{
            return mid;
	}
        else if(key>a[mid])
	{
            return Rbinary_search(a,mid+1,h,key);
	}
        else
        {
            return Rbinary_search(a,l,mid-1,key);
	}
    }
    return -1;
}

