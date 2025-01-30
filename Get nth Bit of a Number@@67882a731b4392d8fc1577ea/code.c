#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    int bit; 
    scanf("%d",&bit);

    if(num & (1<<bit)){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}