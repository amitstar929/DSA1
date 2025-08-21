#include <iostream>
#include <iomanip>
using namespace std;

int main() {
        for(int i = 0; i <= 5; i++)
        cout << "Amit Kumar " << setfill(' ') << setw(150) << "\033[1;45m"  << " || "<< "\033[0;m " << endl;
}