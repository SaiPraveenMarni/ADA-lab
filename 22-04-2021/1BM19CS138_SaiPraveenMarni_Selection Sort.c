#include <stdio.h>
void SelSort(int arr[],int n);
int main()
{
int arr[100], n,i;
printf("Enter number of elements:\n");
scanf("%d", &n);
printf("Enter %d Numbers:", n);
for(i = 0; i < n; i++)
scanf("%d", &arr[i]);
SelSort(arr,n);
return 0;
}
void SelSort(int arr[], int n)
{
int i, j, pos, swap;
for(i = 0; i < (n - 1); i++)
{
pos=i;
for(j = i + 1; j < n; j++)
{
if(arr[pos]>arr[j])
pos=j;
}
if(pos!= i)
{
swap=arr[i];
arr[i]=arr[pos];
arr[pos]=swap;
}
}
printf("Sorted Array:\n");
for(i = 0; i < n; i++)
printf("%d\n", arr[i]);
}
