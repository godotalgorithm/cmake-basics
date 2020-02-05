// implementation of bad summation function

int sum_bad(int a, int b)
{
  double ans = 0.0;
  double whatever;
//  whatever += 1.0;
  for(int i=a ; i<=b ; i++)
  {
    ans += i*whatever;
  }
  ans /= whatever;
  return (int)ans;
}
