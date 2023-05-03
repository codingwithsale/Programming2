#include <iostream>

int* array_reverse(const int array[], int size);

int main() {

    int original_array[5] = {1, 2, 3, 4, 5};
    int original_array_size = sizeof(original_array) / sizeof(int);
    int* new_array_pointer;

    new_array_pointer = array_reverse(original_array, original_array_size);

    std::cout << "{";

    for (int i = 0; i < original_array_size; i++) {

        if (i == original_array_size - 1){
            std::cout << *(new_array_pointer + i) << "}" << std::endl;
            break;
        }

        std::cout << *(new_array_pointer + i) << ", ";
    }

    // delete[] new_array_pointer;

    return 0;
}

int* array_reverse(const int array[], int size) {

    /*
     * The pointer is allocated inside the function.
     * Upon the functions terminations all pointers inside a function
     * are deallocated, meaning the return value may be something that
     * we do not expect. This is fixed with the "new" keyword. In C++
     * we can even define the allocated size. Which is cool.
     */
    
    int* new_array_pointer = new int[size]; 
    int j = 0;

    for (int i = size - 1; i >= 0; i--) {
        new_array_pointer[j] = array[i];
        j++;
    }

    return new_array_pointer;
}