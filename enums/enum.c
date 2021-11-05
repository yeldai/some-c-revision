#include <stdio.h>

enum MyEnum{
    FIRST,
    SECOND,
    THIRD
};


int main(){
enum MyEnum myEnumVar;
myEnumVar = FIRST;
printf("Declared enum %d\n",myEnumVar);

}