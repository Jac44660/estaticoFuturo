#include "futuro.h"
using namespace std;
namespace leerFuturoLibreria
{
	void futuro::prediciones() {
        // Semilla para la generaci�n de n�meros aleatorios
        srand(time(0));
        string prediciones[4] = { "En tu futuro, veo grandes �xitos profesionales", "pronto conocer�s a alguien que cambiar� tu vida para siempre.", "Tu creatividad ser� tu mayor fortaleza", "En tu futuro veo grandes �xitos profesionales." };

        // Seleccionar una predicci�n aleatoria
        int indice = rand() % 3;
        cout << prediciones[indice] << endl;
	}

	bool futuro::validar_edad(int age) {
        // condicionales
        if (age < 0 || age > 100) {
            return true;
        }
        else {
            return false;
        }
	}

	bool futuro::validar_mes(std::string month) {
        // array de todos los meses
        string meses[12] = { "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                                   "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre" };

        // vamos por toda la array y si uno es valido devolver false
        for (int i = 0; i < 12; i++) {
            if (month == meses[i]) {
                return false;
            }
        }
        // significa que es incorrecto
        return true;
	}
}
