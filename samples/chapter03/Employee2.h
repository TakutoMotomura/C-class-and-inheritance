#include <iostream>
using namespace std;

class Employee {
public:
  int number;		// �Ј��ԍ�
  char name[80];	// ����
  int salary;		// ���^

  // �����o�ϐ��̒l��\������
  void showData() {
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
  }
};
