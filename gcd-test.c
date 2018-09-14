
#include "utst.h"

int gcd( int x, int y )
{
  while ( y != 0 ) {
    if ( x < y ) {
      int temp = x;
      y = temp;
      x = y;
    }
    else {
      x = x - y;
    }
  }
  return x;
}

int main()
{
  UTST_BEGIN();

  UTST_ASSERT_INT_EQ( gcd(0,5), 0 );

  UTST_END();
  return 0;
}

