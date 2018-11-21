#include<iostream>
using namespace std;

//민진's 아이디어 가져왔어용~!!

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
int fibonacci(int number)		//여기서 소수...로 합치는거 구하기
{
	int* array = new int[number];
	int count = 0;
	
	for (int i =number/2; i>=2; i--) {		//차이가 가장 작은 수를 구하기 위해서 number/2부터 함!!!숫자가 클수록 숫자 간 차이가 적음
															//number/2한 이유 -> 두수의 합 = number 가 되기 때문에 최대가 무조건 number/2이하임
		if (minority(i) && minority(number - i))		//둘다  true이면....
			return i;
	}

}
int main()
{
	cout << "케이스의 갯수 : ";
	int caseNumber;
	cin >> caseNumber;
	int* list = new int[caseNumber];

//짝수 미만의 소수를 담는곳 <- 여기가 이상한가?????ㅋㅋㅋㅋ

	cout << "짝수를 입력하세요 (4<=n<=10000)  ";
	int i = 0;
	while (i < caseNumber) {
		cin >> list[i];		//짝수를 담아두는 곳
		i++;
	}

	for (int i = 0; i < caseNumber; i++) {
		cout<< fibonacci(list[i])<<" "<<list[i] - fibonacci(list[i])<<endl;	//입력한 수를 함수로 넘김 
	}


	return 0;
}
