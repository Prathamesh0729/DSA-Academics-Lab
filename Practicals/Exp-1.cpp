#include<iostream>
#include<set>

using namespace std;
int main(){

    int N,nA,nB,student;
    cout<<"enter the total number of students"<<endl;
    cin>>N;

    set<int> A,B;

    cout<<"total number students who plays Cricket : "<<endl;
    cin>>nA;

    cout<<"enter the roll number of students :"<<endl;
    for(int i = 0 ; i<nA ; i++){
        cin>>student;
        A.insert(student);

    }

    cout<<"total number students who plays badminton : "<<endl;
    cin>>nB;

      cout<<"enter the roll number of students :"<<endl;
    for(int i = 0 ; i<nB ; i++){
        cin>>student;
        B.insert(student);
    }


    //either 

    
    set<int> either;
    either = A;
    either.insert(B.begin(),B.end());

    //both
    set<int> both;
 
    for(int x:A){
        if(B.count(x)){
            both.insert(x);
        }
    }

    //onlyCricket
    set<int> OnlyCricket;
    for(int x : A){
        if(!B.count(x)){
            OnlyCricket.insert(x);
        }
    }
    set<int> OnlyBadminton;
    for(int x: B){
        if(!A.count(x)){
            OnlyBadminton.insert(x);
        }
    }

    //nither 

    int nither = N-either.size();

    cout<<"total number of students : " << N <<endl;

    cout<<"number of students who plays cricket : " <<nA << endl;

    cout<<"number of students who plays badminton : " <<nB << endl;


    cout<<"either : "<<endl;
    for(int x : either){
        cout<< x <<" ";
    }
     cout<<endl;
    cout<<"both :"<<endl;
    for( int x : both) {

        cout<< x << " " ;
         
    }
     cout<<endl;
    cout<< " Onlycricket: " <<endl ; 
    for(int x : OnlyCricket){
        cout<< x <<  " "; 

    }
    cout<<endl;

    cout<< " Onlybadminton: " <<endl;
    for(int x : OnlyBadminton){
        cout<< x<<" "; 
    }
    cout<<endl;
    cout<< " neither crick or bad : " << nither <<endl;

    return 0;




}