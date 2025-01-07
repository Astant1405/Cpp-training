#include <iostream>
#include <vector>
#include <cmath>


std::vector< std::vector<int> > Sort_lenght(const std::vector<std::vector<int>> &coordinates){
    std::vector<std::vector<int>> coord_copy = coordinates;
    std::vector <int> buffer;
    for(size_t i = 0; i != coord_copy.size(); ++i){
        for(size_t j = 0; j != coord_copy.size() - 1; ++j){
            if(pow(coord_copy[j][0], 2) + pow(coord_copy[j][1], 2) > pow(coord_copy[j+1][0], 2) + pow(coord_copy[j+1][1], 2)){
                buffer = {coord_copy[j+1][0], coord_copy[j+1][1]};
                coord_copy[j+1][0] = coord_copy[j][0];
                coord_copy[j+1][1] = coord_copy[j][1];
                coord_copy[j][0] = buffer[0];
                coord_copy[j][1] = buffer[1];
            }
        }
    }
    return coord_copy;
}


int main(){
    int num, x, y;
    std::cin >> num;
    std::vector< std::vector<int> > coordinates(num, std::vector<int>(2));
    for(int i = 0; i < num; ++i){
        std::cin >> x >> y;
        coordinates[i] = {x,y}; 
    }
    coordinates = Sort_lenght(coordinates);
    for(size_t i = 0; i != coordinates.size(); ++i){
        for(size_t j = 0; j != coordinates[i].size(); ++j){
            std::cout << coordinates[i][j] << " ";
        }
        std::cout << "\n";
    }
}