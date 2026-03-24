//****************************************
// 제 목 : 실습과제 5
// 날 짜 : 2026/03/24
// 작성자: 2301363김민준
//****************************************
//코드작성
#include <iostream>
#include <windows.h>

using namespace std;

class Sphere {
private:
    int radius;

public:
    Sphere(int r = 1) : radius(r) {
        cout << "반지름 " << radius << "인 구 생성" << endl;
    }

    ~Sphere() {
        cout << "반지름 " << radius << "인 구 소멸" << endl;
    }

    double getVolume() {
        return (4.0 / 3.0) * 3.14 * radius * radius * radius;
    }
};

Sphere sph1(10);
Sphere sph2(20);

int main() {
    SetConsoleOutputCP(CP_UTF8);

    cout << "구의 부피는 " << sph1.getVolume() << endl;
    cout << "구의 부피는 " << sph2.getVolume() << endl;

    return 0;
}