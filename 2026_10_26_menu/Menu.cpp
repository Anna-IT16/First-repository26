#include <iostream>
#include <string>

struct MenuItem {
	int user_vibor;
	std::string firstline = "	1 - Изучать предметы 1-го класса";
	std::string secondline = "	2 - Изучать предметы 2-го класса";
	std::string thirdline = "	3 - Изучать предметы 3-го класса";
	std::string fourthline = "	0 - Выйти в главное меню";
};

struct MenuItem_1 {
	int user_vibor;
	std::string firstline = "	1 - Русский язык";
	std::string secondline = "	2 - Русская лиетратура";
	std::string thirdline = "	3 - Математика";
	std::string fourthline = "	4 - Я люблю физкультуру";
	std::string fifthline = "	0 - Выйти в предыдущее меню";
};

int main() {
	setlocale(LC_ALL, "Russian");
	MenuItem menu_second{};
	MenuItem_1 children{};

	std::cout << "Добро пожаловать! Я Обучайка, помогу Вам выучить любой предмет: \n";
	std::cout << "	1 - Предметы какого класса школы вы хотите учить\n";
	std::cout << "	0 - Я уже закончил школу и всё знаю\n";

	std::cin >> menu_second.user_vibor;

	if (menu_second.user_vibor == 1) {
		std::cout << menu_second.firstline << "\n";
		std::cout << menu_second.secondline << "\n";
		std::cout << menu_second.thirdline << "\n";
		std::cout << menu_second.fourthline << "\n";

		std::cin >> children.user_vibor;
		//while (children.user_vibor == 0) {
		//	std::cout << "Добро пожаловать! Я Обучайка, помогу Вам выучить любой предмет: \n";
		//	std::cout << "	1 - Предметы какого класса школы вы хотите учить\n";
		//	std::cout << "	0 - Я уже закончил школу и всё знаю\n";
		//	std::cin >> children.user_vibor;
		//}
		if (children.user_vibor == 1) {
			std::cout << children.firstline << "\n";
			std::cout << children.secondline << "\n";
			std::cout << children.thirdline << "\n";
			std::cout << children.fourthline << "\n";
			std::cout << children.fifthline << "\n";

			std::cin >> children.user_vibor;
			//while (children.user_vibor == 0) {
			//	std::cout << menu_second.firstline << "\n";
			//	std::cout << menu_second.secondline << "\n";
			//	std::cout << menu_second.thirdline << "\n";
			//	std::cout << menu_second.fourthline << "\n";
			//	std::cin >> children.user_vibor;
			//}
			if (children.user_vibor == 0) {
				std::cout << menu_second.firstline << "\n";
				std::cout << menu_second.secondline << "\n";
				std::cout << menu_second.thirdline << "\n";
				std::cout << menu_second.fourthline << "\n";
			} else {
				std::cout << "Извините, эти функции сейчас не работают..(\n";
			}
		} else if (children.user_vibor == 0) {
			std::cout << "Добро пожаловать! Я Обучайка, помогу Вам выучить любой предмет: \n";
			std::cout << "	1 - Предметы какого класса школы вы хотите учить\n";
			std::cout << "	0 - Я уже закончил школу и всё знаю\n";
		} else {
			std::cout << "Извините, эти функции сейчас не работают..(\n";
		}
	} else {
		std::cout << "Хорошо, тогда Обучайка вам действительно не нужна. До свидания!\n";
	}

	return 0;
}