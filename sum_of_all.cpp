#include<iostream>
#include<vector>

using namespace std;

int countSum(vector<int> v,int n){
    int sum = 0;

    for(int i=0;i<n;i++)
    {
        sum += v[i];
    }

    return sum;
}


// count avg
int countAvg(int ans,int n){
    return ans/n;
}

int main(){
    vector<int> v = {10,20,30};

    int n = v.size();

    int ans = countSum(v,n);

    int avg = countAvg(ans,n);

    cout<< "Ans " << ans << "Avg " << avg <<endl;
}
