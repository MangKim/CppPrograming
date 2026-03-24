#include <iostream>
#include <windows.h> 

using namespace std;

class Sphere {
private:
    int radius; 

public:
    Sphere(int r = 1) {
        radius = r;
        cout << "반지름 " << radius << "인 구 생성" << endl;
    }

    ~Sphere() {
        cout << "반지름 " << radius << "인 구 소멸" << endl;
    }

    double getVolume() {
        return (4.0 / 3.0) * 3.14 * radius * radius * radius;
    }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Sphere sph1;
    cout << "구의 부피는 " << sph1.getVolume() << endl;

    Sphere sph2(3); 
    cout << "구의 부피는 " << sph2.getVolume() << endl;

    return 0;
}