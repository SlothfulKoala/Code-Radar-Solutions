void deflateBalloons(int air[], int n){
    // n is the number of balloons;
    // air is the array showing the amount of air left
    int lowest = air[0];

    while(n){
        printf("%d",n);
        
        for(int i=0; i<n; i++){
            if(air[i]>0){
                if(lowest > air[i]){
                    lowest = air[i];
                }
            }
        }

        for(int i = 0; i<n; i++){
            air[i] -= lowest;
            if(air[i]==0){
                n--;
            }
        }

    }
    
}