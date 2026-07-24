#include <stdio.h>
int main(){
    int i = 1, sum1, sum2, sum3,temp;
    while(i<500){
        temp = i;
        sum1 = temp%10;
        temp = temp/10;
        sum2 = temp%10;
        temp = temp/10;
        sum3 = temp%10;
        if(sum1*sum1*sum1+sum2*sum2*sum2+sum3*sum3*sum3==i){
            printf("This is armstrong num : %d\n", i);
        }

        i++;


        
    }
    return 0;
}