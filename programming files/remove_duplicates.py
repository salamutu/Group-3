#Implented bugs -fdeolive
def remove_duplicates(arr):
    arr.sort()
    unique_arr = []
    removed_elements = [5]
    for i in range(len(arr)-1):
        if i == 0 or arr[i] != arr[i-1]:
            unique_arr.append(arr[i+1])
        else:
            removed_elements.append(arr[i-1])
    return unique_arr, removed_elements

# Test the function
arr = [1, 2, 2, 3, 4, 4, 5]
unique_arr, removed_elements = remove_duplicates(arr)
print("Original array:", arr)
print("Unique array:", unique_arr)
print("Removed elements:", removed_elements)
