#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    // This will reset the random function to give different output every execution.
    srand(time(NULL));

    // Generating numbers
    for(int i=0; i<5; i++){
        printf("%d ", rand());
    }
    printf("\n");


    // Generating within bounds
    int LB=10, UB=100;
    for(int i=0; i<5; i++){
        printf("%d ", (rand() % (UB-LB+1)) + LB);
    }

    return 0;
}
