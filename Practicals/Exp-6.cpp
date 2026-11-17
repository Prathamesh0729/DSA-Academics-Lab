#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main(){
    list<int> A ,B;
    int N,nA,nB;
    int student;
    cout<<"enter the total: "<<endl;
    cin>>N;

    cout<<"enter the number of student who loves vanilla"<<endl;
    cin>>nA;

    cout<<"enter the number of student who loves Butterscotch"<<endl;
    cin>>nB;

    cout<<"vanilla: "<<endl;
    for(int i =0 ; i<nA;i++){
        cin>> student;
        A.push_back(student);

    }

    cout<<"Butterscotch: "<<endl;
    for(int i =0 ; i<nA;i++){
        cin>> student;
        B.push_back(student);
        
    }


    //union 

    list<int> U = A ;
    for( int x : B){
        if(find(U.begin(),U.end(),x ) == U.end()){
            U.push_back(x);
        }
    }

    //Both

    list <int> I ;
    for(int x : A){
        if(find(B.begin(),B.end(),x) != B.end()){
            I.push_back(x);
        }
    }

    //Only Vanilla
    list<int> V;
    for(int x : A){
        if(find(B.begin(),B.end() , x) == B.end()){
            V.push_back(x);
        }
    }

    list<int> BU;
    for(int x : B){
        if(find(A.begin(),A.end() , x) == A.end()){
            BU.push_back(x);
        }
    }

    int niether = N - U.size();

}
