#include <stdio.h>
int main(){
    int ram, shyam, ajay;
    printf("Enter the age of ram : ");
    scanf("%d", &ram);
    printf("Enter the age of shyam : ");
    scanf("%d", &shyam);
    printf("Enter the age of ajay : ");
    scanf("%d", &ajay);

    if(ram>shyam){
        if(ram>ajay){
            printf("Ram is oldest");

        }
        else {
            printf("Ajay is oldest");
        }
    }
    else { //shyam>ram
        if(shyam>ajay)
        {
            printf("Shyam is oldest");
        }
        else{
            printf("ajay is oldest");
        }
    }
    return 0;
}