#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter a number n: ";
    cin >> n;

    if (n==1) {
        cout << "Not a prime number" << endl;  //as 1 is not a prime number in any case
        return 0;
    }

    bool isprime = true; //Assume that n is prime 

    for(int i=2;i<=sqrt(n);i++){ //as the max prime can be square root of n
        if(n%i==0){
            isprime=false; //this statement shows the number is not prime
            break; //here the condition break so that the condition will not run further
        }
    }

    if(isprime){ // here isprime means is number applies the status of prime also it will run only for true value
        cout<<"Isprime"<<endl;
    }

    else{
        cout<<"Is not prime"<<endl;
    }
}