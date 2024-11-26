#include <iostream>
#include <string>
#include "Sales_item.h"
struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
//    int i = 42;
//    const int &r = i;
////    auto j = i; const auto &k = i; auto *p = &i;
////    const auto j2 = i, &k2 = i;
//    const auto *k = &r;
    const int ci = 0, &cj = ci;
    decltype(ci) x = 0;
//    decltype(cj) y = x;
//    decltype(cj) z;
    int i = 42, *p = &i, &r = i;
//    decltype((i)) d;
    decltype(i) e;
}
