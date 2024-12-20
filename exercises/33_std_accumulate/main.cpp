﻿#include "../exercise.h"
#include <numeric>

// READ: `std::accumulate` <https://zh.cppreference.com/w/cpp/algorithm/accumulate>

using namespace std;
int main(int argc, char **argv) {
    using DataType = float;
    int shape[]{1, 3, 224, 224};
    // TODO: 调用 `std::accumulate` 计算 `shape` 的元素之积
    int size = accumulate(begin(shape),end(shape),1,multiplies<int>());
    ASSERT(size = 602112, "4x1x3x224x224 = 602112");
    return 0;
}
