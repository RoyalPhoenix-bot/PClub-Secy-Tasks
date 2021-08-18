#include <bits/stdc++.h>
using namespace std;
#define IAmSpeed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
    IAmSpeed
    //Precomputing the factors of numbers less than 1000.
    vector<long long> v(2000+1,0);
    for(int i=1;i<=2000;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                v[i]++;
            }
        }
    }
    vector<long long> sum(2000+1,0);//sum of the factors less than or equal to Q,(prefix sum array)
    sum[1]=v[1];
    for(int i=2;i<=2000;i++){
        sum[i]=sum[i-1]+v[i];
    }
    int X;
    cin >> X;
    for(int testCase=0;testCase<X;testCase++){
        long long N,K,Q;
        cin >> N >> K >> Q;
        vector<long long> A;
        for(int i=0;i<N;i++){
            long long temp;
            cin >> temp;
            A.push_back(temp);
        }
        long long effortSum=0;
        vector<long long> E;
        for(int i=0;i<10;i++){
            long long temp;
            cin >> temp;
            E.push_back(temp);
            effortSum+=temp;
        }
        sort(E.rbegin(),E.rend());
        int timeMachines = sum[Q]%10;
        for(int i=0;i<timeMachines;i++){
            effortSum+=E[i];
        }
        //checking how many tasks he can finish.
        long long ans=0;
        for(auto i : A){
            if(effortSum>i){
                ans++;
            }
        }
        if(ans<=K){
            cout << "No" << "\n";
        }else cout << "Yes" << "\n";

    }
    return 0;
}