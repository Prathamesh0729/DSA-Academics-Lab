
#include <iostream>
using namespace std;

// Function to partition the array
int partition(float arr[], int low, int high)
{
    float pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort function
void quickSort(float arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int n;
    float arr[100];

    cout << "Enter number of students: ";
    cin >> n;

    if (n < 5 || n > 100)
    {
        cout << "Please enter students between 5 and 100.";
        return 0;
    }

    cout << "Enter percentages of students:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sort array in ascending order
    quickSort(arr, 0, n - 1);

    cout << "\nSorted percentages in ascending order:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Display top five scores
    cout << "\n\nTop five scores:\n";
    for (int i = n - 1; i >= n - 5; i--)
    {
        cout << arr[i] << "%\n";
    }

    return 0;
}
