#include<stdio.h>
#include<conio.h>
#include<math.h>
int gcd(int m,int n)
{
if(n==0)return m;
if(m<n)return gcd(n,m);
return gcd(m,m%n);
}
void main()
{
 int m,n,res;
 printf("Enter value of m & n:\n");
 scanf("%d %d",&m,&n);
 res=gcd(m,n);
 printf("gcd(%d,%d)=%d\n",m,n,res);
 getch();
 }
