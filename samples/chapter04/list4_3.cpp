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
  Employee();		// �R���X�g���N�^
};

// �����o�֐��̎���
void Employee::showData() {
  cout << number << "\n";
  cout << name << "\n";
  cout << salary << "\n";
}

// �R���X�g���N�^�̎���
Employee::Employee() {
  number = 0;
  strcpy(name, "���ݒ�");
  salary = 150000;
}

// �N���X���g�����̃R�[�h
int main() {
  // �I�u�W�F�N�g���쐬����
  Employee someone;

  // �����o�֐����Ăяo��
  someone.showData();

  return 0;
}
