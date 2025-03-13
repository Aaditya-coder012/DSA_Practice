#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=1,b=2;
    if(a-- > 0 && ++b>2){//as the a is post increment which will give the value of a as 1 first and after decrement it will be 0 thereby the first condition if not true (0>0) as there is and operaters  the second condition will be true as b is pre increment which will give the value of b as 3 which is greater true 
        cout<<"Stage1 - Inside If "<<endl; // output
    }
    else{
         cout<<"Stage2 - Inside else ";
    }
    cout<<a<<" "<<b<<endl;//a=0 b=3
}