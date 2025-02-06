#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a>=65 ||a<=91){
        printf("Lowercase");
    }
    else if(a>=92||a<=118){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}
