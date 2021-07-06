#include <stdio.h>

int main(){
     int t,i,N;
     scanf("%d",&t);
    while(t--){
    int flag=0;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++){
        scanf("%d", &A[i]);
    }
    for(i=0;i<N;i++){
        if(A[i] != A[N-i-1]){
            flag =1;
            break;
        }
    }
    if(flag == 0){
        int k = 1;
        int rainbowcheck[7] = {0};
        while(k<=7){
            for(i=0;i<N;i++){
                if(A[i]==k)
                rainbowcheck[k-1]++;
            }
             k++;
        }
        for(i=0;i<7;i++){
            if(rainbowcheck[i]==0){
                flag ++;
                break;
            }
        }
    }
    if(flag ==0)
    printf("yes\n");
    else if(flag == 1)
    printf("no\n");
}
   return 0;
}
