/* This flie aimed for sorttest 
 * provide some useful tools like print and complexity calculation
 */

#include <iostream>
#include <algorithm>
#include <string>
#include <ctime>
#include <cassert>

using namespace std;

namespace SortTestHelper
{
  int *generateRandomArray(int n,int range_l,int range_r)
  {
   int *arr = new int[n];
   srand(time(NULL));//random seed usually ues time for key
   for(int i = 0;i < n;i++)
   {
       arr[i] = rand() % (range_r - range_l) + range_l;
   }
    return arr;
  }

}

