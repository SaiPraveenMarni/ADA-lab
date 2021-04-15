#include <stdio.h>
#include<stdlib.h>
int linear(int a[],int l,int r,int key)
{
     if(r<l)
        return -1;
     if(a[l]==key)
        return l;
     if(a[r]==key)
        return r;
     return linear(a,l+1,r-1,key);
}
int binary(int a[],int first,int last,int key)
{
    if (last>=first)
    {
        int m=first+(last-first)/2;
        if(a[m]==key){;
            return m;
        }
        if(a[m]>key){
            return binary(a,first,m-1,key);
        }
        return binary(a,m+1,last,key);
    }
    return -1;
}
int main()
{
    int a[200],i,choice,key,n,res;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter values of array in ascending order\n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(;;){
        printf("\nEnter the searchkey\n");
        scanf("%d",&key);
        printf("1.Linear Search\n2.Binary Search\n3.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Linear search :- \n");
                    res=linear(a,0,n-1,key);
                    if(res!=-1){
                            printf("%d is present at location %d",key,(res+1));
                    }
                    else{
                            printf("%d is not present\n",key);
                    }
                    break;
            case 2: printf("Binary search :- \n");
                    res=binary(a,0,n-1,key);
                    if(res==-1){
                            printf("%d is not present in the list\n",key);
                    }
                    else{
                            printf("%d is found at location %d\n",key,(res+1));
                    }
                    break;
            case 3: exit(0);
            default:printf("Invalid\n");
                    break;
        }
    }
    return 0;
}
