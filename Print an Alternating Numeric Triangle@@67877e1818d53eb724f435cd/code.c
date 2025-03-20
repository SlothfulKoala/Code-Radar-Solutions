#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        if(i%2!=0){ // odd row case
            for(int j = 1; j<=i; j++){
                if(j%2!=0){
                    printf("1 ");
                }
                else{
                    printf("0 ");
                }
            }
        }
        else{ // even row case
            for(int j = 1; j<=i; j++){
                if(j%2!=0){
                    printf("0 ");
                }
                else{
                    printf("1 ");
                }
            }
        }
        
    }
}