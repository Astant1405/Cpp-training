#include <iostream>
#include <vector>
#include <string>
#include <iterator>

int Print(const std::vector <int> &data, const std::string &sep){
    auto last = std::prev(data.end());
    for(auto iter = data.begin(); iter != last; iter++){
        std::cout << *iter << sep;
    }
    std::cout << *last;
    std::cout << '\n';
    return 0;
}

int main() {
    std::vector<int> data = {1, 2, 3, 4};
    Print(data, ", ");  // 1, 2, 3, 4
}