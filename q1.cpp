//print all non repeated integer in min time complexity

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //first we can sort all elements so that repeating elements are together
    try{
        sort(arr,arr+n);
    }
    catch(exception e){
        cout<<"Header file not found"<<endl;
    }
    cout<<"Non repeating numbers are: ";
    //we check if any nearby elements are equal and if equal that means they are repeating
    for(int i=0;i<n;i++){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}