#include<iostream>
#include<string>
#include<algorithm>

using namespace std; 
int main(){

    string str1 , str2, copied, conc,substring;

    cout<<"enter first string"<<endl;
    getline(cin,str1);

    cout<<"enter second strig" <<endl;
    getline(cin , str2);

    //copy 
    copied = str1 ;
    cout<<"copied string is : "<< copied <<endl;



    //conc 

    conc = str1+ str2;
    cout<<"concatenated string"<<conc<<endl;

    //check substring 

    cout<<"enter the substring "<<endl;
    getline(cin ,substring);


    if(str1.find(substring)!= string::npos){
        cout<<"substring is present"<<endl;
    }
    else{
        cout<<"substring is not present"<<endl;
    }

    //equal 

    if(str1 == str2){
        cout<<"string are equal"<<endl;
    }
    else{
        cout<<"string are not equal"<<endl;
    }

    //reverse 

    string rev = str1;

    reverse(rev.begin(), rev.end());

    cout<<"reversed string is : "<< rev<<endl;

    cout<<" lenght of  string 1 "<< str1.length()<<endl;
    cout<<" lenght of  string 2 "<< str2.length()<<endl;

    return 0;

}