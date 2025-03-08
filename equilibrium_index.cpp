#include<iostream>
#include<vector>

using namespace std;

int validIndex(vector<int> arr,int n){

    int totalSum = 0;

    for(int i =0 ; i<n ; i++){
        totalSum += arr[i];
    }

    int leftSum=0 , rightSum = totalSum;


    for(int i = 0; i<n ; i++){
        rightSum -= arr[i];

        if(rightSum == leftSum){
            return i;
        }

        leftSum += arr[i];
    }

    return -1;
}

int main(){
    vector<int> arr = {2,3,-1,8,4};

    int n = arr.size();

    int ans = validIndex(arr,n);

    cout<< ans <<endl;

    return 0;
}
