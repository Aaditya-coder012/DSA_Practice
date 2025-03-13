#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b=1;
    a=10;
    if(++a) // it is pre increment as of we know any non zero number in c++ is considered  to be true so the output will go with the value of b which is 1
    cout<<b;
    else
    cout<<++b;
}