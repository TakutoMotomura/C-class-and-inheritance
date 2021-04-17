#include <iostream>
using namespace std;

// ��{�N���X�̒�`
class MyClass {
public:
  int my_data;		// �����o�ϐ�
  MyClass();		// �����̂Ȃ��R���X�g���N�^
  MyClass(int m);	// ���������R���X�g���N�^
  ~MyClass();		// �f�X�g���N�^
};

// ��{�N���X�̈����̂Ȃ��R���X�g���N�^�̎���
MyClass::MyClass() {
  my_data = -1;
  cout << "��{�N���X�̈����̂Ȃ��R���X�g���N�^���Ăяo����܂����I\n";
}

// ��{�N���X�̈��������R���X�g���N�^�̎���
MyClass::MyClass(int m) {
  my_data = m;
  cout << "��{�N���X�̈��������R���X�g���N�^���Ăяo����܂����I\n";
}

// ��{�N���X�̃f�X�g���N�^�̎���
MyClass::~MyClass() {
  cout << "��{�N���X�̃f�X�g���N�^���Ăяo����܂����I\n";
}

// �h���N���X�̒�`
class NewClass : public MyClass {
public:
  int new_data;		// �����o�ϐ�
  NewClass();		// �����̂Ȃ��R���X�g���N�^
  NewClass(int n, int m);	// ���������R���X�g���N�^
  ~NewClass();		// �f�X�g���N�^
};

// �h���N���X�̈����̂Ȃ��R���X�g���N�^�̎���
NewClass::NewClass() {
  new_data = -1;
  cout << "�h���N���X�̈����̂Ȃ��R���X�g���N�^���Ăяo����܂����I\n";
}

// �h���N���X�̈��������R���X�g���N�^�̎���
NewClass::NewClass(int n, int m) : MyClass(m) {
  new_data = n;
  cout << "�h���N���X�̈��������R���X�g���N�^���Ăяo����܂����I\n";
}

// �h���N���X�̃f�X�g���N�^�̎���
NewClass::~NewClass() {
  cout << "�h���N���X�̃f�X�g���N�^���Ăяo����܂����I\n";
}

// �N���X���g�����̃R�[�h
int main() {
  // �����̂Ȃ��R���X�g���N�^���Ăяo��
  NewClass obj1;

  // �����o�ϐ��̒l��\������
  cout << obj1.my_data << "\n";
  cout << obj1.new_data << "\n";
  cout << "********************\n";

  // ���������R���X�g���N�^���Ăяo��
  NewClass obj2(123, 456);

  // �����o�ϐ��̒l��\������
  cout << obj2.my_data << "\n";
  cout << obj2.new_data << "\n";

  return 0;
}
