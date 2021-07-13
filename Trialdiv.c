#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    int sqr=sqrt(n);
    int prime[sqr],k=0;
    for(int i=2; i<sqr;i++){
        while(n%i==0){
            prime[k++]=i;
            n=n/i;
       }
    }
    if(n>1){
        prime[k++]=n;
    }
    for(int j=0;j<k;j++){
        printf("%d", prime[j]);
    }
}
