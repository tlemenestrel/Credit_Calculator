//
//  Borrower.cpp
//  Credit_Calculator
//
//  Created by Thomas Le Menestrel on 16/02/2020.
//  Copyright © 2020 Thomas Le Menestrel. All rights reserved.
//

#include "Borrower.hpp"
#include "stdlib.h"
#include "tgmath.h"
#include <iostream>

Borrower :: Borrower (double annualPercentageRateOfCharge, int amountBorrowed, int duration) {
    
    this -> annualPercentageRateOfCharge = annualPercentageRateOfCharge;
    this -> amountBorrowed = amountBorrowed;
    this -> duration = duration;
    
}

Borrower :: Borrower (double annualPercentageRateOfCharge, double monthlyPayment, int duration) {
    
    this -> annualPercentageRateOfCharge = annualPercentageRateOfCharge;
    this -> monthlyPayment = monthlyPayment;
    this -> duration = duration;
    
}

double Borrower :: calculateMonthlyPayments () {
    
    return ((amountBorrowed * annualPercentageRateOfCharge / 1200) / (1 - pow((1 + annualPercentageRateOfCharge / 1200),(duration * (-1)))));
    
}

double Borrower :: calculateBorrowingCapacity() {
    
    return ((monthlyPayment * (1 - pow((1 + annualPercentageRateOfCharge / 1200),(duration * (-1))))) / (annualPercentageRateOfCharge / 1200));
    
}

double Borrower :: getMonthlyPayment() const  {
    
    return monthlyPayment;
    
}

double Borrower :: getAnnualPercentageRateOfCharge() const {
    
    return annualPercentageRateOfCharge;
    
}

int Borrower :: getAmountBorrowed() const {
    
    return amountBorrowed;
    
}

int Borrower :: getDuration() const {
    
    return duration;
    
}

void Borrower :: setMonthlyPayments(double monthlyPayment) {
    
    this -> monthlyPayment = monthlyPayment;
    
}

void Borrower :: setAnnualPercentageRateOfCharge(double annualPercentageRateOfCharge) {
    
    this -> annualPercentageRateOfCharge = annualPercentageRateOfCharge;
    
}

void Borrower :: setAmountBorrowed(int amountBorrowed) {
    
    this -> amountBorrowed = amountBorrowed;
    
}

void Borrower :: setDuration(int duration) {
    
    this -> duration = duration;
    
}
