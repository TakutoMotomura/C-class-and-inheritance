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
  Employee tanaka;
  Employee *someone;

  // �I�u�W�F�N�g�̃|�C���^���擾����
  someone = &tanaka;

  // �I�u�W�F�N�g�̃����o��ݒ肷��
  someone->number = 1234;
  strcpy(someone->name, "�c����Y");
  someone->salary = 200000;

  // �I�u�W�F�N�g�̃����o��\������
  someone->showData();

  return 0;
}
