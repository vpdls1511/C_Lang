#include <stdio.h>
#include <math.h>

double Density(double g, double cm){
    return g / cm;; // Density 를 호출하면 반환되는 값
}

int main(){
    
    double g,cm; // 입력을 받을 변수
    
    printf("질량(g)과 부피(cm^3) 입력 : "); // 표준 출력 함수
    scanf("%lf %lf",&g, &cm); // 표준 입력 함수
    
    printf("질량 %.2lfg이고 속력 %.2lfcm^3의 밀도 : %.2lf [g/cm^3]", g, cm, Density(g,cm) ); // 입력받은 값과 연산값 출력
    
    return 0;
}
