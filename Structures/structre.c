#include <stdio.h>

 struct MyStruct{
    char c;
    int x;
    double d;

};


// A single-linked list 

struct MySing{
int x;
struct MySing *next;
};

// A double-linked list 

struct MyDouble{
int x;
struct MyDouble *prior;
struct MyDouble *next;
};

// A Binary Tree list 

struct MyNode{
int x;
struct MyNode *left;
struct MyNode *right;
};

void afunction(struct MyStruct aparam){
printf("aparam c has %c\n",aparam.c);
printf("aparam x has %d\n",aparam.x);
printf("aparam d has %.2f\n",aparam.d);
};


int main(void){
struct MyStruct s = {'a',123,39.99};
struct MyStruct *ps =&s;
printf("Member c has %c\n",(*ps).c);
printf("Member x has %d\n",(*ps).x);
printf("Member d has %.2f\n",(*ps).d);


afunction(s);


}