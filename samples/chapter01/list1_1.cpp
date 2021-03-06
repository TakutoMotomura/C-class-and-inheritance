#include <cstring>
#include <iostream>
using namespace std;

// 構造体の定義
struct Employee {
  int number;		// 社員番号
  char name[80];	// 氏名
  int salary;		// 給与
};

// プログラムのメイン関数
int main() {
  // 構造体をデータ型とした変数を宣言する
  struct Employee tanaka;

  // 構造体のメンバに代入を行う
  tanaka.number = 1234;
  strcpy(tanaka.name, "田中一郎");
  tanaka.salary = 200000;

  // 構造体のメンバを表示する
  cout << tanaka.number << "\n";
  cout << tanaka.name << "\n";
  cout << tanaka.salary << "\n";

  return 0;
}
