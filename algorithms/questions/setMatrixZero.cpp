#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<bool>> tag(matrix.size(), vector<bool> (matrix[0].size(), 0));

        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(!matrix[i][j]){
                    tag[i][j] = 1;
                }
            }
        }

        for(int i=0; i<tag.size(); i++){
            for(int j=0; j<tag[0].size(); j++){
                if(tag[i][j]){
                    for(int a=0; a<matrix[0].size(); a++){
                        matrix[i][a] = 0;
                    }
                    for(int a=0; a<matrix.size(); a++){
                        matrix[a][i] = 0;
                    }
                }
            }
        }
}

void printMatrix(vector<vector<int>>& matrix){
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }

    return;
}

int main(){
    vector<vector<int>> matrix = {
        {0,1,2,4},
        {3,4,5,2},
        {1,3,1,5}
    };

    setZeroes(matrix);
    printMatrix(matrix);

    return 0;
}
