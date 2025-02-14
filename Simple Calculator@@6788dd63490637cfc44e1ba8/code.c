#include <stdio.h>
int main(){
    double a,b;
    char c;
    scanf("%lf %lf",&a,&b);
    getchar();
    scanf("%c",&c);
    if (c=='+'){
        printf(("%lf",a+b));
        
    }else if(c== '-'){
        printf(("%lf",a-b));
    } else if(c=='*'){printf(("%lf",a*b));}
    else if(c== '/'){if (b!=0)printf(("%lf",a/b));}
    else{printf("Error");}
}