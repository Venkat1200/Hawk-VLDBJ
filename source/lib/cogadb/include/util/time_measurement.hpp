#ifndef TIME_MEASUREMENT_HPP
#define TIME_MEASUREMENT_HPP

//#include <stdint.h>
#include <cstdint>	//Used with C++11 package
namespace CoGaDB {

  typedef uint64_t Timestamp;

  Timestamp getTimestamp();

}  // end namespace CogaDB

#endif  //#ifndef TIME_MEASUREMENT_HPP
