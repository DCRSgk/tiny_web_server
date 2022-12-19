#include <iostream>
#include <string>

// only in c++ 17 or higher

namespace base {

template <typename T> class Any {
public:
  Any(T t) { value_ = t; }

private:
  T value_;
};
} // namespace base