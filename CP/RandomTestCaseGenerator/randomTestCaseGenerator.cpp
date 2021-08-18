//Generates Random test cases, boundary cases can be manually generated (hardcoded).
#include<bits/stdc++.h>
using namespace std;
main(){
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
        }
        K=rand()%N;
        if(K==0){
            K==N;
        }
        Q=rand()%2000;
        if(Q==0){
            Q==2000;
        }
        myfile << N << " " << K << " " << Q << "\n";
        for(long long j=0;j<N;j++){
            myfile << rand()%1000000001 << " ";
        }
        myfile << "\n";
        for(int i=0;i<10;i++){
            myfile << rand()%1000000001 << " ";
        }
        myfile << "\n";
    }
}