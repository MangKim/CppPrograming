#코드설명

```
#include <iostream>
```
C++의 표준 입출력 라이브러리

```
#include <windows.h> 
```
윈도우 운영체제 전용 기능을 제어하는 헤더입니다. 한글 깨짐 방지용 함수를 쓰기 위해 가져왔습니다.

```
using namespace std;
```
std::cout처럼 매번 앞에 std::를 붙이는 번거로움을 피하기 위해 표준 이름 공간을 사용하겠다고 선언

```
class Sphere {
```
클래스 선언
```
private:
    int radius;
```
반지름을 저장하는 변수, 외부에서 직접 수정 못 하게 선언
```
public:
    Sphere(int r = 1) : radius(r) {
        cout << "반지름 " << radius << "인 구 생성" << endl;
    }
```
객체가 메모리에 만들어지는 순간 "생성"이라는 문구 출력

```
    ~Sphere() {
        cout << "반지름 " << radius << "인 구 소멸" << endl;
    }
```
프로그램이 끝나거나 객체가 사라질 때 자동으로 실행되어 소멸 메시지 출력
```
    double getVolume() {
        return (4.0 / 3.0) * 3.14 * radius * radius * radius;
    }
};
```
부피 구하는 함수

```
Sphere sph1(10);
Sphere sph2(20);
```
전역 객체 선언, 생성자에 값을 넣어 호출
```
int main() {
    SetConsoleOutputCP(CP_UTF8);

    cout << "구의 부피는 " << sph1.getVolume() << endl;
    cout << "구의 부피는 " << sph2.getVolume() << endl;

    return 0;
}
```
두 개의 구 객체를 만들어 부피를 출력


<img width="1098" height="578" alt="image" src="https://github.com/user-attachments/assets/1de8a863-eaca-448d-9d7c-1382ed5d6877" />
