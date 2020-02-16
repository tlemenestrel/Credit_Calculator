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
    
    Borrower(int annualPercentageRateOfCharge, int amountBorrowed, int duration);
    
    int getMonthlyPayment() const ;
    int getAnnualPercentageRateOfCharge() const;
    int getAmountBorrowed() const;
    int getDuration() const;
    
    void setMonthlyPayments(int monthlyPayment);
    void setAnnualPercentageRateOfCharge(int annualPercentageRateOfCharge);
    void setAmountBorrowed(int amountBorrowed);
    void setDuration(int duration);

private:
    
    int monthlyPayment;
    int annualPercentageRateOfCharge;
    int amountBorrowed;
    int duration;
    
};
