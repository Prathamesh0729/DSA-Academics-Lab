#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str1;
    string str2;

    cout<<"enter str1 :"<<endl;
    getline(cin ,str1);

    cout<<"enter str2 : "<<endl;
    getline(cin , str2);


    //copied

    string copy = str1;
    cout<<"copied string 1 is : "<<copy<<endl;


    //conc 
    string conc = str1+str2;
    cout<<"conc string is : "<<conc<<endl;

    //substring 
    string substring;
    cout<<"enter the substring : "<<endl;
    getline(cin , substring);

    if(str1.find(substring) != string :: npos ){
        cout<<"substring found"<<endl;
    }
    else{
        cout<<"substring is not found"<<endl;
    }

    //equal 
    if(str1 == str2 ){
        cout<<"strings are equal"<<endl;
    }
    else{
        cout<<"string are not equal"<<endl;
    }

    string rev =str1;
    reverse(rev.begin(), rev.end());

    cout<<"reverse is : "<<rev<<endl;
    cout<<"lenght is : "<<str1.length();

}