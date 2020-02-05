// implementation of OpenMP summation function
#include <omp.h>

int sum(int a, int b)
{
  int ans = 0;
  #pragma omp parallel for reduction(+:ans)
  for(int i=a ; i<=b ; i++)
  {
    ans += i;
  }
  return ans;
}
