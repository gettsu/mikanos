#pragma once

#include <cstddef>
#include <cstdint>

template <typename T>
struct ArrayLength {};

template <typename T, size_t N>
struct ArrayLength<T[N]> {
  static const size_t value = N;
};

template <typename T>
class MemMapRegister {
 public:
  T Read() const {
    T tmp;
    for (size_t i = 0; i < len_; ++i) {
      tmp.data[i] = value_.data[i];
    }
  }
}
