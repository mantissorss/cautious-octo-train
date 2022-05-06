#include "carpenter.h"

int Carpenter::CalcShelves(const Wall& wall)
{
    return CalcSquare(wall.GetWidth(), wall.GetHeight()) / shelve_size_;
}