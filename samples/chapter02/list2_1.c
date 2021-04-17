#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* ����񂯂�̎��\���萔 */
#define GU 0
#define CHOKI 1
#define PA 2

/* �����\���萔 */
#define WIN 0
#define LOSE 1
#define DRAW 2

/* �֐��̃v���g�^�C�v�錾 */
int getUserHand();
int getComputerHand();
int doJudge(int user, int computer);
void showJudge(int judge);

/* �v���O�����̃��C���֐� */
int main() {
  int user, computer, judge;

  /* ���������������� */
  srand(time(NULL));

  /* ���[�U�[�����I������ */
  user = getUserHand();

  /* �R���s���[�^�����I������ */
  computer= getComputerHand();

  /* ���s�𔻒肷�� */
  judge = doJudge(user, computer);

  /* �����\������ */
  showJudge(judge);

  return 0;
}

/* ���[�U�[�̎��Ԃ��֐� */
int getUserHand() {
  int hand;

  printf("0�F�O�[�A1�F�`���L�A2�F�p�[\n");
  printf("���[�U�[�̎聁");
  scanf("%d", &hand);

  return hand;
}

/* �R���s���[�^�̎��Ԃ��֐� */
int getComputerHand() {
  int hand;

  hand = rand() % 3;
  printf("�R���s���[�^�̎聁%d\n", hand);

  return hand;
}

/* ���s�𔻒肷��֐� */
int doJudge(int user, int computer) {
  int judge;

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

  return judge;
}

/* ���s��\������֐� */
void showJudge(int judge) {
  if (judge == WIN) {
    printf("���[�U�[�̏����ł��I\n");
  }
  else if (judge == LOSE) {
    printf("���[�U�[�̕����ł��I\n");
  }
  else if (judge == DRAW) {
    printf("���������ł��I\n");
  }
}
