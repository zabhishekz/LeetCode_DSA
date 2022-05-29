class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int, vector<int>> umap;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                umap[i-j].push_back(mat[i][j]);
            }
        }
        for (auto &it: umap) {
            sort(it.second.begin(), it.second.end());
        }
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                mat[i][j] = umap[i-j][0];
                umap[i-j].erase(umap[i-j].begin());
            }
        }
        return mat;
    }
};