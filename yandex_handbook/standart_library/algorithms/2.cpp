#include <iostream>
#include <list>

template <typename Iter>
Iter Unique(Iter first, Iter last){
    auto second = first;
    while (first != last){
        while(second != last && *second == *first){
            second++;
        }
        first++;
        if(second == last){
            break;
        }
        *first = *second;
    }
    return first;
}

int main(){
    std::list<int> v = {5};
    auto iter = Unique(v.begin(), v.end());
    v.erase(iter, v.end());
    for(const auto& element : v){
         std::cout << element;
    }  
    return 0;
}