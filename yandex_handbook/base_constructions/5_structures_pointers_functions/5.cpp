#include <iostream>
#include <vector>
#include <string>

std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    std::vector< std::vector<int> > matrix2(cols, std::vector<int>(rows));
    for(size_t i = 0; i!=matrix2.size(); ++i){
        for(size_t j = 0; j!=matrix2[i].size(); ++j){
            matrix2[i][j] = matrix[j][i];
        }
    }
    return matrix2; 
}

int main(){
    std::vector< std::vector<int> > matrix = {{1, 1, 1},{2, 2, 2},{3, 3, 3},{4, 4, 4}};
    std::vector< std::vector<int> > transpose = Transpose(matrix);
    for(size_t i = 0; i!=transpose.size(); ++i){
        for(size_t j = 0; j!=transpose[i].size(); ++j){
            std::cout << transpose[i][j] << " ";
        }
        std::cout << "\n";
    }
}