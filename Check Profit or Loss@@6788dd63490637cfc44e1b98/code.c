#include <stdio.h>

int main(){
    int cost,sell;
    scanf("%d%d",&cost,&sell);

    if(cost<sell){
        printf("Profit");
    }
    else if(cost == sell){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
    return 0;
}