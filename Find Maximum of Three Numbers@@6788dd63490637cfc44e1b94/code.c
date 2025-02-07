#include <stdio.h>

int main(){
    int a,b,c,largest;
    scanf("%d%d%d",&a,&b,&c);

    if(a>b){
        largest = a
    }
    else if(b>a){
        largest = b
    }
    if(c>largest){
        largest = c
    }

    printf("%d",largest);

    return 0;
}