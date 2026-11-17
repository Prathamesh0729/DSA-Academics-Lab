#include<iostream>

using namespace std;
int main(){
    int N;
    cout<<"enter the total number of students"<<endl;
    cin>>N;

    int marks[N];
    cout<<"enter the students marks (-1 is the student is absent)";

    for(int i = 0 ;i<N ; i++){
        cout<<"\n enter the marks of student-"<< i+1<<": ";
        cin>>marks[i];
    }

    int total =0 ;
    int absent =0 ;
    int lowest = INT_MAX;
    int highest = INT_MIN;

    for(int i = 0 ; i<N; i ++ ){

        if(marks[i] != -1){
            total+= marks[i];
            lowest = min(lowest , marks[i]);
            highest = max(highest , marks[i]);
        }
        else{
            absent++;
        }

    }

    int avg = total/N;

   
    int most =0;
    int freq = 0;
    for(int i =0 ; i<N ; i++){
        int prev_freq = 0;
        freq =0;
        for(int j = 0 ; j<N ; j++){
            if(marks[i] == marks[j]){
                freq ++;
            }
        }
        if(prev_freq < freq){
            most = marks[i];
        }
        else{
            prev_freq = freq;

        }
    }

    cout<<"total marks obtain "<< total << endl;
    cout<<" avg is : "<< avg <<endl;
    cout<<" number of absent students << " << absent <<endl;
    cout<<"lowest marks : "<<lowest << endl;
    cout<<"highest arks : " << highest << endl;


    cout<<"most occuring marks are"<<most<<endl;



}