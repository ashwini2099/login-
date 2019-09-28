#include<stdio.h>
void mai(){
int n,i,j,k;
printf("enter the size");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n;j>1;j--)
{
printf(" ");
}
}
for(k=0;k<=i;k++)
{
printf("* ");
}
}
