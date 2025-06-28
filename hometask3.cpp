#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>=21){
        cout<<"you are eligble for vote but driving";
    }
    else if(age>=18){
        cout<<"you are eligble for vote and not for driving";
    }
    else{
        cout<<"you are eligble not for vote but not for driving";
    }
return 0;
}