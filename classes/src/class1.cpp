#include<iostream>
#include<string>
#include "Sales_data.h"

int main(){
    Sales_data a, b;

    std::cout << "Enter isbn, units sold, and price (hitting enter after each)" << std::endl;
    read(std::cin, a);

    std::cout << "Enter isbn, units sold, and price (hitting enter after each)" << std::endl;
    read(std::cin, b);

    print(std::cout, a);
}
