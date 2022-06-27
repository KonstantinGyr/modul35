#include <iostream>
#include <vector>
#include <unordered_set>
#include <memory>

auto uniqVec=[](std::vector<int>&inVec){
  std::unordered_set<int>setNum(inVec.begin(),inVec.end());
  inVec.clear();
  std::vector<int>outVec(setNum.begin(),setNum.end());
  return std::make_unique<std::vector<int>>(outVec);
};

int main() {
    std::vector<int>vec={1,2,2,3,4,4,4,5,6,7,7};
    auto ptr=uniqVec(vec);
    for(auto elem:*ptr){
        std::cout<<elem<<" ";
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;

}
