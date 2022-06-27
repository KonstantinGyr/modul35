#include <iostream>
#include <filesystem>
#include <vector>

auto recursiveGetFileNamesByExtension = [](std::filesystem::path pth,const std::string extension){
    std::vector<std::string> vec;
    for(auto& p: std::filesystem::recursive_directory_iterator(pth)) {
        if(p.is_regular_file()&&p.path().extension().compare(extension)==0) {
            vec.push_back(p.path().filename().string());
        }
    }
    return vec;
};

int main() {
    std::string ext{".la"};
    std::string oneFile;
    std::filesystem::path p ("C:\\gcc");
    if(!std::filesystem::exists(p))
        return 0;
    for(auto v : recursiveGetFileNamesByExtension(p,ext))
        std::cout << v << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
