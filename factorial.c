#include<stdio.h>

int main (){
    int n,x,sum=1;
    printf("input the value : ");
    scanf("%i",&n);
    for(x=1;x<=n;x++){
            sum=sum*x;
    }
    printf("The factorial of number");
    printf("%i",sum=sum);

    return 0;
}
