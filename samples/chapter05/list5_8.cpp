#include <iostream>
using namespace std;

// ��{�N���X�̒�`
class MyClass {
public:
  MyClass();	// �R���X�g���N�^
  ~MyClass();	// �f�X�g���N�^
};

// ��{�N���X�̃R���X�g���N�^�̎���
MyClass::MyClass() {
  cout << "��{�N���X�̃R���X�g���N�^���Ăяo����܂����I\n";
}

// ��{�N���X�̃f�X�g���N�^�̎���
MyClass::~MyClass() {
  cout << "��{�N���X�̃f�X�g���N�^���Ăяo����܂����I\n";
}

// �h���N���X�̒�`
class NewClass : public MyClass {
public:
  NewClass();	// �R���X�g���N�^
  ~NewClass();	// �f�X�g���N�^
};

// �h���N���X�̃R���X�g���N�^�̎���
NewClass::NewClass() {
  cout << "�h���N���X�̃R���X�g���N�^���Ăяo����܂����I\n";
}

// �h���N���X�̃f�X�g���N�^�̎���
NewClass::~NewClass() {
  cout << "�h���N���X�̃f�X�g���N�^���Ăяo����܂����I\n";
}

// �N���X���g�����̃R�[�h
int main() {
  NewClass obj;	// �����ŃR���X�g���N�^���Ăяo�����

  cout << "********************\n";

  return 0;	// �����Ńf�X�g���N�^���Ăяo�����
}
