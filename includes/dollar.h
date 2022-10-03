#ifndef DOLLAR_H_
#define DOLLAR_H_

#include "money.h"

class Dollar : public Money {
 public:
  Dollar(int amount);
  ~Dollar() = default;
  std::unique_ptr<Money> times(int multiplier);
};

#endif
