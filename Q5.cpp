//rotate/transpose of matrix

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n][n];

    cout << "The square matrix is:\n";
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout << "Enter the value of arr["<<i+1<<"]["<<j+1<<"] : ";
            cin>>arr[i][j];
        }
    }

    cout<<"Rotated matrix is : "<<endl;
    for(int i= 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[n-j-1][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}