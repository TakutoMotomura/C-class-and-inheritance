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
void showEmployee(struct Employee *p);

// �v���O�����̃��C���֐�
int main() {
  // �\���̂̎��̂�錾����
  struct Employee tanaka;

  // �\���̂̃����o�ɑ�����s��
  tanaka.number = 1234;
  strcpy(tanaka.name, "�c����Y");
  tanaka.salary = 200000;

  // �\���̂̃|�C���^���֐��̈����ɓn��
  showEmployee(&tanaka);

  return 0;
}

// �\���̂̃|�C���^�������Ƃ���֐�
void showEmployee(struct Employee *p) {
  // �\���̂̃|�C���^���g���ă����o��\������
  cout << p->number << "\n";
  cout << p->name << "\n";
  cout << p->salary << "\n";
}
