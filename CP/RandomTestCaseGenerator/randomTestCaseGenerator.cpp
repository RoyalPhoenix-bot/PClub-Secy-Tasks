//Generates Random test cases, boundary cases can be manually generated (hardcoded).
#include<bits/stdc++.h>
using namespace std;
main(){
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
    ofstream myfile;
    myfile.open("randomTestCase.txt");
    int X;
    srand(time(0));
    X=rand()%1000;
    if(X==0){
       X=1000;
    }
    myfile << X << "\n";
    long long NSum=0,max=200000;
    for(int i=0;i<X;i++){
        long long N,K,Q;
        N=rand()%100000;
        if(N==0){
            N=100000;
        }
        NSum+=N;
        if(NSum>max){
            NSum-=N;
            N = (max-NSum)/(X-i);
            NSum+=N;
        }
        K=rand()%N;
        if(K==0){
            K==N;
        }
        Q=rand()%2000;
        if(Q==0){
            Q==2000;
        }
        vector<long long> A,E;
        myfile << N << " " << K << " " << Q << "\n";
        for(long long j=0;j<N;j++){
            long long temp = rand()%1000000001;
            A.push_back(temp);
            myfile << temp << " ";

        }
        long long effortSum=0;
        myfile << "\n";
        for(int i=0;i<10;i++){
           long long temp = rand()%1000000001;
            E.push_back(temp);
            myfile << temp << " ";
            effortSum+=temp;
        }
        myfile << "\n";
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
            myfile << "No" << "\n";
        }else myfile << "Yes" << "\n";
    }
}