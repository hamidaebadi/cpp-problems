#include <iostream>
/*
problem description:
    Write a program that calculates and prints the sum of all the natural numbers divisible by
    either 3 or 5, up to a given limit entered by the user. 
*/

//function to check if number is divisible either by 3 or 5
bool is_divisible(int number){
    if(number % 3 == 0 || number % 5 == 0)
        return true;
    return false;
}

int main(){
    int limit;
    unsigned long long total, current_num{3};
    
    std::cout << "Enter the limit: " << std::endl;
    std::cin >> limit;
    while ( current_num <= limit)
    {
        //check if divisible by 3 or 5?
        if(is_divisible(current_num)){
            total += current_num;
        }
        current_num += 1;
    }

    //print the result
    std::cout << "Sum of natural numbers divisible either by 3 or 5 is : " << total << std::endl;
    
    return 0;
}