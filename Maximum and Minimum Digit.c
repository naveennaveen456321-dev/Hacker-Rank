#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n<0)
    {
        n=-n;
    }
    if(n==0)
    {
        printf("0 0");
        return 0;
    }
    int count=0;
    int tem=n;
    int te=n;
    int d;
    
    while(tem!=0)
    {
         tem=tem/10;
        count++;
        
    }
    
    int arr[count];
    for(int i=0;i<count;i++)
    {
        int t=te;
        d=te%10;
        arr[i]=d;
        te=t/10;
    }
    int min=arr[0],max=arr[0];
    for(int i=1;i<count;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d %d",max,min);
    return 0;
}
