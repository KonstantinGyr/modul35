#include <iostream>
#include <vector>
#include <unordered_set>
#include <memory>

auto uniqVec=[](std::vector<int>&inVec){
  std::unordered_set<int>setNum;
  for(int i=0;i<inVec.size();i++){
      if(setNum.count(inVec[i])){
      inVec.erase((inVec.begin()+i));
      --i;
      }
      else{
          setNum.insert(inVec[i]);
      }
  }
  return std::make_unique<std::vector<int>>(inVec);
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
