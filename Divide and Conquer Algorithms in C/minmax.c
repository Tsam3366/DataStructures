#include<stdio.h>
struct pair
{
    int min;
    int max;
};
struct pair getminmax(int a[],int n)
{
    struct pair minmax;
    if(n==1)
    {
        minmax.min=a[n-1];
        minmax.max=a[n-1];
    }
    if(a[0]>a[1])
    {
        minmax.max=a[0];
        minmax.min=a[1];
    }
    else
    {
        minmax.min=a[0];
        minmax.max=a[1];
    }
    for(int i=2;i<n;i++)
    {
        if(a[i]>minmax.max)
        {
            minmax.max=a[i];
        }
        else if(a[i]<minmax.min)
        {
            minmax.min=a[i];
        }
    }
    return minmax;
}
int main()
{
    int arr[]={4,1,100,33,44,5,6,6};
    struct pair obj=getminmax(arr,(sizeof(arr)/sizeof(int)));
    printf("Minimum of array:%d\n",obj.min);
    printf("Maximum of array:%d",obj.max);
    return 0;
}
