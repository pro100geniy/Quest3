#include "variables.h"
#include <iostream>

std::string getMounth() {
	std::string  mounthName;
	switch (mounth)
	{
	case 1: {

		days = 31;
		mounthName = "������";
		break;
	}
	case 2: {

		days = 28;
		mounthName = "�������";
		break;
	}
	case 3: {

		days = 31;
		mounthName = "����  ";
		break;
	}
	case 4: {

		days = 30;
		mounthName = "������  ";
		break;
	}
	case 5: {

		days = 31;
		mounthName = "���  ";
		break;
	}
	case 6: {

		days = 30;
		mounthName = "����  ";
		break;
	}
	case 7: {

		days = 31;
		mounthName = "����  ";
		break;
	}
	case 8: {

		days = 31;
		mounthName = "������ ";
		break;
	}
	case 9: {

		days = 30;
		mounthName = "��������   ";
		break;
	}
	case 10: {

		days = 30;
		mounthName = "�������   ";
		break;
	}
	case 11: {

		days = 30;
		mounthName = "������  ";
		break;
	}
	case 12: {

		days = 31;
		mounthName = "�������  ";
		break;
	}
	default:
		break;
	}
	return mounthName;
}