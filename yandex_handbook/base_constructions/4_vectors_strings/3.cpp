#include <iostream>
#include <vector>

int main(){
    int num;
    std::cin >> num;
    std::vector<int> people(num);
    std::vector<int> places(num);
    for(int i = 0; i < num; ++i){
        std::cin >> people[i];
    }
    for(size_t i = 0; i!=people.size(); ++i){
        places[people[i] - 1] = i + 1;
    }
    for(size_t j = 0; j!=people.size(); ++j){
        std::cout << places[j] << " ";
    }
    return 0;
}