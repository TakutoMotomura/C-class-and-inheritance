#include <cstring>
#include <iostream>
using namespace std;

// �\���̂̒�`
struct Employee {
  int number;		// �Ј��ԍ�
  char name[80];	// ����
  int salary;		// ���^
};

// �\���̂̒�`
struct Company {
  struct Employee person[3];	// 3�l�̏]�ƈ�
  char companyName[80];		// ��Ɩ�
};

// �v���O�����̃��C���֐�
int main() {
  // �\���̂��f�[�^�^�Ƃ����ϐ���錾����
  struct Company gihyo;

  // �\���̂̃����o�ɑ�����s��
  gihyo.person[0].number = 1234;
  strcpy(gihyo.person[0].name, "�c����Y");
  gihyo.person[0].salary = 200000;
  gihyo.person[1].number = 1235;
  strcpy(gihyo.person[1].name, "�������Y");
  gihyo.person[1].salary = 250000;
  gihyo.person[2].number = 1236;
  strcpy(gihyo.person[2].name, "��؎O�Y");
  gihyo.person[2].salary = 300000;
  strcpy(gihyo.companyName, "�Z�p�]�_��");

  // �\���̂̃����o��\������
  for (int i = 0; i < 3; i++) {
    cout << gihyo.person[i].number << "\n";
    cout << gihyo.person[i].name << "\n";
    cout << gihyo.person[i].salary << "\n";
  }
  cout << gihyo.companyName << "\n";

  return 0;
}
