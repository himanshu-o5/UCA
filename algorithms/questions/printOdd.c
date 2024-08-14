#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void makeArray(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = (rand() % 100) + 1;
    }
    return;
}

int main(){
    int n = 10;
    int arr[n];
    makeArray(arr, n);
    printArray(arr, n);

    int tempArr[100] = {0};
    for(int i=0; i<n; i++){
        tempArr[arr[i]]++;
    }

    /* printArray(tempArr, 100); */

    for(int i=0; i<100; i++){
        if(tempArr[i]>0 && tempArr[i]%2 == 1) printf("%d ", i);
    }

    return 0;
}
