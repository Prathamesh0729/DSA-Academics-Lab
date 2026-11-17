
#include <iostream>
using namespace std;

// Insertion Sort
void insertionSort(float a[], int n)
{
    
    for (int i = 1; i < n; i++)
    {
        int j = i;

        while (j > 0 && a[j] < a[j - 1])
        {
            swap(a[j],a[j-1]);

            j--;
        }
    }
}


// Shell Sort

void shellSort(float a[], int n)
{
    for (int gap = n/2; gap > 0; gap = gap/2)
    {
        for (int i = gap; i < n; i++)
        {
            int j = i;

            while (j >= gap && a[j] < a[j-gap])
            {
                swap(a[j], a[j-gap]);
                j = j-gap;
            }
        }
    }
}


// Display Top Five Scores
void displayTopFive(float a[], int n)
{
    cout << "\nTop Five Scores:\n";

    for (int i = n - 1; i >= n - 5; i--)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    int n, choice;

    cout << "Enter number of students: ";
    cin >> n;

    if (n < 5 || n > 100)
    {
        cout << "Enter students between 5 and 100.";
        return 0;
    }

    float a[100], b[100];

    cout << "Enter second year percentages:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    cout << "\n1. Insertion Sort";
    cout << "\n2. Shell Sort";
    cout << "\nEnter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        insertionSort(a, n);
        cout << "\nSorted using Insertion Sort";
        displayTopFive(a, n);
    }
    else if (choice == 2)
    {
        shellSort(b, n);
        cout << "\nSorted using Shell Sort";
        displayTopFive(b, n);
    }
    else
    {
        cout << "Invalid choice!";
    }

    return 0;
}
