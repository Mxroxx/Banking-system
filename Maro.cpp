#include <iostream>

int main()
{
       int num1;
       int num2;

       std::cout << "Enter First Number:\n";
       std::cin >> num1;
       std::cout << "Enter Second Number:\n";
       std::cin >> num2;

       if(num1 > num2){
              std::cout << "Number One is greater = " << num1 << '\n';
       }

       else if(num1 == num2){
              std::cout << "Two Numbers are equal = " << num2 << '\n';
       }
       else{
              std::cout << "Number Two is greater = " << num2 << '\n';
       }

       return 0;
}