#include <stdio.h>



int main(){
unsigned int a =60;
unsigned int b= 13;
unsigned int c =11;
int result = 0;
int result1 = 0;
int result2 = 0;

result = a & b;
result1 = a | b;
result2 = a^b;

printf("result is %d\n ",result);
printf("result is %o\n ",result);
printf("result is %X\n ",result);

printf("result1 is %d\n ",result1);
printf("result1 is %o\n ",result1);
printf("result1 is %X\n ",result1);

printf("result2 is %d\n ",result2);
printf("result2 is %o\n ",result2);
printf("result2 is %X\n ",result2);




}


