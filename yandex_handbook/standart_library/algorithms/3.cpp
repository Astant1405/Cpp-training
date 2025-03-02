#include <iostream>
#include <vector>
#include <list>
#include <deque>

template <typename InIter1, typename InIter2, typename OutIter>
OutIter SetDifference(InIter1 first1, InIter1 last1, InIter2 first2, InIter2 last2, OutIter out){
    while(first1 != last1){
        if(first2 == last2 || *first1 < *first2){
            *out = *first1;
            out++;
        }
        else if(*first1 > *first2){
            first2++;
            continue;
        }
        else if(*first1 == *first2){
            first2++;
        }
        first1++;
    }
    return out;
}


int main(){
    std::vector<int> in1 = {1, 3, 3, 3, 5};
    std::deque<int> in2 = {1, 3};
    std::deque<int> out;
    SetDifference(in1.begin(), in1.end(), in2.begin(), in2.end(), std::back_inserter(out));
    for(const auto& element : out){
        std::cout << element;
    }
    return 0;
}