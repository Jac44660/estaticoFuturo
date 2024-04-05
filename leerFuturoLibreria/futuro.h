#pragma once
#include <iostream>

namespace leerFuturoLibreria
{
	class futuro
	{
	public:
		static void prediciones();

		static bool validar_edad(int age);

		static bool validar_mes(std::string month);
	};
}