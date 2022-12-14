#include<iostream>
using namespace std;

void DecToBin(int n){
   if (n==0)
   {
    return;
   }
   
    // if(n==1){
    //     return 1;
    // }
    // if(n==0){
    //     return;
    // }   
    // else{
        DecToBin(n/2);
        if(n&1){
            cout << "1";
            //answer = (answer*10) + 1;
        }
        else{
            cout << "0";
        }
        
    //}
}


int main()
{
    int n;
    cin >> n;
    DecToBin(n);
    
 return 0;
}