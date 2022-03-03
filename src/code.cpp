#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    int diff = left - right;
    return diff*diff;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if (mask < 0 || bit_pos < 0) {
      return false;
    }

    int filter = 1 << bit_pos;
    return mask & filter;
  }

  // Task 3
  int max3(int left, int middle, int right) {
    int m1;
    if (left > middle) {
      m1 = left;
    } else {
      m1 = middle;
    }

    if (m1 > right) {
      return m1;
    } else {
      return right;
    }
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left == nullptr || right == nullptr) {
      return;
    }

    int temp = *left;
    *left = *right;
    *right = temp;
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (arr == nullptr || length <= 0) {
      return 0;
    }

    int sum = 0;
    for (int i = 0; i < length; i++) {
      sum += arr[i];
    }

    return sum;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (arr == nullptr || length <= 0) {
      return nullptr;
    }

    int* max = nullptr;
    for (int i = 0; i < length; i++) {
      if (max == nullptr || *max < arr[i]) {
        max = &arr[i];
      }
    }

    return max;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length <= 0) {
      return nullptr;
    }

    int* arr_fill = new int[length]{};
    std::fill(arr_fill, arr_fill + length, init_value);
    return arr_fill;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (arr_in == nullptr || length <= 0) {
      return nullptr;
    }

    int* new_arr = new int[length]{};
    std::copy(arr_in, arr_in+length, new_arr);
    return new_arr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
      return;
    }

    if (length <= 0) {
      os << "Invalid argument: length\n";
      return;
    }

    if (k <= 0) {
      os << "Invalid argument: k\n";
      return;
    }

    for (int i = 0; i < length; i++) {
      if (i % k == 0) {
        os << arr[i] << '\t';
      }
    }
  }

}  // namespace assignment
