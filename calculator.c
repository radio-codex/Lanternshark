//calculator time
#include <stdio.h>
#include <math.h>
int main(){
    float a=0.0f;
    float b=0.0f;
    char c='\0';
    float r=0.0f;
printf("Enter First number: ");
scanf("%f",&a);
printf("Enter Second number: ");
scanf("%f",&b);

printf("Choose operation (+ - / * ^): ");
scanf(" %c",&c);
switch(c){

case '+':
r=a+b;
break;

case '-':
r=a-b;
break;

case '/':
r=a/b;
break;

case '*':
r=a*b;
break;

case '^':
r=pow(a,b);
break;

default:
printf("Please select a valid operation");
}

printf("%20.2f",r);

return 0; 
}