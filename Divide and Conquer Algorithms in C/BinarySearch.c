/*Array should be sorted*/
#include<stdio.h>
int binsearch(int a[],int start,int end,int target)
{
    if(start<=end)
    {
       int mid=(start+end)/2;
       if(target<a[mid])
        return binsearch(a,start,mid-1,target);
       else if(target>a[mid])
        return binsearch(a,mid+1,end,target);
       else
        return mid;
       }
       return-1;
}
int main()
{
    int a[]={1,2,3,4,5};
    printf("%d",binsearch(a,0,4,4));
    return 0;
}
