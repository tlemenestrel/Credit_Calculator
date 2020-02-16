//
//  Calculations.hpp
//  Credit_Calculator
//
//  Created by Thomas Le Menestrel on 16/02/2020.
//  Copyright © 2020 Thomas Le Menestrel. All rights reserved.
//

#ifndef Calculations_hpp
#define Calculations_hpp

#include <stdio.h>

#endif /* Calculations_hpp */

class Calculations {
    
public:
    
    double static calculateMonthlyPayments (double annualPercentageRateOfCharge, double amountBorrowed, double duration);
    int static convertFromYearsToMonths (int years);
    
};
