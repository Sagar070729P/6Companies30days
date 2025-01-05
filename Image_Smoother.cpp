#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size(), n = img[0].size();
        if (m==0) return {};
        vector<vector<int>> trans_img(m,vector<int>(n,0));
        vector<int> x = {1, 1, 1, 0, 0, 0, -1,-1, -1};
        vector<int> y = {0, -1, 1, 0, -1, 1, 0, -1, 1};
        for (int i=0; i<m ;i++){
            for (int j=0; j<n; j++){
                int sum=0, count=0;
                for (int k=0; k<9; k++){
                    int ni = i+x[k], nj = j+y[k];
                    if (ni>=0 && ni<m && nj>=0 && nj<n){
                        sum+=img[ni][nj];
                        count++;
                    }
                }
                trans_img[i][j]= sum/count;

            }
        }
        return trans_img;
    }
};