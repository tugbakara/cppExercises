#include <iostream>
using namespace std;
class Test
{
  public:
  int a, *p;
  Test(int x)  
  {
      a = x;
      p = new int[a];
  }
  Test(Test &t)
  {
      a = t.a;
      p = new int[a]; // p = t.p; yazamayız çünkü eğer oluşturulan objeden önce başka obje oluşturulmuşsa o objenin arrayini alır. Biz yeni bir array oluşturmak istiyoruz.
  }
};
