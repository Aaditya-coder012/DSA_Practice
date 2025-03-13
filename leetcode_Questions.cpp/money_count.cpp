#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the amount : ";
    cin>>n;
    int rem=0;
    int c100 = 0,c50 = 0,c20 = 0,c1 = 0;
    switch(1){
        case 1 : 
            c100 = n/100;
            rem = n%100;
        
        case 2 :
            c50 = n/50;
            rem = n%50;

        case 3 : 
            c20 = n/20;
            rem = n%20;

        case 4 : 
            c1 = n/1;
            rem = n%1;

    }
    cout<<"100: "<<c100<<endl<<"50: "<<c50<<endl<<"20: "<<c20<<endl<<"1: "<<c1;
}