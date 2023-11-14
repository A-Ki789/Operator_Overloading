#include <iostream>

using namespace std;

struct Point {
    int X;
    int Y;
};

bool operator==(const Point &point1, const Point &point2) {
    return (
            point1.X == point2.X &&
            point1.Y == point2.Y
    );
}

ostream &operator<<(ostream &stream, const Point &point1) {
    stream << point1.X << endl
           << point1.Y << endl;
};

int main() {
    Point point1 = {1, 2};
    Point point2 = {1, 2};
    if (point1 == point2) {
        cout << "Equal" << endl;
    }
    cout << point1 << endl;
    return 0;

}