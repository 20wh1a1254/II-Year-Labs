#include <stdio.h>
void insertion_sort(int a[],int n);
int main()
{       
    int i,n;
    int a[10];
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {       
        scanf("%d",&a[i]);
    }   
    insertion_sort(a,n);
    for(i=0;i<n;i++)
    {       
        printf("%d\t",a[i]);
    }   
    return 0;
}   
void insertion_sort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key = a[i];
	j = i-1;
	while(key<a[j] && j>=0)
	{
	    a[j+1] = a[j];
	    j = j-1;
	}
	a[j+1] = key;
    }
}
