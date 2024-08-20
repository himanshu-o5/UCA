/*N children -> Give atleast one candy.*/
/*Priority -> More priority than neighbour more candies.*/

/*Sir's Answer -> Slope based pattern.*/
/*https://leetcode.com/problems/candy/submissions/1361413151/*/


#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> arr = {1, 0, 2};
  int ans = arr.size();
  for(int i=1; i<arr.size()-1; i++){
    if(arr[i] > arr[i-1] || arr[i]>arr[i+1]) ans++;
  }
   cout<<ans;

  return 0;
}
