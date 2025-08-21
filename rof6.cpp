#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int beginner = 10, end = 20, mid = 15;

    cout << left;
    cout << setfill(' ') << setw(9) << "Beginner : " << beginner << endl;
    cout << setfill(' ') << setw(9) << "End : "      << end << endl;
    cout << setw(9) << "Mid : "      << mid << endl;

    return 0;
}
