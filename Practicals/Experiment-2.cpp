#include<iostream>

using namespace std;

int main(){
    int N ; 

    cout<<" enter the number of total students"<<endl;
    cin>> N;

    int marks[N];


    cout<<"enter the marks of students (-1 of abesent one)"<<endl;
    for(int i =0 ; i< N ; i ++){

        cin>> marks[i];
    }


    int total = 0;
    int present = 0;
    int lowest = INT_MAX;
    int highest = INT_MIN ;



    for(int i = 0 ; i<N ; i++){
        if(marks[i] !=-1 ){
            present++;
            total += marks[i];


            if(marks[i] < lowest){
                lowest = marks[i];
            }
            if(marks[i] > highest){
                highest = marks[i];
            }

        }

    }

    int avg = total/ present;

    //freqency 
    int max_freq = 0;
    int max_occ = 0 ; 

    for(int i = 0 ; i < N;i++){
        if(marks[i] != -1){
            int freq = 0 ;
            for(int j = i+1 ; j<N; j++){

                if(marks[i] == marks[j]){
                    freq += 1;
                }
                if(freq > 1){
                    if(max_freq < freq){
                        max_occ = marks[i];
                    }
                    
                }
            }   
        
        }
    }
    


    cout<<"total marks obtain "<< total << endl;
    cout<<" avg is : "<< avg <<endl;
    cout<<" number of present students << " << present <<endl;
    cout<<"lowest marks : "<<lowest << endl;
    cout<<"highest arks : " << highest << endl;


    cout<<"max occuring marks are"<<max_occ<<endl;

    



}