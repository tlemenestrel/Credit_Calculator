//
//  Borrower.cpp
//  Credit_Calculator
//
//  Created by Thomas Le Menestrel on 16/02/2020.
//  Copyright © 2020 Thomas Le Menestrel. All rights reserved.
//

#include "Borrower.hpp"
#include "stdlib.h"

Borrower :: Borrower (int annualPercentageRateOfCharge, int amountBorrowed, int duration) {
    
    this -> annualPercentageRateOfCharge = annualPercentageRateOfCharge;
    this -> amountBorrowed = amountBorrowed;
    this -> duration = duration;
    
}

int Borrower :: getMonthlyPayment() const  {
    
    return monthlyPayment;
    
}

int Borrower :: getAnnualPercentageRateOfCharge() const {
    
    return annualPercentageRateOfCharge;
    
}

int Borrower :: getAmountBorrowed() const {
    
    return amountBorrowed;
    
}

int Borrower :: getDuration() const {
    
    return duration;
    
}

void Borrower :: setMonthlyPayments(int monthlyPayment) {
    
    this -> monthlyPayment = monthlyPayment;
    
}

void Borrower :: setAnnualPercentageRateOfCharge(int annualPercentageRateOfCharge) {
    
    this -> annualPercentageRateOfCharge = annualPercentageRateOfCharge;
    
}

void Borrower :: setAmountBorrowed(int amountBorrowed) {
    
    this -> amountBorrowed = amountBorrowed;
    
}

void Borrower :: setDuration(int duration) {
    
    this -> duration = duration;
    
}
