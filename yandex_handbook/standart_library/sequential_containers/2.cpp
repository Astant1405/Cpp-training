#include <iostream>
#include <deque>
#include <string>
#include <vector>

int main(){
    int people, volume;
    std::cin >> people;
    std::string name;
    std::deque <std::string> person;
    std::vector <int> nums;
    for(int i = 0; i != people * 2; i++){
        std::cin >> name;
        if(name != "top" && name != "bottom"){
            person.push_front(name);
        }
        else{
            if(name == "bottom"){
                std::string human = person[0];
                person.pop_front();
                person.push_back(human);
            }
        }
    }
    std::cin >> volume;
    int num;
    for(int j = 0; j != volume; j++){
        std::cin >> num;
        nums.push_back(num);
    }
    for(size_t k = 0; k!= nums.size(); k++){
        std::cout << person[nums[k] - 1];
        std::cout << '\n';
    }
}