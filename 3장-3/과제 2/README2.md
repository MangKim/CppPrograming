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
private:
    double width;  
    double height;
```
삼각형의 밑변과 높이를 저장/ private으로 묶여 있어서 클래스 외부에서 마음대로 값을 바꾸지 못하게 보호
```
public:
```
클래스 외부에서도 접근할 수 있도록 허용
```
    Triangle() {
        width = 1;
        height = 1;
        cout << "밑변 " << width << " 높이 " << height << "인 삼각형 생성" << endl;
    }

    Triangle(double w, double h) {
        width = w;
        height = h;
        cout << "밑변 " << width << " 높이 " << height << "인 삼각형 생성" << endl;
    }
```
아무 값도 안 주면 1x1 크기로 만들고, 값을 주면 그 크기에 맞춰서 삼각형 생성, 생성될 때마다 생성 메시지를 출력 

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
삼각형의 넓이를 계산하는 함수
```
int main() {
```
메인함수
```
    SetConsoleOutputCP(CP_UTF8);
```
터미널에서 한글이 안 깨지게 조치
```
    Triangle tri1; 
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;

    Triangle tri2(2, 4);
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```
두 개의 삼각형 객체를 만들어 넓이를 출력
```
    return 0;
}
```
프로그램 종료
