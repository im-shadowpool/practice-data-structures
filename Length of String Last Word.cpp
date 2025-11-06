// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Write C++ code here
    string s = "";
    int i;
    int TotalLength = s.length();
    
    cout << "Length: " << TotalLength << endl;
    
    while(s[TotalLength-1] == ' '){
        TotalLength--;
    }
    
   cout << "Length: " << TotalLength << endl;
    
    // cout << s[TotalLength - 1];
    for(i=0; i<(TotalLength); i++){
        if(s[TotalLength-i-1] == ' ' ){
               cout << "Total: " << i;
               return 0;
        }
    }
    
    cout << i;
    
    return 0;
}
