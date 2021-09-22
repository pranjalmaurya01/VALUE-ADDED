#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int M,N,X,Q,L,R,count;
    cin >> N;
    cin >> M;
    int ball[N];
    for (int i=0; i<N; i++) {
        ball[i] = 0;
    }
    for (int i=0; i<M; i++){
        cin >> L >> R;
        for (int j = L-1; j<R; j++) {
            ball[j] = ball[j]+1;
        }
    }
    cin >> Q;
    for (int k=0; k<Q; k++) {
        count = 0;
        cin >> X;
        for (int z=0; z<N; z++) {
            if(ball[z] >= X) {
                count++;
            }
        }
        cout << count << endl;
    }
    
    
    return 0;
}
