#include<stdio.h>
int main()
{
    int i,n,sp,ep;
    scanf("%d %d %d",&n,&sp,&ep);
    for(i=sp;i<=ep;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}