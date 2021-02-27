#include <iostream>

struct Alumn {
    std::string name;
    int age;
};

int main() {
    Alumn alumn;

    alumn.age = 20;
    alumn.name = "Jhon";

    std::cout << alumn.age << " " << alumn.name;
}
