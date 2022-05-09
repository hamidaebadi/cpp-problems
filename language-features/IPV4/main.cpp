#include <iostream>
#include "ipv4.hpp"
/* 
Write a class that represents an IPv4 address. Implement the functions required to
be able to read and write such addresses from or to the console. The user should 
be able to input values in dotted form, such as 127.0.0.1 or 168.192.0.100. 
This is also the form in which IPv4 addresses should be formatted to an output stream.
*/

int main(){
    std::string ipaddr;
    unsigned short netmask;
    while (true)
    {
        std::cout << "Enter ipaddress: " << std::endl;
        std::cout << "or enter 0 to exit" << std::endl;
        std::cin >> ipaddr;
        if (ipaddr == "0")
            break;
        std::cout << "Enter netmask: " << std::endl;
        std::cin >> netmask;
        IPV4 host_address = IPV4(ipaddr, netmask);
        std::cout << "Your address: " << host_address << std::endl;
        
    }
    
    return 0;
}