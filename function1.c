#include <stdio.h>

double kineticEnergy(double kg, double ms){
    double result; // 결과를 저장하기 위한 변수 지정
    
    result = 0.5 * kg * (ms * ms); // 연산값 저장
    
    return result; // kineticEnergy 를 호출하면 반환되는 값
}

int main(){
    
    double kg,ms; // 입력을 받을 변수
    
    printf("질량(kg)과 부피(cm^3) 입력 : "); // 표준 출력 함수
    scanf("%lf %lf",&kg, &ms); // 표준 입력 함수
    
    printf("질량 %.2lf이고 속력 %.2lf의 물체의 운동에너지 :  %.2lf [J]", kg, ms, kineticEnergy(kg, ms)); // 입력받은 값과 연산값 출력
    
    return 0;
}
