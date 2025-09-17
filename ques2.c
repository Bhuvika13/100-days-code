#include<stdio.h>
int main()
{
    int a,b,sum,diff,product,quotient;
    printf("enter first no:");
    scanf("%d",&a);
    printf("enter second no:");
    scanf("%d",&b);
    
    sum=a+b;
    printf("sum=%d\n",sum);

    diff=a-b;
    printf("diff=%d\n",diff);
    
    product=a*b;
    printf("product=%d\n",product);

    quotient=a/b;
    printf("quotient=%d\n",quotient);
    return 0;
}