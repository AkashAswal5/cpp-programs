#include <iostream>
using namespace std;

// Assume the Point class is predefined as described
class Point {
private:
    int X;
    int Y;

public:
    Point(int x, int y) : X(x), Y(y) {}

    int getX() { return X; }
    int getY() { return Y; }

    // This is a helper function to calculate Euclidean distance between two points
    static double calculateDistance(Point* p1, Point* p2) {
        int dx = p2->getX() - p1->getX();
        int dy = p2->getY() - p1->getY();
        return sqrt(dx * dx + dy * dy);
    }
};

// Function to check if the points form a triangle
int isTriangle(Point* P1, Point* P2, Point* P3) {
    int x1 = P1->getX(), y1 = P1->getY();
    int x2 = P2->getX(), y2 = P2->getY();
    int x3 = P3->getX(), y3 = P3->getY();

    // Calculate the determinant-based area
    int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    // If the area is zero, the points are collinear
    if (area == 0) {
        return 0; // Not a triangle
    }
    return 1; // Points form a triangle
}

int main() {
    // Example test case
    Point P1(0, 0), P2(4, 0), P3(2, 3);

    if (isTriangle(&P1, &P2, &P3)) {
        cout << "The points form a triangle.\n";
    } else {
        cout << "The points do not form a triangle.\n";
    }

    return 0;
}
