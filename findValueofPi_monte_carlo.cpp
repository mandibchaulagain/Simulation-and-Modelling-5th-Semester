#include <iostream>
#include <cstdlib>
#include <ctime>

#define INTERVAL 10000

using namespace std;

int main() {
    int circle_points = 0, square_points = 0;
    double rand_x, rand_y, origin_dist, pi;

    srand(time(NULL));

    for (int i = 0; i < (INTERVAL * INTERVAL); i++) {
        rand_x = static_cast<double>(rand()) / RAND_MAX;
        rand_y = static_cast<double>(rand()) / RAND_MAX;

        origin_dist = rand_x * rand_x + rand_y * rand_y;

        if (origin_dist <= 1)
            circle_points++;

        square_points++;

        pi = static_cast<double>(4 * circle_points) / square_points;

        if (i < 20 || i % (INTERVAL * INTERVAL / 10) == 0) {
            cout << "Iteration " << i << ": " << pi << endl;
        }
    }

    cout << "\nFinal Estimation of Pi = " << pi << endl;

    return 0;
}
