
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,x,y;
    scanf("%d", &n);
    for(int i=0; i<n; i++){

        scanf("%d%d",&x,&y);
        if(x>y){
            printf("%d %d\n",y,x);

        }
        else if (x<y || x==y){
            printf("%d %d\n", x, y);
        }
    }

    return 0;
}