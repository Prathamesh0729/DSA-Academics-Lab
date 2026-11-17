#include<iostream>
using namespace std;

void SS(float a[], int n){
    int min =0;
    for(int i = 0; i<n;i++){
        min = i;
        for(int j = i+1 ; j<n ; j++){
            if(a[j] > a[min]){
                min = j;
            }
            swap(a[i],a[min]);

        }
    }
}

void BS(float a[] , int n){
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j<n-i-1; j++){
            if( a[j] > a[j+1]){
                swap(a[j] , a[j+1]);
            }
        }
    }
}

void display(float a[],int n){
    for(int i = n-1 ; i >= n-5 ; i--){
        cout<<a[i]<<",";
    }
}

int main(){
    int n , choice;
    cout<<"enter the total number of student"<<endl;
    cin>>n;

    if(n <5){
        cout<<"enter at least 5"<<endl;
    }


    float a[100], b[100];

    cout << "Enter student percentages:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    cout << "\n1. Selection Sort";
    cout << "\n2. Bubble Sort";
    cout << "\nEnter choice: ";
    cin >> choice;

    if(choice == 1){
        SS(a, n);
        display(a,n);
    }
    else if(choice == 2){
        BS(b,n);
        display(b,n);
    }
    else{
        cout<<"invalid input"<<endl;
    }
    return 0;
}