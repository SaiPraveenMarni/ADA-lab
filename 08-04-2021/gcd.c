#include<stdio.h>
#include<string.h>
#include<ctype.h>
int gcd(int x,int y);
int main()
{
    int x,y;
    printf("Enter The First Number \n");
    scanf("%d",&x);
    printf("Enter the Second Number\n");
    scanf("%d",&y);
    int ans=gcd(x,y);
    printf("GCD OF %d AND %d is %d",x,y,ans);
}
int gcd(int x,int y)
{
    int rem,temp;
    if(x>y)
    {
        rem=x%y;
    }
    else
    {
        temp=x;
        x=y;
        y=temp;
        rem=x%y;
    }
    if(rem==0)
    {
        return y;
    }
    else
    {

        while(rem!=0)
        {
            x=y;
            y=rem;
            rem=x%y;
        }
        return y;
    }

}

