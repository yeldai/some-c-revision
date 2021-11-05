#include <stdio.h>

int main(){


    // int x =123;
    // int y = 456;    
    // printf("The value before the change %d, %d\n",x,y);
    // int *p = &x;
    // *p=100;
    // p=&y;
    // *p=200;
    // printf("The value after  the change %d, %d\n",x,y);
    // printf("%p\n",p);
    // printf("%d\n",*p);


    int arr[5]= {10,20,30,40,59};

    int *p= arr;
    printf("The first array element is %d\n",*p);

    for( int i = 0; i<sizeof(arr)/sizeof(int);i++){
        printf("%d\n",p[i]);
    }
   ;


}
