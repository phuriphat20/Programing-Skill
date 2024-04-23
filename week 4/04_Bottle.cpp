#include <iostream>
using namespace std;

int main(){
    int N, M;

    cin >> N >> M;

    int H[N], L[M];

    for(int i = 0; i < N; i++){
        cin >> H[i];
    }

    for(int i = 0; i < M; i++){
        cin >> L[i];
    }

    int countBottle[M];
    int markIndex;
    for(int i = 0; i < M; i++){
        countBottle[i] = 0;
        for(int j = 0; j < N; j++){
            if(H[j]-L[i] > 0){
                countBottle[i] += 1;
                H[j] = 0;
                int k = 1;
                markIndex = j-1;
                if(j != N-1){
                    while(H[j+k]-L[i] > 0){
                        countBottle[i]++;
                        H[j+k] = 0;
                        k++;
                    }
                    if(H[markIndex] != 0 && markIndex+1 != 0){
                        H[markIndex] = 0;
                        countBottle[i]++;
                    }
                    if(H[j+k] != 0){
                        H[j+k] = 0;
                        countBottle[i]++;
                    }
                }else{
                    if(H[j-1] != 0){
                        H[j-1] = 0;
                        countBottle[i]++;
                    }
                }
            }
        }
        cout << countBottle[i] << " ";
    }

    return 0;
}
