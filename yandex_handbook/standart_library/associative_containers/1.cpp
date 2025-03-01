#include <iostream>
#include <string>
#include <unordered_set>

int main(){
    std::string num;
    std::unordered_set<std::string> nums;
    while(std::cin >> num){
        if(nums.find(num) != nums.end()){
            std::cout << "YES" << '\n';
        }
        else{
            std::cout << "NO" << '\n';
        }
        nums.insert(num);
    }
    return 0;
}