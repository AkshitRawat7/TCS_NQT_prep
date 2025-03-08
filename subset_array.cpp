#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool checkSubset( vector<int> arr1 ,  vector<int> arr2 ,int n , int m){
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    if(m>n){
        return false;
    }

    for(int i = 0;i<m;i++){
        bool present = false;
        for(int j=0; j<n ; j++){
            if(arr2[i] == arr1[j]){
                return true;
                break;
            }
        }

        if(!present) return false;
    }

    return true;
}

int main(){
    vector<int> arr1 = {1,3,7,4,5,2};
    int n = arr1.size();

    vector<int> arr2 = {7,1,3};
    int m = arr2.size();

    int ans = checkSubset(arr1,arr2,n,m);

    if(ans==true){
        cout<< "Is a subset " << endl;
    }else{
        cout<< "Is not a subet " << endl;
    }

    return 0;
}