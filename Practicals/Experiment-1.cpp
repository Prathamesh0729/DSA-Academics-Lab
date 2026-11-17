#include <iostream>
#include <set>
using namespace std;

int main(){
    int M, nA,nB, roll ;

    cout<<"total number of students"<<endl;
    cin>> M;

    cout<<"number of student who plays cricket"<<endl;
    cin>>nA;

    set<int> cricket;


    cout<<"roll of of student who play cricket"<<endl;
    for(int i = 0 ; i < nA ; i++){
        cin>>roll;
        cricket.insert(roll);

    }

    cout<<"number of student who plays badminton"<<endl;
    cin>>nB;

    set<int> badminton;


    cout<<"roll of of student who play badminton"<<endl;
    for(int i = 0 ; i < nB ; i++){
        cin>>roll;
        badminton.insert(roll);

    }

    //either cricket or badminton or both

    set<int>either = cricket;
    either.insert(badminton.begin() , badminton.end());


    //both badminton and criket 
    set<int> both;

    for(int student : cricket){

        if(badminton.count(student)){
            both.insert(student);
        }
    }

    //only cricket

    set<int> Onlycricket;

    for(int student : cricket){

        if(!badminton.count(student)){
            Onlycricket.insert(student);
        }
    }
    
    //Onlybadminton 
    set<int> Onlybadminton;

    for(int student : badminton){

        if(!cricket.count(student)){
            Onlybadminton.insert(student);
        }
    }


    //neither cricket or badminton

    int neither = M-either.size();


    cout<<"total number of students : " << M <<endl;

    cout<<"number of students who plays cricket : " <<nA << endl;

    cout<<"number of students who plays badminton : " <<nB << endl;


    cout<<"either : "<<endl;
    for(int student : either){
        cout<< student <<" ";
    }
     cout<<endl;
    cout<<"both :"<<endl;
    for( int student : both) {

        cout<< student << " " ;
         
    }
     cout<<endl;
    cout<< " Onlycricket: " <<endl ; 
    for(int student : Onlycricket){
        cout<< student <<  " "; 

    }
    cout<<endl;

    cout<< " Onlybadminton: " <<endl;
    for(int student : Onlybadminton){
        cout<< student<<" "; 
    }
    cout<<endl;
    cout<< " neither crick or bad : " << neither <<endl;

    return 0;

}