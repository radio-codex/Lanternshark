#include <stdio.h>

int getmax(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int main(){

    int num1=0;
    int num2=0;
   
    printf("enter first number: ");
    scanf("%d",&num1);
    printf("enter second number: ");
    scanf("%d",&num2);
    

int o=getmax(num1,num2);
printf("The largest of the two integers is %d",o);


    return 0;
}
