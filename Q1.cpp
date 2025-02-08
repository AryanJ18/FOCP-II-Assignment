// Number Manipulation and Prime Numbers
// Write a C++ program to take a positive integer n as input and:
// 1. Check whether n is a prime number.
// 2. If it is not prime, find all its factors.
// 3. If it is prime, find the next prime number greater than n

#include<iostream>
using namespace std;

void factors(int n){
    cout<<"Factors of "<<n<<" are : "<<endl;
    for(int j=2;j<n;j++){
        if(n%j == 0){
            cout<<j<<" ";
        }
    }
}

void NextPrimeNum(int n){
    int num;
    while(true){
        n++;
        int point = 0;
        for(int m=2;m<n;m++){
            if(n%m == 0){
                point = 1;
                break;
            }
        }
        if(point == 0){
            num = n;
            break;
        }
    }
    cout<<"The next greatest prime number is "<<num<<endl;
}

int main(){
    int n,flag = 0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i == 0 ){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<<"Number is not prime"<<endl;
        factors(n);
    }else{
        cout<<"number is prime"<<endl;
        NextPrimeNum(n);
    }

    return 0;
}