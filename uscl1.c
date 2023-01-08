#include<stdio.h>
int main()
{
    //khai bao a, b
    int a, b;
    //nhap a
    printf("nhap a:");
    scanf("%d",&a);
    //nhap b
    printf("nhap b:");
    scanf("%d",&b);
    if(a==0||b==0){//neu a=0 hoac b=0
        printf("UCLN la: %d", a+b);
    }
    while(a!=b)
    {
        if (a > b){//neu a>b
            a -= b; // a = a - b
        }else{// a<b
            b -= a;// b = b - a 
        }
    }
    //in UCLN ra man hinh
    printf("UCLN là :%d",a);
}
