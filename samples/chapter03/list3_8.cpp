#include <iostream>
using namespace std;

// �N���X�̒�`
class MyMessage {
public:
  void showMessage();			// �����̂Ȃ������o�֐�
  void showMessage(const char *s);		// ����1�̃����o�֐�
  void showMessage(const char *s, int n);	// ����2�̃����o�֐�
};

// �����̂Ȃ������o�֐��̎���
void MyMessage::showMessage() {
  cout << "����ɂ��́B" << "\n";
}

// ����1�̃����o�֐��̎���
void MyMessage::showMessage(const char *s) {
  cout << s << "\n";
}

// ����2�̃����o�֐��̎���
void MyMessage::showMessage(const char *s, int n) {
  for (int i = 0; i < n; i++) {
    cout << s << "\n";
  }
}

// �N���X���g�����̃R�[�h
int main() {
  MyMessage obj;

  obj.showMessage();
  obj.showMessage("�����C�ł����H");
  obj.showMessage("�Z�p�]�_��", 3);

  return 0;
}
