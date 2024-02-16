#ifndef __array_delete__
#define __array_delete__

#include <cstddef>
#include <utility>
#include <vector>
#include <iostream>

template <typename T>
void array_delete(std::vector<T> &A, std::size_t index)
{
    // WRITE YOUR CODE HERE
    assert(index<A.size());
    std::cout << "index: " << index << std::endl;
    if (index == (A.size() - 1)) {
        A.pop_back();
    } else {
        auto i = A.size() - 1;
        T last = A[i];
        T temp;
        A.pop_back();
        i = i - 1;
        while (i >= index) {
            std::cout << "i: " << i << std::endl;
            temp = A[i]; // starts at second to last element
            A[i] = last;
            last = temp;
            i--;
        }

    }
}

#endif // __array_delete__