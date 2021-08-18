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
        myfile << N << " " << K << " " << Q << "\n";
        for(long long j=0;j<N;j++){
            myfile << 1000000000 << " ";
        }
        myfile << "\n";
        for(int i=0;i<10;i++){
            myfile << 1000000000 << " ";
        }
        myfile << "\n";
    }
}
```