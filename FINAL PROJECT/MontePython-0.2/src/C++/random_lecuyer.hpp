#ifndef __RANDOM_H__
#define __RANDOM_H__

#include <cmath>
#include <iostream>
#include "RngStream.h"

#ifdef __cplusplus
extern "C" {
#endif

class Random{
private:
  long idum;
  RngStream s;

public:

  Random();
  Random(long idum_);
  
  long get_idum();

  // normal random variate generator
  double gran(double s=.1, double m=.5);

  // uniform dist random generator
  double ran1();
  
};
#ifdef __cplusplus
}
#endif

#endif
