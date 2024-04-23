#include <iostream>
#include <algorithm>

using namespace std;

struct Box {
    int x, y, z, w, d, h;
};

int overlappingVolume(Box box1, Box box2) {
    int x_overlap = max(0, min(box1.x + box1.w, box2.x + box2.w) - max(box1.x, box2.x));
    int y_overlap = max(0, min(box1.y + box1.d, box2.y + box2.d) - max(box1.y, box2.y));
    int z_overlap = max(0, min(box1.z + box1.h, box2.z + box2.h) - max(box1.z, box2.z));

    return x_overlap * y_overlap * z_overlap;
}

int main() {
    Box box1, box2;

    cin >> box1.x >> box1.y >> box1.z >> box1.w >> box1.d >> box1.h;
    cin >> box2.x >> box2.y >> box2.z >> box2.w >> box2.d >> box2.h;

    int volume = overlappingVolume(box1, box2);
    cout << volume << endl;

    return 0;
}
