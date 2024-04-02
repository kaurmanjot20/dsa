#include <iostream>
#include <array>
#include <string>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i=n-1;i>=0;i--){
        int didSwap = 0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]= arr[j];
                arr[j]= temp;
                didSwap=1;
            }
        }
        if(didSwap == 0){
            break;
        }
    }
}
int main(){
    int arr[6];
    int n= sizeof(arr)/sizeof(int);
    cout << "Enter array elements";
    cout << "n = " << n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "*******************" << endl;
    bubbleSort(arr,n);
     for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}