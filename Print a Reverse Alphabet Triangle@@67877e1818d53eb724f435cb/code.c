#include <stdio.h>
int main(){
    int n,i,j;
    for(i=n ; i>=1 ; i++){
        for (j = 1; j<=i ; j++){
            printf("%d ",'A'+j-1);
        } printf("\n");
    }
}