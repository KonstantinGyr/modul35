#include <iostream>
#include <vector>

class Numbers{
    std::vector<int>numbers;
public:
    Numbers(std::initializer_list<int>inNumbers):numbers(inNumbers)
    {
    }
    std::vector<int> getNum(){
        return numbers;
    }
};

int main() {
    Numbers n={1,2,3,4,5};
    for(auto &num:n.getNum()){
        std::cout<<num<<std::endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
