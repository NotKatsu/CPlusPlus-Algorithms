#include <iostream>
#include "./functions/functions.h"

int main() {
    int number_array[5] = {1, 3, 4, 6, 5};
    int number_to_find = 4;

    int array_length = sizeof(number_array) / sizeof(number_array[0]);

    if (find_number(number_array, array_length, number_to_find) == 1) {
        std::cout << "Found number " << number_to_find << " in array." << std::endl;
    }
    else {
        std::cout << "Couldn't find number " << number_to_find << " in array." << std::endl;
    }
    return EXIT_SUCCESS;
}