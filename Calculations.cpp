//
//  Calculations.cpp
//  Credit_Calculator
//
//  Created by Thomas Le Menestrel on 16/02/2020.
//  Copyright © 2020 Thomas Le Menestrel. All rights reserved.
//

#include "Calculations.hpp"
#include "stdlib.h"
#include "tgmath.h"

double Calculations :: calculateMonthlyPayments(double annualPercentageRateOfCharge, double amountBorrowed, double duration) {
    
    return ((amountBorrowed * annualPercentageRateOfCharge / 1200) / (1 - pow((1 + annualPercentageRateOfCharge / 1200),((-1)*duration))));
            
    }

int Calculations :: convertFromYearsToMonths (int years) {
    
    return (years * 12);
    
}
