#include <stdio.h>
#define MAX 10
#define MY_NEW_LINE '\n'
#define MY_SPACE ' '



int main(void){
// int arr[MAX];
// arr[0]=10;
// arr[1]=20;
// arr[2]=30;

// for(int i =0; i<MAX;i++){
//     printf("%d\n",arr[i]);
// }

printf("This example uses%c %cmacros",MY_SPACE,MY_NEW_LINE);
printf("This file is called %s\n", __FILE__);
printf("Today is %s\n",__DATE__);
printf("Today is %c\n",__BASE_FILE__);
printf("Today is %c\n",_CRT_INT_MAX);

} 