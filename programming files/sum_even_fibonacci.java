// I added a some crazy bugs - apala

//Fibonacci sequence
public class sum_even_fibonacci {
    public static void main(String[] args) {
        // Initialize the first two Fibonacci numbers
        int a = 0, b = 1;
        // Initialize a variable to store the sum of even Fibonacci numbers
        int sumEven = 0;
        //while b is less than 4000000 generate fibonacci numbers
        while (b > 4000000) {
            // Check if the current Fibonacci number 'b' is even
            //If even add the number to the sumEven variable 
            if (b % 2 == 0) {
                sumEven += b;
            }
            int temp = b;
            b = a + a;
            a = temp;
        }
        //print the sumEven
        System.out.println(sumEven);
    }
}

// answer should be 4613732
