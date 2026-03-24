
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
외부에서 반지름을 수정할 수 없게 변수 설정
```
public:
    Sphere(int r = 1) {
        radius = r;
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
int main() {
    SetConsoleOutputCP(CP_UTF8);

    Sphere sph1;
    cout << "구의 부피는 " << sph1.getVolume() << endl;

    Sphere sph2(3); 
    cout << "구의 부피는 " << sph2.getVolume() << endl;

    return 0;
}
```
두 개의 구 객체를 만들어 부피를 출력


#추가 
```
문제와 출력값의 수치 차이는 부피 계산시 소수점 처리가 더 정확하게 해서 생기는 오차
```
<img width="1105" height="612" alt="image" src="https://github.com/user-attachments/assets/aa4d907a-ab39-4b33-8ed5-af670dedbfda" />


