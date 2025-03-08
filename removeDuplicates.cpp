#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int> &arr,int n){
   int i=0;
    for(int j=0;j<n;j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }

   return i+1;
}

int main(){
    vector<int> arr = {5,5,5,10,10,10,20,20,25};
    int n = arr.size(); // Corrected size calculation

    int k = removeDuplicates(arr,n);

    for(int i=0;i<k;i++){
        cout<< arr[i] << " ";
    } 

    cout<<endl;

    return 0;
}