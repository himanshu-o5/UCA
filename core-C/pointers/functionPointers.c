#include <stdio.h>

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return;
}

int compAsc(int a, int b){
    return b>=a;
}
int compDesc(int a, int b){
    return a>=b;
}


void sort(int arr[], int n, int (*compare)(int, int)){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(compare(arr[i], arr[j])){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return;
}

int main(){
    int arr[] = {3, 1, 6, 3, 9};
    sort(arr, 5, compAsc);
    printArr(arr, 5);
    /* sort(arr, 5, compDesc); */
    /* printArr(arr, 5); */

    return 0;
}



/* #include <stdio.h> */
/**/
/* int add(int a, int b){ */
/*     return a+b; */
/* } */
/**/
/* int substract(int a, int b){ */
/*     return a-b; */
/* } */
/**/
/* int multiply(int a, int b){ */
/*     return a*b; */
/* } */
/**/
/* int divide(int a, int b){ */
/*     return a/b; */
/* } */
/**/
/* void performOperation(int (*operation)(int, int), int a, int b){ */
/*     int val = operation(a,b); */
/*     printf("%d", val); */
/*     return; */
/* } */
/**/
/* int main(){ */
/*     performOperation(add, 3, 2); */
/**/
/*     return 0; */
/* } */
