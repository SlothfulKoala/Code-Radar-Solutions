#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    int lowestBit = num & (-num);

    printf("%d",lowestBit-1);

    return 0;
}