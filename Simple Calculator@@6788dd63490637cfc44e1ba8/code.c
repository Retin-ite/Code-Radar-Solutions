#include <stdio.h>
int main(){
    double a,b;
    char c;
    scanf("%lf %lf",&a,&b);
    scanf("%c",&c);
    if (c==+){
        printf((a+b));
        
    }else if(c== -){
        printf((a-b));
    } else if(c==*){printf((a*b));}
    else if(c== /){printf((a/b));}
    else{printf("Error");}
}