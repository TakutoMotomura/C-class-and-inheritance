#include <cstring>
#include <iostream>
using namespace std;

// �\���̂̒�`
struct Employee {
  int number;		// �Ј��ԍ�
  char name[80];	// ����
  int salary;		// ���^
};

// �v���O�����̃��C���֐�
int main() {
  // �\���̂̎��̂�錾����
  struct Employee tanaka;

  // �\���̂̃����o�ɑ�����s��
  tanaka.number = 1234;
  strcpy(tanaka.name, "�c����Y");
  tanaka.salary = 200000;

  // �\���̂̃|�C���^��錾����
  struct Employee *p;

  // �\���̂̃|�C���^�ɍ\���̂̎��̂̃A�h���X��������
  p = &tanaka;

  // �\���̂̃|�C���^���g���ă����o��\������
  cout << p->number << "\n";
  cout << p->name << "\n";
  cout << p->salary << "\n";

  return 0;
}
