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
  // �\���̂��f�[�^�^�Ƃ����z���錾����
  struct Employee person[10];

  // �z��̗v�f�̃����o�ɑ�����s��
  person[0].number = 1234;
  strcpy(person[0].name, "�c����Y");
  person[0].salary = 200000;
  person[1].number = 1235;
  strcpy(person[1].name, "�������Y");
  person[1].salary = 250000;
  person[2].number = 1236;
  strcpy(person[2].name, "��؎O�Y");
  person[2].salary = 300000;

  // �\���̂̃����o��\������
  for (int i = 0; i < 3; i++) {
    cout << person[i].number << "\n";
    cout << person[i].name << "\n";
    cout << person[i].salary << "\n";
  }

  return 0;
}
