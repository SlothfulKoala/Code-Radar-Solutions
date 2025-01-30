#include<stdio.h>

int main(){
    int num; 
    scanf("%d",&num);

    int bits = sizeof(bits) * 8;

    if (num & (1 << (bits - 1))){
        printf("Set");
    }
    else{
        printf("Not Set");
    }

    return 0;
}