#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 10
int a[MAX];
int flag;
int binary(int a[],int low,int high);
int num;
int main()
{
    int n;
    printf("Enter the Number of elements of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array In Sorted order\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element You Want To Search\n");
    scanf("%d",&num);
    int low=0;
    int high=n-1;
    int ans=binary(a,low,high);
    if(ans==0)
    {
        printf("Element Not Found\n");
    }

}
int binary(int a[],int low,int high)
{

    int mid=(low+high)/(2);
    if(a[mid]==num)
    {
        flag=1;
        printf("First Occurance of Element Found At Positon %d",mid);
        return 1;
    }
    else if(num<a[mid])
    {
        high=mid-1;
        binary(a,low,high);
    }
    else if(num>a[mid])
    {
        low=mid+1;
        binary(a,low,high);
    }
    else
    {
        return 0;
    }
}




