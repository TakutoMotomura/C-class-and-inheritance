#include <iostream>
#include <cstring>
using namespace std;

// Employee�N���X�̒�`
class Employee {
public:
  int number;		// �Ј��ԍ�
  char name[80];	// ����
  int salary;		// ���^

  void showData();	// �����o�ϐ��̒l��\������
};

// Employee�N���X�̃����o�֐��̎���
void Employee::showData() {
  cout << number << "\n";
  cout << name << "\n";
  cout << salary << "\n";
}

// Salesman�N���X�̒�`
class Salesman : public Employee {
  // �����o�Ȃ�
};

// �N���X���g�����̃R�[�h
int main() {
  // Salesman�N���X�̃I�u�W�F�N�g���쐬����
  Salesman tanaka;

  // Salesman�N���X�̃����o�𗘗p����
  tanaka.number = 1234;
  strcpy(tanaka.name, "�c����Y");
  tanaka.salary = 200000;
  tanaka.showData();

  return 0;
}
