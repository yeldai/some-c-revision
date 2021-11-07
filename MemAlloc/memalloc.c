#include <stdio.h>
#include <stdlib.h>





int main(){
// int x= 124;
// int *p = &x;

// printf("The value of a pointed to object is %d\n",*p);


// Initializing wiyh random numbers
// int *p = malloc(sizeof(int));
// printf("Allocated %zu bytes",sizeof *p);
// if(p){

//     printf("The value is %d\n",*p);
// }
// free(p);
// p=NULL;

// int *p = malloc(10 * sizeof(int));


// if(p){
//     p[0]=12;
//     p[1]=22;
//     p[2]=132;
//     p[3]=14;
//     p[4]=155;
//  printf("Allocated an array of 5 integers.\n");
// for(int i =0;i<sizeof(p)/sizeof(int);i++){
//     printf("%d\t",p[i]);

// }

// free(p);
// }

// Initializing but with zeros

// int *p = calloc(1,sizeof(int));
// if(p){
//     printf("The initial value is %d\n",*p);
// }
// free(p);

int *p = malloc(sizeof(int));
printf("Then initial allocations has %zu\n bytes",sizeof *p);
printf("Resizing the memory....\n");

int *pnew= realloc(p,10*sizeof(int));
printf("The memory block is now %zu bytes long.\n",10 *sizeof(int));



}