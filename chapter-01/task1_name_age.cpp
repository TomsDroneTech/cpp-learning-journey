#include <iostream>
#include <string>


/*Task 1
Write a program that asks the user for their name and age, stores them in appropriate variables, and prints:*/

int main()

{
   std::cout<<"Enter your name: ";
   std::string name{};
   std::cin>>name;

   std::cout<<"Enter your age: ";
   int age{};
   std::cin>>age;

   std::cout<<"Hello "<<name<<"! you are "<<age<<" years old. Next year you will be "<<age + 1<<".\n";

   return 0;
}