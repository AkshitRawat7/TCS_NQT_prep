#include<iostream>
#include<vector>

using namespace std;

void countNum(vector<int> arr,int n){
    vector<bool> visited(n,false);//initialise the array all with false 
    
    for(int i=0;i<n;i++){
        if(visited[i]==true){
            continue;
        }

        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }

        cout<< arr[i] << " " << count << endl;
    }
}

int main(){
    vector<int> arr = {10,5,10,15,10,5};
    int n = arr.size(); // Corrected size calculation

    countNum(arr,n);

    return 0;
}