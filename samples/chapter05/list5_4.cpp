#include "MyClass.h"

class NewClass : public MyClass {
public:
  void myFunc();
};

// メンバ関数の実装
void NewClass::myFunc() {
  // 継承されたメンバを使う
  pub_data = 123;
  pri_data = 456;
  pro_data = 789;
}
