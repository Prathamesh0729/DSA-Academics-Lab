#include<iostream>

using namespace std;


void Revbooks(int a[] , int n ){
    int start =0;
    int end = n-1;

    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }

    cout<<"reverse array is: "<<endl;
    for(int i = 0 ; i<n ; i++){
        cout<<a[i]<<",";
    }
    cout<<endl;
}

void deletedup_withtemp(int a[], int n){

    int b[n] ,j =0;
    b[j++]= a[0];

    for(int i = 1 ;i <n ; i++){
        if(a[i] != a[i-1] ){
            b[j++] = a[i];
        }
    }

    cout<<"array with deleting duplicate"<<endl;
    for(int i =0 ; i<j ; i++){
        cout<<b[i]<<",";
    }
    cout<<endl;
}

void deletedup_withouttemp(int a[] , int n){

    for(int i = 0 ; i <n-1 ;i++){

        if(a[i] == a[i+1]){
            for(int j = i+1; j<n-1 ; j++){

                a[j] = a[j+1];

            }

            n--;
            i--;
        }

        
    }
    cout<<"delete duplicate without using temp"<<endl;

    for(int i= 0 ; i<n ; i++){
        cout<<a[i]<<",";
    }
    cout<<endl;

}   

void morethan500(int a[] , int n){

    int b[n], j=0;
    for(int i = 0 ;i<n;i++){
        if(a[i] > 500){
            b[j] = a[i];
            j++;
        }
        
    }
    cout<<"more than 500 "<<endl;
    for(int i=0 ; i<j;i++){
        cout<<b[i]<<",";
    }
    cout<<endl;
}

void lessthan500(int a[],int n){
    int count =0;
    for(int i = 0; i<n ; i++){
        if(a[i]<500){
            count++;
        }


    }
    cout<<"less than 500: "<<endl;
    cout<<count;

}


int main(){

    int N;
    cout<<"Enter the number of books : "<<endl;
    cin>>N;

    int books[N-1];

    cout<<"enter the price of books in accending order: "<<endl;
    for(int i =0 ; i<N ; i++){
        cin>>books[i];
    }

    int b[100];

    
    Revbooks(books, N);
    deletedup_withtemp(books ,N);
    deletedup_withouttemp(books,N);
    morethan500(books,N);
    lessthan500(books, N);

    
}