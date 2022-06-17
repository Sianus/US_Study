#include <iostream>
#include <sstream>

using namespace std;

// n 은 d(n)의 생성자 -> 33+3+3=39 에서, 33은 39의 생성자.
// 이런 생성자가 없는 값을 셀프 넘버라고 한다.
// 구상
// 1 -> 2 -> 4 -> 8 -> 16 -> 16+1+6=23 -> 23+2+3=28 ->
// 3 -> 6 -> 12 -> 12+1+2=15 -> ...
// 5 -> 10 -> 11 -> 13 -> 13+1+3=17 -> ...
// 7 -> 14 -> 14+1+4=19 -> ...
// 9 -> 18 -> ...
// 홀수를 대상으로 연산 -> 결과를 한 배열에 저장
// self_num <= 10000 동안 self_num을 한 줄씩 출력
// 
// 수열 연산을 해줄 함수 생성
int d_n(int n)
{
    char *tmp = n.c_str();

}