//
//  Borrower.hpp
//  Credit_Calculator
//
//  Created by Thomas Le Menestrel on 16/02/2020.
//  Copyright © 2020 Thomas Le Menestrel. All rights reserved.
//

#ifndef Borrower_hpp
#define Borrower_hpp

#include <stdio.h>

#endif

class Borrower {
    
public:
    
    Borrower(double annualPercentageRateOfCharge, int amountBorrowed, int duration);
    Borrower (double annualPercentageRateOfCharge, double monthlyPayment, int duration);

    double getMonthlyPayment() const ;
    double getAnnualPercentageRateOfCharge() const;
    int getAmountBorrowed() const;
    int getDuration() const;
    
    void setMonthlyPayments(double monthlyPayment);
    void setAnnualPercentageRateOfCharge(double annualPercentageRateOfCharge);
    void setAmountBorrowed(int amountBorrowed);
    void setDuration(int duration);
    
    double calculateMonthlyPayments ();
    double calculateBorrowingCapacity ();

private:
    
    double monthlyPayment;
    double annualPercentageRateOfCharge;
    int amountBorrowed;
    int duration;
    
};
