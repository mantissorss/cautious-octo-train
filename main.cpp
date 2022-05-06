#include <iostream>
#include "carpenter.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Wall wall(2, 4);
    Carpenter jack;

    cout << jack.CalcShelves(wall) << endl;

    return 0;
}
