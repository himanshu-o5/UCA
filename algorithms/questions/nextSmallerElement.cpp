#include <bits/stdc++.h>
using namespace std;


// 2 1 4 3
// 1 -1 3 -1

void printArray(vector<int> arr){
    for(int i=0; i<arr.size(); i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void nextSmallerElementIndex(vector<int> arr, int n){
    stack<int> st;
    vector<int> ans(n, n);
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && (arr[st.top()] > arr[i])) st.pop();
        if(!st.empty()) ans[i] = st.top();
        st.push(i);
    }
    printArray(ans);
}

void prevSmallerElementIndex(vector<int> arr, int n){
    stack<int> st;
    vector<int> ans(n, -1);
    for(int i=0; i<n; i++){
        while(!st.empty() && (arr[st.top()] > arr[i])) st.pop();
        if(!st.empty()) ans[i] = st.top();
        st.push(i);
    }
    printArray(ans);
}

int main(){
    vector<int> arr = {2, 1, 4, 3};
    
    nextSmallerElementIndex(arr, arr.size());
    prevSmallerElementIndex(arr, arr.size());

    return 0;
}

/*void nextSmallerElement(vector<int> arr, int n){*/
/*    stack<int> st;*/
/*    st.push(-1);*/
/*    for(int i=n-1; i>=0; i--){*/
/*        int curr = arr[i];*/
/*        while(st.top() > curr) st.pop();*/
/*        arr[i] = st.top();*/
/*        st.push(curr);*/
/*    }*/
/*}*/


