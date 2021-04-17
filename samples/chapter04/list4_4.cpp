#include <iostream>
#include <cstring>
using namespace std;

// �N���X�̒�`
class Employee {
public:
  int number;		// �Ј��ԍ�
  char name[80];	// ����
  int salary;		// ���^
  void showData();	// �����o�ϐ��̒l��\������
  Employee();		// �����̂Ȃ��R���X�g���N�^
  Employee(int nu, const char *na, int sa); // ���������R���X�g���N�^
};

// �����o�֐��̎���
void Employee::showData() {
  cout << number << "\n";
  cout << name << "\n";
  cout << salary << "\n";
}

// �����̂Ȃ��R���X�g���N�^�̎���
Employee::Employee() {
  number = 0;
  strcpy(name, "���ݒ�");
  salary = 150000;
}

// ���������R���X�g���N�^�̎���
Employee::Employee(int nu, const char *na, int sa) {
  number = nu;
  strcpy(name, na);
  salary = sa;
}

// �N���X���g�����̃R�[�h
int main() {
  // �����̂Ȃ��R���X�g���N�^���Ăяo��
  Employee someone;

  // �����o�֐����Ăяo��
  someone.showData();

  // ���������R���X�g���N�^���Ăяo��
  Employee tanaka(1234, "�c����Y", 200000);

  // �����o�֐����Ăяo��
  tanaka.showData();

  return 0;
}
