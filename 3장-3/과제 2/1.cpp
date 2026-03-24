//****************************************
// 제 목 : 실습과제 2
// 날 짜 : 2026/03/24
// 작성자: 2301363김민준
//****************************************
//코드작성
#include <iostream>
#include <windows.h>
using namespace std;

class Triangle {
private:
    double width;  
    double height;

public:
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

   
    ~Triangle() {
        cout << "밑변 " << width << " 높이 " << height << "인 삼각형 소멸" << endl;
    }

   
    double getArea() {
        return (width * height) / 2.0;
    }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Triangle tri1; 
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;

    Triangle tri2(2, 4);
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;

    return 0;
}
