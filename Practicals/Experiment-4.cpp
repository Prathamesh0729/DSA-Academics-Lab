#include<iostream>
#include<string>

using namespace std;
int main(){

    string member[6] = {
        "prathamesh" , "rakesh" , "suresh", "ramesh", "rahul","ritesh"};

    int count =0 ;
    cout<<"commitee is : "<<endl;

    for(int i = 0; i<6;i++){
        for(int j = i+1 ; j<6 ; j++){
            for(int k = j+1 ; k<6 ; k++){
                count++;
                cout<<"commitee "<< count << ":"<< member[i]<<","<< member[j] << "," <<member[k] <<endl;
            }

        }
    }

    cout<<"total commitee is formed "<< count<<endl;
}