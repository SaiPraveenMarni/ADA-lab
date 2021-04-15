#include<stdio.h>
#include<stdlib.h>
int gcd_rec(int m, int n){
  if(n==0)
  return m;
  if(m<n)
  return gcd_rec(n,m);
  return gcd_rec(n,m%n);
}
int gcd_iterative(int m, int n){
  int r;
  while(n!=0){
  r=m%n;
  m=n;
  n=r;
  }
  return m;
}
int main(){
  int res;
  printf("Enter two numbers to find gcd::\n");
  int m,n;
  printf("Enter the value of m:\n");
  scanf("%d",&m);
  printf("Enter the value of n:\n");
  scanf("%d",&n);
  int ch;
  printf("Enter the choice::\n1.recursive\n2.Iteration\n");
  scanf("%d",&ch);
  switch(ch){
    case 1: res=gcd_rec(m,n);
    printf("GCD is : %d",res);
    break;
    case 2: res= gcd_iterative(m,n);
    printf("GCD is : %d",res);
    break;
    case 3: exit(0);
  }
}
