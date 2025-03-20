#include<stdio.h>

int main(){
    int n,count;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        count = 0;
        for(int j=n-1; j>=1; j-- ){
            printf("%c",65+count);
            count++;
        }
        printf("\n");
    }
    return 0;
}