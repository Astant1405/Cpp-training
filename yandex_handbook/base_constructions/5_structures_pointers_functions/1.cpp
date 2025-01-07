#include <iostream>
#include <vector>

std::pair<size_t, size_t> MatrixArgMax(const std::vector< std::vector<int> >& matrix){
    int max_i = 0, max_j = 0;
    int max_value = matrix[0][0];
    for(size_t i = 0; i != matrix.size(); ++i){
        for(size_t j = 0; j != matrix[i].size(); ++j){
            if(matrix[i][j] > max_value){
                max_value = matrix[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
    return {max_i, max_j};
}

int main(){
    int m, n;
    std::cin >> m >> n;
    std::vector< std::vector<int> > matrix(m, std::vector<int>(n));
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            std::cin >> matrix[i][j];
        }
    }
    std::pair<size_t, size_t> rc = MatrixArgMax(matrix);
    std::cout << rc.first << " " << rc.second;
}