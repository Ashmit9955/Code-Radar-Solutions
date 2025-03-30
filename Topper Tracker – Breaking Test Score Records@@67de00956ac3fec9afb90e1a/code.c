#include<stdio.h>

int trackScores(int scores[] ;int n; int result[]){
      for(int i=0; i<n; i++){
        scanf("%d",&scores[i]);
    }
    int HS = scores[0];
    int H = 0;
    int LS = scores[0];
    int L = 0;
    for(int i=1; i<n; i++){
        if(scores[i] > HS){
            HS = scores[i];
            H++;
        }else if(scores[i] < LS){
            LS = scores[i];
            L++;
        }
}
result[0] = H;
result[1] = L;
}