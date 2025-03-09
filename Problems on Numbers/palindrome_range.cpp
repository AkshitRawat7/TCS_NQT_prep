#include<iostream>

using namespace std;

bool isPalindrome(int i){
    int reverse = 0;
    int temp = i;
    while(temp>0)
    {
        reverse = (reverse*10) + temp%10;
        temp = temp/10;
    }

    if(i==reverse){
        return true;
    }

    return false;
}

int main(){
    int min = 100;
    int max= 150;

    for(int i = min ; i<=max;i++){
        if(isPalindrome(i)){
            cout<< i << " ";
        }
    }

    return 0;
}