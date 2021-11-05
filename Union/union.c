#include <stdio.h>


// Only the last declared variable is available, because they all share the same memory.

union AUnion{
    char c;
    int x ;
    double d;

};


int main(){
union AUnion u;
u.c='A';
printf("The union's char member value:%c\n",u.c);

u.x=111;
printf("The union's char member value:%d\n",u.x);

u.d=121.3232;
printf("The union's char member value:%f\n",u.d);

printf("The union's char member value:%c\n",u.c);
printf("The union's char member value:%d\n",u.x);
printf("The union's char member value:%f\n",u.d);

}