#include <stdio.h>

int main()
{
    int num,flag=0,m=0,i;
    printf("enter the number to check");
    scanf("%d",&num);
    m=num/2;
    for(i=2;i<=m;i++)
    {
        if(num%i==0)
        {
                printf("not prime");
                flag=1;
                break;
        }
    }
    if (flag==0)
        printf("prime");
    return 0;
}
