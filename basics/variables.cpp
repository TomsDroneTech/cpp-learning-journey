#include <iostream>

// int main(){
//     int a{10}; // integer variable
//     double b{3.14}; // double variable
//     char c{'A'}; // character variable
//     bool d{true}; // boolean variable
//     std::cout << "Integer: " << a << std::endl;
//     std::cout << "Double: " << b << std::endl;
//     std::cout << "Character: " << c << std::endl;
//     std::cout << "Boolean: " << d << std::endl;
//     return 0;
// }

// int main()
// {
//    int num{ };

//    std::cout << "Enter an integer: \n" ;

//    std::cin >> num;

//    std::cout << "Double of the number is: " << num * 2 << "\n";

//    std::cout << "Triple  of the number is: " << num * 3 << "\n";
//    return 0;
// }

/*int main()
{
    int num1 { };

    int num2 { };

    int result { };

    std::cout << "Enter first number: \n";

    std::cin >> num1;

    std::cout << "Enter second number: ";

    std::cin >> num2;


    std::cout << "The sum is : " << result;
    std::cout << num1 <<" + "<< num2 << " is "<< num1 + num2 << "\n";
    std::cout << num1 << " - " << num2 << " is " << num1 - num2 << "\n";

    return 0;

}*/

// int main()
// {

//     std::cout << "Enter two whole numbers: ";
//     int x{};
//     std::cin >> x;

//     std::cout << "Enter second number: ";
//     int y{};
//     std::cin >> y;
//     int sum = {x + y};
//     std::cout << "The sum is: " << sum << '\n';
//     return 0;
// }

// int main()
// {
//     std::cout << " Enter your name: ";

//     std::string name{};

//     std::cin >> name;

//     std::cout << " Enter your age: ";

//     int age{};

//     std::cin >> age;

//     std::cout << " Hello " <<name<< "! you are " << age << " years old. next year you will be " << age + 1 << '\n';
//     return 0;
// }

// Write a program that asks the user for two decimal numbers (e.g. 4.7 and 2.3), stores them correctly, and prints their sum, difference, and product — each on a separate line with a clear label. Think carefully about what type of variable you need for decimal numbers, and what happens if you use the wrong one.

int main()
{
  std::cout<<"Enter two decimal numbers: ";
  double x{};
  std::cin>>x;

  std::cout<<"Enter the second decimal number: ";
  double y{};
  std::cin >>y;

  std::cout <<" The sum of the decimal is:"<< x + y<<'\n';

  std::cout << " The difference of the decimal is:" << x - y << '\n';

  std::cout << " The product of the decimal  is:" << x * y << '\n';
  return 1;

 
}