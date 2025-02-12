#include<stdio.h>
int main(){
    int a,is_prime;
    scanf("%d",&a);

    if(a%2==0){
        printf("Not Prime");
        return 0;
    }

    is_prime = 1;
    for(int i=3;i<a/2;i=i+2){
        if(a%i==0){
            is_prime = 0;
            break;
        }
    }
    
    if(is_prime){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
}