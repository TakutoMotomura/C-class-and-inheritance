#include <cstring>
#include <iostream>
using namespace std;

// �\���̂̒�`
struct Employee {
  int number;		// �Ј��ԍ�
  char name[80];	// ����
  int salary;		// ���^
};

// �֐��̃v���g�^�C�v�錾
struct Employee *getEmployee();

// �v���O�����̃��C���֐�
int main() {
  // �\���̂̃|�C���^��錾����
  struct Employee *p;

  // �\���̂̃|�C���^���擾����
  p = getEmployee();

  // �\���̂̃|�C���^���g���ă����o��\������
  cout << p->number << "\n";
  cout << p->name << "\n";
  cout << p->salary << "\n";

  return 0;
}

// �\���̂̃|�C���^��߂�l�Ƃ���֐�
struct Employee *getEmployee() {
  // �\���̂̎��̂�錾����
  static struct Employee tanaka;

  // �\���̂̃����o�ɑ�����s��
  tanaka.number = 1234;
  strcpy(tanaka.name, "�c����Y");
  tanaka.salary = 200000;

  // �\���̂̃|�C���^��Ԃ�
  return &tanaka;
}
