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
  struct Employee tanaka;	// �c������
  struct Employee sato;		// ��������
  struct Employee suzuki;	// ��؂���
  char companyName[80];		// ��Ɩ�
};

// �v���O�����̃��C���֐�
int main() {
  // �\���̂��f�[�^�^�Ƃ����ϐ���錾����
  struct Company gihyo;

  // �\���̂̃����o�ɑ�����s��
  gihyo.tanaka.number = 1234;
  strcpy(gihyo.tanaka.name, "�c����Y");
  gihyo.tanaka.salary = 200000;
  gihyo.sato.number = 1235;
  strcpy(gihyo.sato.name, "�������Y");
  gihyo.sato.salary = 250000;
  gihyo.suzuki.number = 1236;
  strcpy(gihyo.suzuki.name, "��؎O�Y");
  gihyo.suzuki.salary = 300000;
  strcpy(gihyo.companyName, "�Z�p�]�_��");

  // �\���̂̃����o��\������
  cout << gihyo.tanaka.number << "\n";
  cout << gihyo.tanaka.name << "\n";
  cout << gihyo.tanaka.salary << "\n";
  cout << gihyo.sato.number << "\n";
  cout << gihyo.sato.name << "\n";
  cout << gihyo.sato.salary << "\n";
  cout << gihyo.suzuki.number << "\n";
  cout << gihyo.suzuki.name << "\n";
  cout << gihyo.suzuki.salary << "\n";
  cout << gihyo.companyName << "\n";

  return 0;
}
