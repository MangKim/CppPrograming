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
class Triangle {
```
클래스 선언
```
private:
    int width, height;
```
클래스 내부의 멤버 함수를 통해서만 접근 가능 및 메모리 할당
```
public:
    Triangle(int w = 1, int h = 1) {
        width = w;
        height = h;
        cout << "밑변 " << width << " 높이 " << height << "인 삼각형 생성" << endl;
    }
```
값을 주면 그 크기에 맞춰서 삼각형 생성, 생성될 때마다 생성 메시지를 출력 
```
    ~Triangle() {
        cout << "밑변 " << width << " 높이 " << height << "인 삼각형 소멸" << endl;
    }
```
프로그램이 끝나거나 객체가 사라질 때 자동으로 실행되어 소멸 메시지 출력

```
    double getArea() {
        return (width * height) / 2.0;
    }
};
```
면적 계산 함수

```
Triangle tri1(4, 8);
Triangle tri2(2, 2);
```
프로그램이 실행되자마자 main 함수에 진입하기전에 메모리에 올라가며 생성자가 호출
```
int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;

    return 0;
}
```
이미 생성된 전역 객체들을 불러와서 면적을 계산하고 출력

<img width="1098" height="634" alt="image" src="https://github.com/user-attachments/assets/ab32ee27-e342-41c8-aaf5-caa40281699c" />




