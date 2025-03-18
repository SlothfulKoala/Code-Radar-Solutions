#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        count = 0;
        for(int j=n; j>=1; j--){
            if(j>i){
                printf(" ");
            }
            else{
                printf("*");
                count++;
            }
        }

        for(int i = 0; i<(count-1); i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}