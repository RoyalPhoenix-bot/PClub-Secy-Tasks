//Generates Random test cases, boundary cases can be manually generated (hardcoded).
#include<bits/stdc++.h>
using namespace std;
main(){
    ofstream myfile;
    myfile.open("randomTestCase.txt");
    int X;
    srand(time(0));
    X=rand()%10;
    if(X==0){
       X=10;
    }
    myfile << X << "\n";
    for(int i=0;i<X;i++){
        long long N,K,Q;
        N=rand()%100000;
        if(N==0){
            N=100000;
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