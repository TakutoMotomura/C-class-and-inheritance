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
};

// �����o�֐��̎���
void Employee::showData() {
  cout << number << "\n";
  cout << name << "\n";
  cout << salary << "\n";
}

// �N���X���g�����̃R�[�h
int main() {
  // �I�u�W�F�N�g���쐬����
  Employee tanaka;

  // �����o�ϐ��Ƀf�[�^��ݒ肷��
  tanaka.number = 1234;
  strcpy(tanaka.name, "�c����Y");
  tanaka.salary = 200000;

  // �����o�֐����Ăяo��
  tanaka.showData();

  return 0;
}
