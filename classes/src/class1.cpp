#include<iostream>
#include<string>
#include "Sales_data.h"

void printC(Sales_data &x)
{
    std::cout << x.units_sold << " copies of " << x.bookNo << " were sold at an average price of $"
        << x.revenue / static_cast<double>(x.units_sold) << std::endl;
}

int main(){
    Sales_data data1, data2;
    double price = 0;

    std::cout << "ISBN: ";
    std::cin >> data1.bookNo;
    std::cout << "Number sold: ";
    std::cin >> data1.units_sold; 
    std::cout << "At what price?: ";
    std::cin >> price;
    data1.revenue = data1.units_sold * price;
    
    std::cout << "ISBN: ";
    std::cin >> data2.bookNo;
    std::cout << "Number sold: ";
    std::cin >> data2.units_sold; 
    std::cout << "At what price?: ";
    std::cin >> price;
    data2.revenue = data2.units_sold * price;

    if(data2.bookNo == data1.bookNo){
        std::cout << (data1.units_sold + data2.units_sold) 
            << " copies of " << data1.bookNo << " were sold at an average price of $" 
            << (data1.revenue + data2.revenue) / static_cast<double>(data1.units_sold + data2.units_sold) 
            << std::endl;
    } else {
        printC(data1);
        printC(data2);
    }
}
