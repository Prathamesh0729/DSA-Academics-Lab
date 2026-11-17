#include<iostream>
#include<string>

using namespace std;
int main(){
    string member[6] = { "pono" ,"poornima" ,"Qt" , "rude" ,"manjru" , "rani"};

    for(int i = 0;i<6;i++){
        for(int j = i+1 ;j<6;j++){
            for(int k = j+1 ; k<6; k++){

                cout<<member[i]<<","<<member[j]<<","<<member[k]<<","<<endl;
            }
        }
    }


}