#include <iostream>

using namespace std;

class BinarySearch
{
//All the functions below are put in the same Class
    public:
        //Function to input data in numbers (numerical value)
        void input_data(int num[], int n)
        {
            for(i=0;i<n;i++)
            {
                cout<<"Element["<<i<<"] : ";
                cin>>num[i];
            }
        }
        //Function to sort by using Selection Sort before applying the Binary Search
        //Source: Algoritma & Struktur Data dalam Bahasa C/C++, Wantoro J and Sukirman
        void selection_sort(int num[], int n)
        {
            for(i=0;i<n; i++)
            {
                min = i;
                for(j=i+1;j<n;j++)
                {
                    if(num[j]<num[min])
                    {
                        min =j;
                    }
                }
                temp = num[i];
                num[i]=num[min];
                num[min] = temp;
            }
        }

        int serialSearch(int num[],int x, int n)
        {
            for(i=0;i<n; i++)
            {
                if(num[i]==x)
                    return i;

            }
            return -1;
        }
        //Function to apply Binary Search by Iteration
        //Source: https://www.geeksforgeeks.org/binary-search/
        int binarySearchbyIterative(int num[], int l, int r, int x)
        {
            while (l <= r)
            {
            int m = l + (r - l) / 2;

            // Check if x is present at mid
            if (num[m] == x)
                return m;

            // If x greater, ignore left half
            else if (num[m] < x)
                l = m + 1;

            // If x is smaller, ignore right half
            else
                r = m - 1;
            }

            // if we reach here, then element was
            // not present
            return -1;
        }

        //Function to apply Binary Search by Recursion
        //Source : https://www.geeksforgeeks.org/binary-search/
        int binarySearchbyRecursive(int num[], int l, int r, int x)
        {
            int mid = l + (r - l) / 2;

            // If the element is present at the middle
            // itself
            if (num[mid] == x)
                return mid;

            // If element is smaller than mid, then
            // it can only be present in left subarray
            else if (num[mid] > x)
                return binarySearchbyRecursive(num, l, mid - 1, x);

            // Else the element can only be present
            // in right subarray
            else
            return binarySearchbyRecursive(num, mid + 1, r, x);

            // We reach here when element is not
            // present in array
            return -1;
        }

    private:
        int i,j,m;
        int temp, min;
};

int main()
{
    int i,x,z;
    BinarySearch bs;

    cout<<"BIENVENUE to CS Bishops C++"<<endl;
    cout<<"This simple program is to show the Binary Search Result from given numbers. Let's start, Shall we ?"<<endl;
    cout<<"\nHow many numbers do you want ? ";
    cin >> z;
    int arr[z];

    cout<<"\nPlease input the number as a below:" <<endl;
    bs.input_data(arr,z);

    cout << "\nThe result of "<< z <<" input numbers after selection sort such as below" << endl;
    bs.selection_sort(arr, z);
    for(i=0;i<z;i++)
    {
        cout<<"Element["<<i<<"] : "<<arr[i]<<endl;
    }

    cout << "\nYou need to decide the element you want to search"<<endl;
    cout << "Please noted that you may choose only one element from given elements";
    cout<<"\nPlease choose one of the following (";
    for(i=0;i<z; i++)
    {
        cout <<arr[i]<<",";
    }
    cout<<"): ";
    cin >> x;

    //Use the sorted data, this will be applied to the Serial Search
    int result_by_serial_search = bs.serialSearch(arr,x,z);
    //cout << "\nBelow is the Searching Result using Serial Search " << endl;
    if(result_by_serial_search == -1)
        cout<<"\nBy using Serial Search, Element is not present in array  "<< endl;
    else
        cout<<"\nBy using Serial Search, Element is present at Element["<< result_by_serial_search<<"]"<<endl;
    //Use the sorted data, this will be applied to the Binary Search by Iterative and Recursive to compare
    int result_by_binary_iterative = bs.binarySearchbyIterative(arr, 0, z - 1, x);
    int result_by_binary_recursive = bs.binarySearchbyRecursive(arr, 0, z - 1, x);

    //cout << "\nBelow is the Searching Result using both method (Iterative and Recursive Binary Search) to compare: " << endl;
    if(result_by_binary_iterative == -1)
        cout<<"By using Iterative Binary Search, Element is not present in array  "<< endl;
    else
        cout<<"By using Iterative Binary Search, Element is present at Element["<< result_by_binary_iterative<<"]"<<endl;

    if(result_by_binary_recursive == -1)
        cout<<"By using Recursive Binary Search, Element is not present in array  "<< endl;
    else
        cout<<"By using Recursive Binary Search, Element is present at Element["<< result_by_binary_iterative<<"]"<<endl;

    //Checking whether both method are similar each other
    if
    (
     result_by_serial_search == result_by_binary_recursive &&
     result_by_serial_search == result_by_binary_iterative &&
     result_by_binary_iterative == result_by_binary_recursive
     )
        cout<<"\nTherefore, either using Serial Search or Recursive Binary Search or Iterative Binary Search has the similar result"<< endl;
    else
        cout<<"\nOh no !! I need to check the code, it has to be similar"<< endl;

    //Finished
    return 0;
}
