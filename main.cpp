#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
int main() {
//    std::cout << "Hello, World!" << std::endl;
    string buffer;
    vector<string> strings_to_print;

    ifstream inputStream("input.txt");
    while(!inputStream.eof()){
        getline(inputStream, buffer, ' ');
        strings_to_print.push_back(buffer);
    }

    for(auto k : strings_to_print){
        std::cout << k << std::endl;
    }

    return 0;
}
