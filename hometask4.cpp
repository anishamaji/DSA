// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the value of number a:";
//     cin>>a;
//     int b;
//     cout<<"Enter the value of number b:";
//     cin>>b;
//     int c;
//     cout<<"Enter the value of number c:";
//     cin>>c;
//     if(a>b&&a>c){
//         cout<<"a is maximum";
//     }
//     else if(b>c&&b>a){
//         cout<<"b is maximum";
//     }
//     else if (c>a&&c>b){
//         cout <<"c is maximum";
//     }
//     else{
//         cout<<"a b c is equal";
//     }
//     return 0;

// }




#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of number a:";
    cin>>a;
    int b;
    cout<<"Enter the value of number b:";
    cin>>b;
    int c;
    cout<<"Enter the value of number c:";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"a is maximum";
        }

    }
    else if(b>c){
        if(b>a){
        
        cout<<"b is maximum";
        }
    }
    else if (c>a&&c>b){
        cout <<"c is maximum";
    }
    else{
        cout<<"a b c is equal";
    }
    return 0;

}