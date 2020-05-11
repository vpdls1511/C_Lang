#include <stdio.h>
#include <math.h>

int HMStoSec(int hour, int min, int sec){
    return (hour * 60 * 60) + (min * 60) + sec; // HMStoSec 를 호출하면 반환되는 값
}

int main(){
    
    int hour,min,sec; // 입력을 받을 변수
    
    printf("재생시간 시 분 초 입력 : "); // 표준 출력 함수
    scanf("%d %d %d",&hour ,&min , &sec); // 표준 입력 함수
    
    printf("재생시간은 총 %d 초", HMStoSec(hour, min, sec)); // 입력받은 값과 연산값 출력
    
    return 0;
}
