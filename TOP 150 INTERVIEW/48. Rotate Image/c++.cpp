#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int len = matrix.size();
        for(int i=0;i<len;i++){
            for(int j=i;j<len;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<len;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};