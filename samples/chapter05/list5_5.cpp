#include <iostream>
#include <cstring>
using namespace std;

// Employee�N���X�̒�`
class Employee {
public:
  int number;		// �Ј��ԍ�
  char name[80];	// ����
  int salary;		// ���^
protected:
  void showData();	// �����o�ϐ��̒l��\������
};

// Employee�N���X�̃����o�֐��̎���
void Employee::showData() {
  cout << number << "\n";
  cout << name << "\n";
  cout << salary << "\n";
}

// Salesman�N���X�̒�`
class Salesman : public Employee {
public:
  int sales;		// ����
  void showAllData();	// �����o�ϐ��̒l��\������
};

// Salesman�N���X�̃����o�֐��̎���
void Salesman::showAllData() {
  // 3�̃����o�ϐ��̒l��\������
  showData();

  // �ǉ����ꂽ�����o�ϐ��̒l��\������
  cout << sales << "\n";
}

// �N���X���g�����̃R�[�h
int main() {
  // Salesman�N���X�̃I�u�W�F�N�g���쐬����
  Salesman tanaka;

  // Salesman�N���X�̃����o�𗘗p����
  tanaka.number = 1234;
  strcpy(tanaka.name, "�c����Y");
  tanaka.salary = 200000;
  tanaka.sales = 9999;
  tanaka.showAllData();

  return 0;
}
