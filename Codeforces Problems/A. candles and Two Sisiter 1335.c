#include<stdio.h>

int main()
{

int i,t,n;

scanf("%d",&t);

for(i=1;i<=t;i++)
{
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("%d\n",(n/2)-1);
    }
    else
    {
        printf("%d\n",n/2);
    }
}

    return 0;

}
