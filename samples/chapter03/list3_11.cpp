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

// �N���X�̒�`
class MySample {
public:
  // �I�u�W�F�N�g�̃|�C���^�������Ƃ��郁���o�֐�
  void useObject(Employee *obj);

  // �I�u�W�F�N�g�̃|�C���^��߂�l�Ƃ��郁���o�֐�
  Employee* retObject();
};

// �����o�֐��̎���
void MySample::useObject(Employee *obj) {
  obj->showData();
}

Employee* MySample::retObject() {
  static Employee obj;
  obj.number = 1234;
  strcpy(obj.name, "�c����Y");
  obj.salary = 200000;

  return &obj;
}

// �N���X���g�����̃R�[�h
int main() {
  Employee *someone;
  MySample ms;

  // �I�u�W�F�N�g�̃|�C���^���擾����
  someone = ms.retObject();

  // �I�u�W�F�N�g�̃|�C���^���֐��ɓn��
  ms.useObject(someone);

  return 0;
}
