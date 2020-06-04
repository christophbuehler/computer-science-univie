#include <iostream>

using namespace std;

int main()
{
  constexpr double a{412};
  const double b{10};

  cout << a/b << a/b*2;
  cout << a/b/b;
  cout << static_cast<int>(a)/b/b;
  cout << static_cast<int>(a/b)/b;
  cout << static_cast<int>(a/b/b);

  return 0;
}