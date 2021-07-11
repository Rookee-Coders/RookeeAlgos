/*
Linear search also known as sequential search is an iterative search technique for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.
*/


const prompt = require("prompt-sync")({ sigint: true });


const linearSearch = (arr, key) => {
    // Traversing through the array elements
    for (let i = 0; i < arr.length; i++)
    {
        // Checking if the current element is equal to the number to be found
        if (arr[i] === key)
        {
            return true;
        }
    }
    return false;
}

// Taking input from the user
let n = +prompt("Enter the number of elements : ");

let array = [];
for (let i = 1; i <= n; i++) {
  array.push(+prompt("Enter value : "));
}

const key = +prompt("Enter number to search : ");

// Function call to check the presence of the number
if (linearSearch(array, key))
{
    console.log("Element found in array!");
}
else 
{
    console.log("Element not found in array!");
}

/*

TIME COMPLEXITY: O(n), where n is the size of the array

SPACE COMPLEXITY: O(1)

-->SAMPLE I/O 1:
Enter the number of elements : 5
Enter value - 15
Enter value - 1
Enter value - 67
Enter value - 23
Enter value - 66
Enter number to search : 6
Element not found in array!

-->SAMPLE I/O 1:
Enter the number of elements : 5
Enter value : 15
Enter value : 2
Enter value : 69
Enter value : 4
Enter value : 18
Enter number to search : 18
Element found in array!

*/


