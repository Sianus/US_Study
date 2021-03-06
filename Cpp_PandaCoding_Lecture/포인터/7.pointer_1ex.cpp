#include <iostream>

using namespace std;

int main(){
    int a = 6; // int형 변수 a 선언
    int* b; // int형 포인터 변수 b => 여기서부터 b는 자체적으로 주소를 지칭

    b = &a; // b에 a의 주소값을 대입
    // (b는 주소를 지칭함 -> 주소연산자 & 사용)

    cout << "a result : " << a << endl;
    cout << "*b result : " << *b << endl; // 포인터로 선언된 변수의 값을 확인할 때, 간접참조연산자(*) 사용
    
    cout << "a address : " << &a << endl;
    cout << "*b address : " << b << endl; // 포인터로 선언된 변수의 주소를 확인할 때, 변수명만 확인

    *b = *b + 1; // 포인터의 값에 +1을 하였는데, a의 값이 +1 되었음을 확인
    // 컴퓨터가 16진수의 정수로 주소를 다루고 있지만,
    // 포인터는 개념적으로는 정수와는 다른 데이터
    // 정수는 사칙연산이 가능한 "수"이지만,
    // 포인터는 위치를 나타내는 것. => 위치끼리 더하는 등의 연산 과정은 아무런 의미가 없다.
    // 결론적으로, 포인터에 어떠한 정수를 대입하는 것은 아무 의미 없다.
    // 하지만, 위의 예시처럼 어떤 변수의 주소를 대입함으로써,
    // 그 포인터(b)를 이용해서 그 주소의 값(a)에 변화를 주어 수정하는 것이 가능하다.
    // 즉, 위의 경우는 포인터를 어떤 주소의 값으로 초기화한 경우
    // 하지만 C++ 에서 위와 같은 형태로 사용하는 것은 의미없음.
    // 프로그램을 실행하는 동안, 아직 결정되지 않은 메모리를 대입할 수 있다는 점이 C++에서 포인터의 진정한 의미
    cout << "Now a result : " << a << endl; // 7 출력
    return 0;
}