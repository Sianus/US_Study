#include <iostream>
using namespace std;

int main() {

    // 1. 변수란? 변할 수 있는 수
    // cf) 상수 : 변할 수 없는 수
    
    /*
    변수 지정 시 주의사항
    1. 변수의 자료형
    2. 변수의 이름
    3. 변수가 어디에 저장되는가(메모리 영역)? -- 컴파일러가 자동으로 결정 / 주소값이 알고 싶으면 사용하려는 변수 앞에 & 를 붙여주면 확인 가능하다.(변수 내용을 바꾸더라도 주소는 변경 X)
    */
   // <이번 페이지에서는 변수가 어떻게 선언되는지 확인>
   /*
   < 변수명 지정 시 규칙 >
   1. 숫자로 시작할 수 없음 -- int 77aa;(x)
   2. c++에서 사용하고 있는 키워드는 사용할 수 없음 -- int return;(x)
   3. white space(여백이 되는 내용 space, enter, etc..)를 사용할 수 없음. -- int aa aa;(x)
   */

   int a; // 변수의 자료형(int)를 명시하고 변수명을 명시하는 것을 "선언"이라고 함
   a=7; // 선언된 변수에 값을 넣는 것을 "대입"이라고 함

   int b=3; // "선언"과 동시에 "대입" 하는 것을 "초기화한다"고 함.

   cout << "a1 = " << a << ", b1=" << b << endl;
   cout << "a1의 주소 [ " << &a << " ], b1의 주소 [ " << &b << " ]" << endl;

   a=5;
   b=10;

   cout << "a2 = " << a << ", b2 = " << b << endl;

   cout << "a2의 주소 [ " << &a << " ], b2의 주소 [ " << &b << " ]" << endl;

   // !! 변수는 사용되기 이전에 정의되어야 한다.
   // 이후 배울 block 이라는 개념에서 헷갈릴 수 있음.
   /*
   {
       int b;
       {
           int a;
           b = 3;
       }
       a=6;
   }
   위와 같은 형태라면, b는 성립이되지만, a는 값에 대입되지 않음.
   Why? a라는 변수는 안에 있는 block에서 선언되어서 사용 범위가 저 block까지로 제한됨.
   */

    return 0;
}
