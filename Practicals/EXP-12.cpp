#include<iostream>

using namespace std;


int partitian(float a[] , int low, int high){
    
    float pivot = a[high];
    int i = low -1;

    for( int j = low ; j<high ; j++){
        if(a[j]<=pivot){
            i++;
            swap(a[j],a[i]);
            
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}

void Quicksort(float a[], int low ,int high){

    if(low<high){
        int pi = partitian(a,low,high);

        Quicksort(a,low,pi-1);
        Quicksort(a,pi+1,high);


    }
}
int main(){

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
    Quicksort(arr, 0, n - 1);

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