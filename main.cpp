#include <iostream>
#include <string>

int main () {

    std::cout << " hi , Please Enter Your First Name :" << std::endl ; 
    std::string fName ;
    std::cin >> fName ;


    std::cout << " Welcome \"<< fName <<"\" Please Enter Your Last Name" << std::endl ;
    std::string lName ;
    std::cin >> lName ;


    return 0 ; 
}
