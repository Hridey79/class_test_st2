//print all repeated no.s with thier frequencies in an array

#include <bits/stdc++.h>
using namespace std;


void RepeatingElement(int* a, int n){
    //we take an unordered map and fill it with element,frequecy of element
    unordered_map<int,int> h;
    for(int i=0;i<n;i++){
        h[a[i]]++;
    }
    cout<<"Repeated Number    Frequency\n";
    for(auto it=h.begin();it!=h.end();it++)
    if(it->second>1)
    cout<<it->first<<"                  "<<it->second<<endl;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    RepeatingElement(arr,n);

    return 0;
}