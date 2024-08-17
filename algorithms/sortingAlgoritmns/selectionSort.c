#include <stdio.h>

void printArr(int arr[], int n){
  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}

int main(){
  int arr[] = {3, 56, 2, 6,2,43, 65,7,2};
  int n = sizeof(arr)/sizeof(arr[0]);

  for(int i=0; i<n-1; i++){
    int min = i;
    for(int j=i+1; j<n; j++){
      if(arr[j]<arr[min]){
        min = j;
      }
      int temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
    }
  }

  printArr(arr,n);


  return 0;
}
