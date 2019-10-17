//CS469 - Assignment 2 for Question 2 - MERGESORT in C++ Code
//by Edmond Hendrik Jacob Ngantung - ID#002258356

#include <iostream>
#define Max_Num_Element 9999

using namespace std;

class MergeSort
{
//All the functions below are put in the same Class
    public:

    void input_data(int input_num[], int n)
    {
        for(p=0;p<n;p++)
        {
            cout<<"Input Element["<<p<<"] : ";
            cin>>input_num[p];
        }
    }

    void print_data(int print_num[], int n)
    {
        for(q=0;q<n;q++)
        {
            cout<<print_num[q]<<"  ";
        }
    }

    //These functions below is to sort numbers by using MergeSort
    //Source: Algoritma & Struktur Data dalam Bahasa C/C++, Wantoro J and Sukirman
    void merge(int *a, int low, int high, int mid)
    {
        i=low;
        k=low;
        j = mid+1;

        while(i <= mid && j<= high)
        {
            if(a[i]<a[j])
            {
                c[k]=a[i];
                k++;
                i++;
            }
            else
            {
                c[k] = a[j];
                k++;
                j++;
            }
        }
        while(i<=mid)
        {
            c[k]=a[i];
            k++;
            i++;
        }
        while(j<=high)
        {
            c[k]=a[j];
            k++;
            j++;
        }
        for(i=low;i<k;i++)
        {
            a[i]=c[i];
        }
    }

    void mergesort(int *a, int low, int high)
    {
        if(low < high)
        {
            mid = (low + high)/2;
            mergesort(a,low,mid);
            mergesort(a,mid+1,high);
            merge(a,low,high,mid);
        }
    }

    //This function below is to check if the array is sorted or not
    //Source: https://www.geeksforgeeks.org/program-check-array-sorted-not-iterative-recursive/
    bool arraySortedOrNot(int check_arr[],int n)
    {
        //Array has one or no element
        if(n==0 || n==1)
            return true;
        for(r=1;r<n;r++)
        {
            //Unsorted pair found
            if(check_arr[r-1]>check_arr[r])
                return false;
        }
        //No unsorted pair found
        return true;
    }

    private:
        int i,j,k,p,q,r;
        int c[Max_Num_Element],mid;
};



int main()
{
    int z,s;
    //Declare Object for the MergeSort Class
    MergeSort ms;

    cout<<"BIENVENUE to CS Bishops C++"<<endl;
    cout<<"This simple program is to show the MERGE SORT from given input numbers. ";
    cout<<"Let's start, Shall we ?"<<endl;
    cout<<"How many numbers do you want ? ";
    cin >> z;
    //Declare array with the given z numbers
    int arr[z];
    ms.input_data(arr, z);

    cout<<"\nBefore SORTED : ";
    ms.print_data(arr, z);
    cout<<endl;

    //Check whether the Elements in the array are Sorted or Not. If not, then Apply MergeSort
    s=0;
    while(ms.arraySortedOrNot(arr,z)==false)
    {
        cout<<endl;
        ms.mergesort(arr,0,z-1);
        ms.print_data(arr, z);
        if(ms.arraySortedOrNot(arr,z)==true)
            cout<<"Sorted At Last, Yeay !!\n";
        else
            cout<<"Not Sorted Yet, then do Merge Sorting again";
        s++;
        //If too many trials, then the System will be Aborted
        if(s>20)
        {
            cout<<"\n\nCannot be Sorted as the result is not being converged,";
            cout<<" unfortunately the system will be aborted as too many iterations and save your memory\n";
            return -1;
        }
    }

    cout<<"\nAfter SORTED  : ";
    ms.print_data(arr, z);
    cout<<"\nSorted in " <<s<<" times merge sorting\n";

    return 0;
}
