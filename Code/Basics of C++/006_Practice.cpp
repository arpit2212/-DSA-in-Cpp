#include<iostream>
#include<algorithm>
#include <numeric>
using namespace std ; 

int main ()

{
   int arr[] = {5, 2, 9, 1, 6};
   int size = sizeof(arr) / sizeof(arr[0]);

   // Sorting
   sort(arr, arr + size);
   cout << "Sorted Array: ";
   for (int i = 0; i < size; i++) cout << arr[i] << " ";

   // Maximum Element
   cout << "\nMax Element: " << *max_element(arr, arr + size);

   // Sum of elements
   cout << "\nSum of Array: " << accumulate(arr, arr + size, 0) << endl;

   cout << "\nBinarry Search " << binary_search(arr, arr + size, 9) << endl;
   
}

