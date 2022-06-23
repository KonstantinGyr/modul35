#include <iostream>
#include <filesystem>
#include <string>
#include <fstream>

auto recursiveGetFileNamesByExtension = [](std::filesystem::path pth,const std::string extension){
    std::ofstream list;
    list.open("MyList.txt");
    for(auto& p: std::filesystem::recursive_directory_iterator(pth)) {
        if(p.is_regular_file()&&p.path().extension().compare(extension)==0) {
            list<<p.path().filename()<<std::endl;
        }
    }
    list.close();
    return "MyList.txt";
};

int main() {
    std::string ext{".la"};
    std::string oneFile;
    std::ifstream list;
    std::filesystem::path p ("C:\\gcc");
    std::string my_list=recursiveGetFileNamesByExtension(p,ext);
    list.open(my_list);
    while (!list.eof()){
        list>>oneFile;
        if(oneFile.empty())break;
        std::cout<<oneFile<<std::endl;
        oneFile.clear();
    }
    std::cout << "Hello, World!" << std::endl;
    list.close();
    return 0;
}
