#include<bits/stdc++.h>
using namespace std;

int reverseNum(int n);

int main(){r

    int n;
    cin>>n;
    cout<<"The reverse of "<<n<<" is "<<reverseNum(n);

    return 0;
}

int reverseNum(int n){
    int reverse = 0;
    int num = n;
    while(num!=0){
        int digits = num%10;
        reverse = reverse*10+digits;
        num = num/10;
    }
    return reverse;
}
