#include <iostream>
using namespace std;

int peakInMountainArray(int arr[], int n){
    int s=0, e=n, m;
    while(s<e){
        m = (s+e)/2;
        if(arr[m] > arr[s]){
            s = m;
        }
        else{
            e = m-1;
        }
    }
    return m;
}

int main(){
    int arr[] = {0, 10, 5, 3};
    int n = 4;

    cout<<peakInMountainArray(arr, n);

    return 0;
}