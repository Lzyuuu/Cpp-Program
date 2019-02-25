//
//  DollarAmount.h
//  DollarInterest
//
//  Created by Zhaoyu Lai on 2019/2/23.
//  Copyright © 2019 Zhaoyu Lai. All rights reserved.
//

#include <string>
#include <cmath>

class DollarAmount {
public:
    // initialize amount from an int64_t amount
    explicit DollarAmount(int64_t value) : amount{value} { }
    
    // add right's amount to this object's amount
    void add(DollarAmount right) {
        amount = amount + right.amount;
    }
    
    // subtract right's amount to this object's amount
    void subtract(DollarAmount right) {
        amount = amount - right.amount;
    }
    
    // uses integer arithmetic to calculate interest amount,
    // then calls add with the interest amount
    void addInterest(int rate, int divisor) {
        // create and initialize interest
        DollarAmount interest{
            (amount * rate + divisor / 2) / divisor
        };
        add(interest); // add interest to this object's amount
    }
    
    // return a string representation of a DollarAmount object
    std::string toString() const {
        std::string dollars{std::to_string(amount / 100)};
        std::string cents{std::to_string(std::abs(amount % 100))};
        return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
    }
    
private:
    int64_t amount{0};
};
