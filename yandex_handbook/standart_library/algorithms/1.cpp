#include <vector>
#include <iostream>
#include <algorithm>

template <typename T>
void Duplicate(std::vector<T>& v) {
    std::vector<T> v2;
    std::copy(v.begin(), v.end(), std::back_inserter(v2));
    for (const auto& element : v) {
        v2.push_back(element);
    }
    v = v2;
    for(const auto& element : v){
        std::cout << element << ' ';
    }
}

int main(){
    std::vector<char> array = {'1', '2', '3'};
    Duplicate(array);
    return 0;
}