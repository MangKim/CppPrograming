#include <iostream>
#include <windows.h>
using namespace std;

class Triangle {
private:
    int width, height;
public:
    Triangle(int w = 1, int h = 1) {
        width = w;
        height = h;
        cout << "밑변 " << width << " 높이 " << height << "인 삼각형 생성" << endl;
    }
    ~Triangle() {
        cout << "밑변 " << width << " 높이 " << height << "인 삼각형 소멸" << endl;
    }
    double getArea() {
        return (width * height) / 2.0;
    }
};

Triangle tri1(4, 8);
Triangle tri2(2, 2);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;

    return 0;
}