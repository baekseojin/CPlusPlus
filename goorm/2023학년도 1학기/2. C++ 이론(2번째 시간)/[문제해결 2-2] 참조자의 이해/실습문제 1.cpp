#include <iostream>
using namespace std;

int main(void)
{
	int num = 12;
	int *ptr = &num;
	int **dptr = &ptr;

	int &ref = num;
	int *(&pref) = ptr;
	int **(&dpref) = dptr;

	ref = ref + 10;
	*pref = *pref + 20;
	**dpref = **dpref + 30;

	cout << ref << ' ' << *pref << ' ' << **dpref;
	return 0;
}

// 정답 : 72 72 72

/*
번외 : 참조자의 선언 가능 범위

O : int &ref = arr[1];

X : int &ref = 20;
	int &ref;
	int &ref = NULL;
 */