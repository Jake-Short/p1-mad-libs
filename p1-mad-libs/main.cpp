//
//  main.cpp
//  p1-mad-libs
//
//  Created by Jake Short on 1/11/22.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    std::cout << "Enter an adjective: ";
    std::string adjective_1;
    std::cin >> adjective_1;
    
    std::cout << "Enter a noun: ";
    std::string noun_1;
    std::cin >> noun_1;
    
    std::cout << "Enter an adjective: ";
    std::string adjective_2;
    std::cin >> adjective_2;
    
    std::cout << "Enter a verb: ";
    std::string verb_1;
    std::cin >> verb_1;
    
    std::cout << "Enter a verb: ";
    std::string verb_2;
    std::cin >> verb_2;
    
    std::cout << "Enter an adjective: ";
    std::string adjective_3;
    std::cin >> adjective_3;
    
    std::cout << "Enter a noun: ";
    std::string noun_2;
    std::cin >> noun_2;
    
    std::cout << "Enter a verb: ";
    std::string verb_3;
    std::cin >> verb_3;
    
    std::cout << "Enter a verb: ";
    std::string verb_4;
    std::cin >> verb_4;
    
    std::cout << "Enter an adjective: ";
    std::string adjective_4;
    std::cin >> adjective_4;
    
    std::cout << "Enter a noun: ";
    std::string noun_3;
    std::cin >> noun_3;
    
    std::cout << "I am going camping near a " << adjective_1 << " " << noun_1 << " this summer. Camping is super " << adjective_2 << " because you get to " << verb_1 << " and " << verb_2 << ". After getting to the campground, we will eat " << adjective_3 << " " << noun_2 << ". Then, we will " << verb_3 << " and " << verb_4 << ". Finally, after our " << adjective_4 << " adventures, we will drive our " << noun_3 << " all the way back home.";
    
    return 0;
}
