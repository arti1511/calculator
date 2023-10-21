#include<stdio.h>
// programm for addition
void addition(){
    int a,b,sum;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    sum=a+b;
    printf("%d",sum);
    
}
void subtraction(){
    int a,b,sub;
    printf("enter the two number\n");
    scanf("%d%d",&a,&b);
    sub = a-b;
    printf("%d",sub);

}
void multiplication(){
    
    int a,b,mul;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    mul =a*b;
    printf("%d",mul);
}

    
   
    
    void divide(){
        float num1,num2,divide;
        printf("enter the first number");
        printf("enter the second number");
    }

int main(){
   
// int n;
//     printf("-------------------------------------CALCULATOR----------------------------------\n");
//     printf("ENTER 1: FOR NORMAL CALCULATOR\n");
//     printf("ENTER 2: FOR SIMPLE SCIENTIFIC CALCULATOR\n");
//     printf("ENTER 3: FOR ADVANCE SCIENTIFIC CALCULATOR\n");
//     printf("enter the number according to calculator preference\n");
//     scanf("%d",&n);
// addition();
// subtraction();
// multiplication();
divide();
    return 0;

    }
