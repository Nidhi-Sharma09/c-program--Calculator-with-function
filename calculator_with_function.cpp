//to get number a and b
#include <stdio.h>
int get_num() 
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    return num;
}

//functions to perform with that number

int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int multiply(int a, int b)
{
    return a*b;
}
int divide(int a,int b)
{
    return (float)a/b;
}

//which function i want to perform takes choice

int menu(){
    int choice;
    printf("1. Add\n");
    printf("2. Sub\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Choice: ");
    scanf("%d",&choice);
    return choice;
}

//everything connected in the final int main() step

int main(){
    int a= get_num();
    int b= get_num();
    int choice= menu();
    if(choice==1){
        printf("%d+%d = %d",a,b,a+b);
    }
    else if(choice==2){
        printf("%d-%d = %d",a,b,a-b);
    }
    else if(choice==3){
        printf("%d*%d = %d",a,b,a*b);
    }
    else if(choice==4){
        printf("%d/%d = %.2f",a,b,(float)a/b);
    }
    else{
        printf("Invalid Choice");
    }
    return 0;
}
