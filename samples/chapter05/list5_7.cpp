#include <iostream>
#include <cstring>
using namespace std;

// Employee�N���X�̒�`
class Employee {
public:
  int number;		// �Ј��ԍ�
  char name[80];	// ����
  int salary;		// ���^
};

// Director�N���X�̒�`
class Director : public Employee {
public:
  int stock;		// �����ۗL��
};

// Manager�N���X�̒�`
class Manager : public Employee {
public:
  int travelAllowance;	// �o����
};

// Salesman�N���X�̒�`
class Salesman : public Employee {
public:
  int sales;	// ����
};

// �N���X���g�����̃R�[�h
int main() {
  // Director�N���X�̃I�u�W�F�N�g���g��
  Director y;
  y.number = 1111;
  strcpy(y.name, "������Y");
  y.salary = 500000;
  y.stock = 1000;
  cout << "�Ј��ԍ��F" << y.number << "\n";
  cout << "�����F" << y.name << "\n";
  cout << "���^�F" << y.salary << "\n";
  cout << "�����ۗL���F" << y.stock << "\n";

  // Manager�N���X�̃I�u�W�F�N�g���g��
  Manager k;
  k.number = 2222;
  strcpy(k.name, "�ے����Y");
  k.salary = 350000;
  k.travelAllowance = 10000;
  cout << "�Ј��ԍ��F" << k.number << "\n";
  cout << "�����F" << k.name << "\n";
  cout << "���^�F" << k.salary << "\n";
  cout << "�o����F" << k.travelAllowance << "\n";

  // Salesman�N���X�̃I�u�W�F�N�g���g��
  Salesman e;
  e.number = 3333;
  strcpy(e.name, "�c�ƎO�Y");
  e.salary = 250000;
  e.sales = 1234;
  cout << "�Ј��ԍ��F" << e.number << "\n";
  cout << "�����F" << e.name << "\n";
  cout << "���^�F" << e.salary << "\n";
  cout << "����F" << e.sales << "\n";

  return 0;
}
