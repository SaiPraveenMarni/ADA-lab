#include<stdio.h>
#include<math.h>
#include<time.h>
void swaap(int *x,int *y);
void sort(int a[],int n);
int main()
{
    int n;
    printf("Enter the Number of elements of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    clock_t t;
    t=clock();
    sort(a,n);
    t=clock() - t;
    double time_taken=((double)t)/CLOCKS_PER_SEC;

    printf("Selection sort took %f seconds to execute on In \n",time_taken);
    return 0;
}
void swap (int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}
void sort(int a[],int n)
{
    int min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap(&a[min],&a[i]);
    }
    printf("Final Sorted Order Is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");

}
