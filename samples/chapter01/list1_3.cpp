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
  // �\���̂��f�[�^�^�Ƃ����ϐ���錾����
  struct Employee tanaka, someone;

  // �\���̂̃����o�ɑ�����s��
  tanaka.number = 1234;
  strcpy(tanaka.name, "�c����Y");
  tanaka.salary = 200000;

  // �\���̂̃����o���ꊇ�R�s�[����
  someone = tanaka;

  // �\���̂̃����o��\������
  cout << someone.number << "\n";
  cout << someone.name << "\n";
  cout << someone.salary << "\n";

  return 0;
}
