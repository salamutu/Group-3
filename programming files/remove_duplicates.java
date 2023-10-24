import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class remove_duplicates {
    // method removeDuplicates returns an ArrayList with duplicates removed
    public static List<Integer> removeDuplicates(List<Integer> arr, List<Integer> removedElements) {
        // Create ArrayList to store unique elements of arr
        List<Integer> uniqueArr = new ArrayList<>();
        // Loop through all elements in arr
        for (int i = 0; i < arr.size(); i++) {
            // If unique vector does not yet contain element from arr at index i, add element to uniqueArr
            if (!uniqueArr.contains(arr.get(i))) {
                uniqueArr.add(arr.get(i));
            } else {    // Add the element to removedElements if it is already in uniqueArr
                removedElements.add(arr.get(i));
            }
        }
        return uniqueArr;
    }

    public static void main(String[] args) {
        // Test the function
        List<Integer> arr = Arrays.asList(1, 2, 2, 3, 4, 4, 5);
        List<Integer> removedElements = new ArrayList<>();
        List<Integer> uniqueArr = removeDuplicates(arr, removedElements);
        System.out.println("Original array: " + arr);
        System.out.println("Unique array: " + uniqueArr);
        System.out.println("Removed elements: " + removedElements);
    }
}
