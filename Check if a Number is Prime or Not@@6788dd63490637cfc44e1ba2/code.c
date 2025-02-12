#include<stdio.h>
int main(){
    int a,is_prime;
    scanf("%d",&a);
    
    if(a==2){
        printf("Prime");
        return 0;
    }

    if(a%2==0){
        printf("Not Prime");
        return 0;
    }

    is_prime = 1;
    for(int i=3;i<a/2;i++){
        if(a%i==0){
            is_prime = 0;
            break;
        }
    }
    
    if(is_prime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}