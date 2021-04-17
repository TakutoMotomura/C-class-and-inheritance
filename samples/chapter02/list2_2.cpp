#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// ����񂯂�̎��\���萔
#define GU 0
#define CHOKI 1
#define PA 2

// �����\���萔
#define WIN 0
#define LOSE 1
#define DRAW 2

// ���[�U�[��\���N���X
class User {
private:
  int hand;		// ��
public:
  void setHand();	// ���I������
  int getHand();	// ���Ԃ�
};

// ���[�U�[�̎��I�����郁���o�֐�
void User::setHand() {
  cout << "0�F�O�[�A1�F�`���L�A2�F�p�[\n";
  cout << "���[�U�[�̎��I��ł���������";
  cin >> hand;
}

// ���[�U�[�̎��Ԃ������o�֐�
int User::getHand() {
  return hand;
}

// �R���s���[�^��\���N���X
class Computer {
private:
  int hand;		// ��
public:
  void setHand();	// ���I������
  int getHand();	// ���Ԃ�
};

// �R���s���[�^�̎��I�����郁���o�֐�
void Computer::setHand() {
  hand = rand() % 3;
}

// �R���s���[�^�̎��Ԃ������o�֐�
int Computer::getHand() {
  cout << "�R���s���[�^�̎聁" << hand << "\n";
  return hand;
}

// �W���b�W��\���N���X
class Judge {
private:
  int judge;		// ���s
public:
  void doJudge(User u, Computer c); // ���s�𔻒肷��
  void showJudge();	// ���s��\������
};

// �W���b�W�����s�𔻒肷�郁���o�֐�
void Judge::doJudge(User u, Computer c) {
  int user, computer;

  user = u.getHand();
  computer = c.getHand();
  if (user == computer) {
    judge = DRAW;
  }
  else if (user == GU && computer == CHOKI ||
           user == CHOKI && computer == PA ||
           user == PA && computer == GU) {
    judge = WIN;
  }
  else {
    judge = LOSE;
  }
}

// �W���b�W�����s��\�����郁���o�֐�
void Judge::showJudge() {
  if (judge == WIN) {
    cout << "���[�U�[�̏����ł��I\n";
  }
  else if (judge == LOSE) {
    cout << "���[�U�[�̕����ł��I\n";
  }
  else if (judge == DRAW) {
    cout << "���������ł��I\n";
  }
}

// �v���O�����̃��C���֐�
int main() {
  User user;
  Computer computer;
  Judge judge;

  // ����������������
  srand(time(NULL));

  // ���[�U�[�����I������
  user.setHand();

  // �R���s���[�^�����I������
  computer.setHand();

  // ���s�𔻒肷��
  judge.doJudge(user, computer);

  // ���s��\������
  judge.showJudge();

  return 0;
}
