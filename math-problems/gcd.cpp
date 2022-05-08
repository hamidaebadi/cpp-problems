#include <iostream>
/* 
problem description:
    Write a program that, given two positive integers,
    will calculate and print the greatest common divisor of the two.
*/

//this function uses Euclidean algorithm
int find_gcd(int &a, int &b){
    while (true)
    {
        if(a == b)
            return a;
        else if(a > b)
            a = a-b;
        else if(b > a)
            b = b -a;
    }
    
}

int main(){
    int num_1, num_2, current_gcd{1};
    std::cout << "Please enter first number: "<< std::endl;
    std::cin >> num_1;
    std::cout << "Please enter second number: " << std::endl;
    std::cin >> num_2;
    std::cout << "GCD of " << num_1 << " and " << num_2 << " is: " << find_gcd(num_1, num_2) << std::endl;
    return 0;
}