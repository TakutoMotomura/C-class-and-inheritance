#include <iostream>
using namespace std;

// �N���X�̒�`
class Book {
private:
  int page;

public:
  int getPage();
  void setPage(int p);
};

// �����o�֐��̎���
int Book::getPage() {
  return page;
}

void Book::setPage(int p) {
  if ((p >= 1) && (p <= 1000)) {
    page = p;
  }
  else {
    cout << "1 �` 1000��ݒ肵�Ă��������I" << "\n";
  }
}

// �N���X���g�����̃R�[�h
int main() {
  Book bk;

  // �����o�ϐ��ɓK�؂Ȓl��������
  bk.setPage(123);

  // �����o�ϐ��̒l��\������
  cout << bk.getPage() << "\n";

  // �����o�ϐ��ɕs�K�؂Ȓl��������
  bk.setPage(30000);

  // �����o�ϐ��̒l��\������
  cout << bk.getPage() << "\n";

  return 0;
}
