#include <iostream>
#include <set>
#include <queue>
#include <algorithm>


int main(){
    int n, length, elem;
    std::queue <int> numbers;
    std::multiset <int> window;
    std::cin >> n >> length;
    for(int i = 0; i != n; i++){
        std::cin >> elem;
        numbers.push(elem);
        window.insert(elem);
        if(i + 1 >= length){
            std::cout << *window.begin() << '\n';
            auto iter = window.find(numbers.front());
            numbers.pop();
            window.erase(iter);
        }
    }
}