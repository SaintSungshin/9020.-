#include<iostream>
using namespace std;

//����'s ���̵�� �����Ծ��~!!

bool minority(int number)
{
	int count = 0;

	for (int i =2; i <=number; i++) {
		if (number%i == 0)
			count++;
	}
	if (count == 1)
		return true;
	else
		return false;
}
int fibonacci(int number)		//���⼭ �Ҽ�...�� ��ġ�°� ���ϱ�
{
	int* array = new int[number];
	int count = 0;
	
	for (int i =number/2; i>=2; i--) {		//���̰� ���� ���� ���� ���ϱ� ���ؼ� number/2���� ��!!!���ڰ� Ŭ���� ���� �� ���̰� ����
															//number/2�� ���� -> �μ��� �� = number �� �Ǳ� ������ �ִ밡 ������ number/2������
		if (minority(i) && minority(number - i))		//�Ѵ�  true�̸�....
			return i;
	}

}
int main()
{
	cout << "���̽��� ���� : ";
	int caseNumber;
	cin >> caseNumber;
	int* list = new int[caseNumber];

//¦�� �̸��� �Ҽ��� ��°� <- ���Ⱑ �̻��Ѱ�?????��������

	cout << "¦���� �Է��ϼ��� (4<=n<=10000)  ";
	int i = 0;
	while (i < caseNumber) {
		cin >> list[i];		//¦���� ��Ƶδ� ��
		i++;
	}

	for (int i = 0; i < caseNumber; i++) {
		cout<< fibonacci(list[i])<<" "<<list[i] - fibonacci(list[i])<<endl;	//�Է��� ���� �Լ��� �ѱ� 
	}


	return 0;
}