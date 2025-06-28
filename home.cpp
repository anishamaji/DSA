// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     int n;
//     cout<<"enter the value of n = ";
//     cin>>n;
// for (i=1;i<=n;i++){
//     cout<<i<<endl;
// }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {   
//     int sum =0;
//     int i ;
//     int n;
//     cout<<"enter the value of n = ";
//     cin>>n;
//     for(i=1;i<n;i++)
//     cout<<i;
//     sum=sum+i;
//     return 0;

// }

#include <iostream>
using namespace std;
int anisha (int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2 == 0){
            sum = sum+i;
        }
    }
    return sum;
}
int main()
{
    int i;
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    
    int ans = anisha(n);
    // cout<<sum;
    cout<<ans<<endl;
    cout<<anisha(10)<<endl;
    
return 0;
}