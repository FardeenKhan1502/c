#include <iostream>
// WRITE YOUR CODE HERE
int main() {
    int array[] = {1, 2, 3, 4, 5};

    // Iterate through the array using a for loop.
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        std::cout << array[i] << std::endl;
    }

    return 0;
}
