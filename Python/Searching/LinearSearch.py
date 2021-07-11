# Linear search also known as sequential search is an iterative search technique for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.


def LinearSearch(array, value):
    """
    Function to implement linear search where each 
    element of array is consecutively checked to
    find the key element
    """
    # Traversing through each element of the array
    for i in range(len(array)):
        # Comparing current array element with the
        # element to be searched
        if array[i] == value:
            return True

    return False


def main():
    """
    Driver code to generate the required input/output
    """
    arr = []
    n = int(input('Enter the number of elements : '))
    for i in range(n):
	    element = int(input('Enter value : '))
	    arr.append(element)

    num = int(input("Enter the value to be searched : "))

    if (LinearSearch(arr, num)):
        print('Element was found!')
    else:
        print('Element not found!')    


if __name__ == '__main__':
    main()


# TIME COMPLEXITY: O(n), where n is size of array
# SPACE COMPLEXITY: O(1)

# SAMPLE I/O 1:
# Enter the number of elements: 6
# Enter value : 12
# Enter value : 64
# Enter value : 22
# Enter value : 1
# Enter value : 76
# Enter value : 2
# Enter the value to be searched : 76
# Element was found!

# SAMPLE I/O 2:
# Enter the number of elements : 5
# Enter value : 565
# Enter value : 343
# Enter value : 12
# Enter value : 89
# Enter value : 66
# Enter the value to be searched : 2
# Element not found!


