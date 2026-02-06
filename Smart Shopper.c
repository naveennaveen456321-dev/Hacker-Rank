#include <stdio.h>
int main() 
{
    int cost1,qua1,cost2,qua2,cost3,qua3,bud;
    scanf("%d%d%d%d%d%d%d",&cost1,&qua1,&cost2,&qua2,&cost3,&qua3,&bud);
    int a,b,c;
    float d;
    a=cost1*qua1;
    b=cost2*qua2;
    c=cost3*qua3;
    d=a+b+c;
    int tax;
    tax=d*0.10;
    float tottax=tax+d;
    if(bud>=tottax)
    {
        printf("Total (Before Tax): %.2f\n",d);
        printf("Total (After Tax): %.2f\n",tottax);
        printf("Within Budget\n");     
    }
    else
    {
        printf("Total (Before Tax): %.2f\n",d);
        printf("Total (After Tax): %.2f\n",tottax);
        printf("Over Budget");
    }
    return 0;
