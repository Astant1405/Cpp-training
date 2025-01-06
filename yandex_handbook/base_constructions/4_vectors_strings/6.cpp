#include <iostream>
#include <vector>

int main(){
    int m, n, k, x, y;
    std::cin >> m >> n >> k;
    std::vector<int> coordinates(k*2);
    for(int i = 0; i < k; ++i){
        std::cin >> x >> y;
        coordinates.push_back(x);
        coordinates.push_back(y);  
    }
    std::vector< std::vector<char> > matrix(m, std::vector<char>(n));
    for(int i = 0; i != m; ++i){
        for(int j = 0; j != n; ++j){
            for(int l = 0; l != 2*k; ++l){
                if(i == l && j == l + 1){
                    matrix[i][j] = '*';
                }
                else{
                    matrix[i][j] = '0';
                }
            }
        }
    }
    for(int i = 0; i != m; ++i){
        for(int j = 0; j != n; ++j){
            std::cout << matrix[i][j];
        }
    }
}