// ТИМП-3-Лист.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "лист.h"

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

