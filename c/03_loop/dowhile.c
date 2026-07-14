#include <stdio.h>
int main(){


    // int i = 10;
    // while (i<10){
    //     printf("hello\n");  // while: condition is checked first, so nothing is printed.
    //     i++;
    // }


    int i = 10;
    do{
        printf("hello\n");  // do...while: executes once before checking the condition, so "hello" is printed once.
        i++;
    }while(i<10);

    return 0;
}