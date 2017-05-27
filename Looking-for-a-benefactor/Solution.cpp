#include <vector>
#include <numeric>
#include <math.h>

class NewAverage
{
public:
   static long long newAvg(std::vector<double> &arr, double navg){
    double needed = navg * (arr.size() + 1);
    needed -= std::accumulate(arr.begin(),arr.end(),0.0);

    needed = ceil(needed);
    if (needed <= 0)
       throw std::logic_error("Error");
    return needed;
    }

};
