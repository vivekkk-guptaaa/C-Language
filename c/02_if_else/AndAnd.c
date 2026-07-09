//Ques :  take +ve number integer input and tell if it is a number or not?
//use of (&&))

#include <stdio.h>
int main(){
    int x;
    printf("enter a positive integer : ");
    scanf("%d", &x);
    if(x>99 && x<1000){
        printf("Yes, it is a 3 digit number");
    }
    else{
        printf("it is not a 3 digit number!");
        
    }
    return 0;
}