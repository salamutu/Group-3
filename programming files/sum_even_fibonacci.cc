#include <iostream>

int main()
{
    // initialize variables
    int a = 0, b = 1;
    int sum_even = 0;
    while (b < 4000000) {

        // check to see if value is even
        if (b % 2 == 0) {
            // if even theen add to sum of the even numbers
            sum_even += b;
        }
        // modify variables accordingly
        int temp = b;
        b = a + b;
        a = temp;
    }
    // display results
    std::cout << sum_even << std::endl;

    return 0;
}

// answer should be 4613732
