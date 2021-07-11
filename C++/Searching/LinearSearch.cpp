/*
Linear search also known as sequential search is an iterative search technique for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.
*/


#include <iostream>

using namespace std;

bool linearSearch(int arr[], int n, int key)
{
    // Traversing through the array's each element
    for (int i = 0; i < n; i++)
    {
        // Checking if the element is equal to the 
        // the key element (to be searched)
        if (arr[i] == key)
        {
            return true;
        }
    }

    // Search failure
    return false;    
}[


int main() 
{
    // Driver code to get user input and generate output
    int n;
    cout<<"\nEnter number of elements in array: ";
    cin>>n;

    int arr[n];
    int key;
    for (int i = 0; i < n; i++)
    {
        cout<<"\nEnter value for element "<<i+1<<": ";
        cin>>arr[i];
    }

    cout<<"\nEnter element to be searched: ";
    cin>>key;

    if (linearSearch(arr, n, key))
    {
        cout<<"\nThe element was found!\n";
    }
    else
    {
        cout<<"\nThe element is not present in the given array!\n";
    }

    return 0;

}
/*

TIME COMPLEXITY: O(n) where n = size of array

SPACE COMPLEXITY: O(1)

-- > SAMPLE I/O 1:

Enter number of elements in array: 6

Enter value for element 1: 12

Enter value for element 2: 90

Enter value for element 3: 0

Enter value for element 4: 10

Enter value for element 5: 45

Enter value for element 6: 31

Enter element to be searched: 90

The element was found!

-- > SAMPLE I/O 2:

Enter number of elements in array: 5

Enter value for element 1: 12

Enter value for element 2: 34

Enter value for element 3: 90

Enter value for element 4: 78

Enter value for element 5: 51

Enter element to be searched: 8

The element is not present in the given array!

*/

