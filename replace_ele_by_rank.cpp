#include<iostream>
#include<vector>
#include<set>

using namespace std;

void giveRank(vector<int> arr,int n){

    for(int i=0;i<n;i++){
        set<int> s;
        for(int j=0;j<n;j++){
            if(arr[j] < arr[i]){
                s.insert(arr[j]);
            }
        }

        cout<< s.size() + 1 << " "; //for 1 based indexing;
    }

}

int main(){
    vector<int> arr = {10,5,10,15,10,5};
    int n = arr.size(); // Corrected size calculation

    giveRank(arr,n);

    return 0;
}