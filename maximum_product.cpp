#include<iostream>
#include<vector>

using namespace std;

int calProduct(vector<int> arr , int n){

    int product = 0;

    int result = arr[0];
    for(int i=0;i<n-1;i++){
        int p = arr[i];
        for(int j = i+1;j<n;j++){
            result = max(result,p);
            p *= arr[j];
        }         
        
        result = max(result,p);
    }

    return result;
}

int main(){
    vector<int> arr = {1,4,-5,6,2,3};
    int n = arr.size();

    int ans = calProduct(arr,n);

    cout<< ans <<endl;

    return 0;
}