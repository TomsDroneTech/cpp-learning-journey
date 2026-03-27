#include <iostream>

/*Task 2
Write a program that asks the user for two decimal numbers, stores them correctly, and prints their sum, difference, and product — each on a separate line with a clear label.*/
int main()

{
   
    std::cout<<"Enter two decimal numbers: ";
    double dec1{};
    std::cin>>dec1;

    std::cout<<"Enter the second decimal: ";
    double dec2{};
    std::cin>>dec2;

    std::cout<<" The sum of the decimal is: "<< dec1 + dec2<<"\n";
    std::cout<<" The difference of the decimal is: "<< dec1 - dec2<<"\n";
    std::cout<<" The product of the decimal is: "<< dec1 * dec2<<"\n";

    return 0;

}