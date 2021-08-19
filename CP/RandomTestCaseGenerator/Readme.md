##### Random Test Case Generation
The Code Generates Random Test Cases according to the constraints given in the question.\
It writes the test case on a file, since big outputs on the console are cumbersome.\
In order to run the code, create a file named `randomTestCase.txt` in the same directory as the `.cpp` file.\
Running the code over-writes `randomTestCase.txt`, so copy-paste the test case onto another `.txt` file after running the code.


##### Boundary Test Case Generation
In order to get boundary test cases, we'll have to hardcode the test case.\
For example:\
This code generates a test case with all the upper bound values:
```
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
    X=1000;
    myfile << X << "\n";
    for(int i=0;i<X;i++){
        long long N,K,Q;
        N=200;
        K=200;
        Q=2000;
        vector<long long> A,E;
        myfile << N << " " << K << " " << Q << "\n";
        for(long long j=0;j<N;j++){
            long long temp = 1000000000;
            A.push_back(temp);
            myfile << temp << " ";

        }
        long long effortSum=0;
        myfile << "\n";
        for(int i=0;i<10;i++){
           long long temp = 1;
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
```