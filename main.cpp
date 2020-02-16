//
//  main.cpp
//  Credit_Calculator
//
//  Created by Thomas Le Menestrel on 16/02/2020.
//  Copyright © 2020 Thomas Le Menestrel. All rights reserved.
//

#include <iostream>

#include "Borrower.hpp"
#include "Calculations.hpp"

int main(int argc, const char * argv[]) {
    
    int duration;
    double annualPercentageRateOfCharge,amountBorrowed;

    std::cout << "Well, hello there!\n\n";
    
    std:: cout << "To start, please enter the duration of the loan in months: \n\n";
    
    std::cin >> duration;
    
    std::cout << "Now, please enter how much you want to borrow: \n\n";
    
    std::cin >> amountBorrowed;

    std::cout << "Now, please enter the annual percentage rate of charge: \n\n";
    
    std::cin >> annualPercentageRateOfCharge;
    
    Borrower borrower (duration, annualPercentageRateOfCharge, amountBorrowed);
    
    double monthlyPayment = Calculations :: calculateMonthlyPayments(annualPercentageRateOfCharge,amountBorrowed,duration);
    
    std :: cout << "To borrow this amount of money, you will need to monthly pay:\n\n";
    std :: cout << monthlyPayment << "€\n\n";

    return 0;
}
