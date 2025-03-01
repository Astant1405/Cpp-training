#include <iostream>
#include <vector>
#include <list>
#include <deque>

template <typename InIter1, typename InIter2, typename OutIter>
OutIter SetDifference(InIter1 first1, InIter1 last1, InIter2 first2, InIter2 last2, OutIter out){
    auto second = first2;
    while(first1 != last1){
        first2 = second;
        bool status = false;
        while(first2 != last2){
            if(*first1 == *first2){
                status = true;
                break;
            }
            first2++;
        }
        if(status == false){
            *out = *first1;
            out++;
        }
        first1++;
    }
    return out;
}


int main(){
    std::vector<int> in1 = {1, 2, 3, 5, 6};
    std::list<int> in2 = {1, 2, 3};
    std::list<int> out;
    SetDifference(in1.begin(), in1.end(), in2.begin(), in2.end(), std::back_inserter(out));
    for(const auto& element : out){
        std::cout << element;
    }
    return 0;
}