#include <iostream>
using namespace std;

// �N���X�̒�`
class MyClass {
public:
  int number;	// �����o�ϐ�
  MyClass();	// �R���X�g���N�^
  ~MyClass();	// �f�X�g���N�^
};

// �R���X�g���N�^�̎���
MyClass::MyClass() {
  cout << "�R���X�g���N�^���Ăяo����܂����I\n";
}

// �f�X�g���N�^�̎���
MyClass::~MyClass() {
  cout << "�I�u�W�F�N�g" << number;
  cout << "�̃f�X�g���N�^���Ăяo����܂����I\n";
}

// �N���X���g�����̃R�[�h
void myFunc() {
  MyClass obj1;	// �����ŃI�u�W�F�N�g���쐬�����
  obj1.number = 1;

  // �����ŃI�u�W�F�N�g���j�������
}

int main() {
  myFunc();
  MyClass obj2;	// �����ŃI�u�W�F�N�g���쐬�����
  obj2.number = 2;

  return 0;	// �����ŃI�u�W�F�N�g���j�������
}
