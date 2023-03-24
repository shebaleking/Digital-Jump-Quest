// main.cpp - Comprehensive C++ starter script
#include <iostream>
#include <vector>
#include <string>
struct Project { std::string name; std::string version; };
void print_project_info(const Project& p) { std::cout << "Project: " << p.name << ", v" << p.version << std::endl; }
int main() {
    Project my_project = {"GitHub Automated Repository Project", "1.0.0"};
    print_project_info(my_project);
    std::cout << "\nFeatures: Structs, Functions, Vectors" << std::endl;
    for (int i = 0; i < 5; ++i) { std::cout << "  - Loop " << i+1 << std::endl; }
    return 0;
}

# Modified on 2023-03-24T00:00:00