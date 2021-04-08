#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 10
int a[MAX];
int n;
int i;
int num;
void search(int a[]);
int main()
{
    printf("Enter the Number Of Elements of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the serach element\n");
    scanf("%d",&num);
    search(a);
}
void search(int a[])
{
    int flag=1;
    if(a[i]==num)
    {
        flag=0;
        printf("Element Found At Position %d",(i+1));
        return;
    }
    else
    {
        i++;
        search(a);
    }
    if(flag==1)
    {
        printf("Element Not Found\n");
        return;
    }

}
