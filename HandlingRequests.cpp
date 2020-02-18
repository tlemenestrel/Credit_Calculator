//
//  HandlingRequests.cpp
//  Credit_Calculator
//
//  Created by Thomas Le Menestrel on 16/02/2020.
//  Copyright © 2020 Thomas Le Menestrel. All rights reserved.
//

#include "HandlingRequests.hpp"
#include "Borrower.hpp"

#include <iostream>

void HandlingRequests :: handlingMonthlyPayments() {
    
    int duration, amountBorrowed;
    double annualPercentageRateOfCharge;
    
    std :: cout << "To start, please enter the duration of the loan in months: \n\n";
    
    std :: cin >> duration;
    
    std :: cout << "Now, please enter how much you want to borrow: \n\n";
    
    std::cin >> amountBorrowed;
    
    std::cout << "Now, please enter the annual percentage rate of charge: \n\n";
    
    std::cin >> annualPercentageRateOfCharge;
    
    Borrower borrower (annualPercentageRateOfCharge, amountBorrowed,duration);
    
    double monthlyPayment = borrower.calculateMonthlyPayments();
    
    std :: cout << "To borrow this amount of money, you will need to monthly pay:\n\n";
    std :: cout << monthlyPayment << "€\n\n";
    
    std :: cout << "Back to the main menu... \n\n";
    
}

void HandlingRequests :: handlingBorrowingCapacity() {
    
    int duration;
    double annualPercentageRateOfCharge, monthlyPayment;
    
    std :: cout << "To start, please enter the duration of the loan in months: \n\n";
    
    std :: cin >> duration;
    
    std :: cout << "Now, please enter how much you want to pay per month: \n\n";
    
    std::cin >> monthlyPayment;
    
    std::cout << "Now, please enter the annual percentage rate of charge: \n\n";
    
    std::cin >> annualPercentageRateOfCharge;
    
    Borrower borrower (annualPercentageRateOfCharge,monthlyPayment,duration);
    
    double borrowingCapacity = borrower.calculateBorrowingCapacity();
    
    std :: cout << "With these conditions, you will be able to borrow:\n\n";
    std :: cout << borrowingCapacity << "€\n\n";
    
    std :: cout << "Back to the main menu... \n\n";
    
}
