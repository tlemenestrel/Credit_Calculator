//
//  main.cpp
//  Credit_Calculator
//
//  Created by Thomas Le Menestrel on 16/02/2020.
//  Copyright © 2020 Thomas Le Menestrel. All rights reserved.
//

#include <iostream>

#include "Borrower.hpp"
#include "HandlingRequests.hpp"

int main(int argc, const char * argv[]) {

    std::cout << "Well, hello there!\n\n";
    
    bool mainCondition = true;
    
    while (mainCondition == true) {
    
        std::cout << "Enter m to calculate the monthly payments for a certain loan, b to calculate how much you can borrow or q to quit: \n\n";

        char charCommandLine;
        std::cin >> charCommandLine;
    
        if (charCommandLine == 'm') {
            
            HandlingRequests :: handlingMonthlyPayments();
            
        }
    
        else if (charCommandLine == 'b') {
            
            HandlingRequests :: handlingBorrowingCapacity();
            
        }
    
        else if (charCommandLine == 'q') {
            
            std :: cout << "Quitting... \n\n";
            mainCondition = false;
            
        }
    
        else {
            
            std::cout << "Wrong input - please try again... \n\n";
            
        }
    }

    return 0;
}
