#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int num,n;
    scanf("%d%n",&num,&n);
    int temp=num;
    int sum=0;
    while(num>0){
    int r=num%10;
    int mul=1;
    for(int i=1;i<=n;i++){
        mul=mul*r;
    }
        sum=sum+mul;
        num=num/10;
        
    }
    if(sum==temp){
    printf("true");
    }
    else{
        printf("false");
}

    return 0;
}
