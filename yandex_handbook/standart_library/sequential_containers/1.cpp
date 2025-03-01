#include <iostream>
#include <vector>
#include <string>
#include <iterator>

template <typename Container>
void Print(const Container &data, const std::string &sep){
    for(auto iter = data.begin(); iter != data.end(); iter++){
        if(std::next(iter) == data.end()){
            std::cout << *iter;
        }
        else{
            std::cout << *iter << sep;
        }
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> data = {1, 2};
    Print(data, ", ");  // 1, 2, 3, 4
}