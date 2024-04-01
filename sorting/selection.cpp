#include <iostream>
#include <array>
#include <string>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0;i<=n-2;i++){
        int min = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int arr[6];
    int n= sizeof(arr)/sizeof(int);
    cout << "n = " << n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "*******************" << endl;
    selectionSort(arr,n);
     for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}