#include <iostream>
using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3;
    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of the third point (x3, y3): ";
    cin >> x3 >> y3;

   
    float area = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;

    if (area == 0) {
        cout << "The points are collinear and lie on a straight line." << endl;
    } else {
        cout << "The points do not lie on a straight line." << endl;
    }

    return 0;
}
