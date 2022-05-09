#include <iostream>
#include <string>

class IPV4{
    public:
        IPV4(const std::string ipaddr, const unsigned ip_mask):
            ip_address(new std::string(ipaddr)), netmask{ip_mask} {};
        ~IPV4(){delete ip_address; ip_address=nullptr;};
        friend std::ostream& operator<<(std::ostream &os, const IPV4& ip){
            std::cout << *ip.ip_address;
            return os;
        };
    private:
        std::string *ip_address;
        unsigned int netmask;
};
