// ����-3-����.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "����.h"

int main(int argc, char** argv)
{
	int n, data, index;
	char c;

	MyList list;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c >> index;

		if (c == 'a')
		{
			std::cin >> data;
			list.insertItem(index, data);
		}
		else if (c == 'd')
			list.deleteItem(index);
	}

	for (int i = 0; i < list.getSize(); ++i)
		std::cout << list.getData(i) << std::endl;

	getchar();
	getchar();

	return 0;
}

