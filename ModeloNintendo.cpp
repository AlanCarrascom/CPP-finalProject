#include "ModeloNintendo.h"

/*
20% Agregar dos settes y dos getters
20% Agregar un método nuevo
40% Un menú (no importa si es sencillo) que te permita hacer uso de los métodos, tiene que ser original, juega con el código. (Puedes crear un tablero de posiciones y que si avanzas x+1 o si saltas y+1, puedes dejar al usuario crear un nuevo personaje personalizado, etc.)
*/

ModeloNintendo::ModeloNintendo(string nombre, string color, int edad, int salud, bool esHumano) {
	this->nombre = nombre;
   this->color = color;
   this->edad = edad;
   this->salud = salud;
   this->esHumano = esHumano;
}

ModeloNintendo::~ModeloNintendo() {
   cout << "Murió" << "\n";
}

void ModeloNintendo::saludar(string nombre) {
	cout << "Hola " << nombre << "\n";
}

void ModeloNintendo::saltar(char tecla) {
	cout << "yuha";
}

void ModeloNintendo::agacharse(char tecla) {
	cout << "oig";
}

int ModeloNintendo::avanzar(char tecla) {
	cout << "tac tac tac";
   return 0;
}

void ModeloNintendo::damage(string grito) {
	cout << "Mamamia";
}

void ModeloNintendo::habilidadesEspeciales(string combinacionTeclas) {
   cout << "*Sonido épico de habilidad*" << combinacionTeclas;
}

void ModeloNintendo::trucos(string combinacionTeclas) {
   cout << "Estoy dentro 7u7r";
}

void ModeloNintendo::revelarSecretos(string combinacionTeclas) {
   cout << "Días Ordaz ordenó la matanza de Tlatelolco y Salinas de Gortari mató a Colosio";
}

void ModeloNintendo::setNombre(string nombre) {
   this->nombre = nombre;
}

void ModeloNintendo::setColor(string color) {
   this->color = color;
}

string ModeloNintendo::getNombre() {
   return this->nombre;
}

string ModeloNintendo::getColor() {
   return this->color;
}

/*
- Bienvenida e instrucciones
- crear personaje
- menu de opciones

*/

string bienvenida(){
   string nombre;
   printf("============================\n");
   printf("||     ¡Bienvenido!       ||\n");
   printf("||                        ||\n");
   printf("||      CREA TU PROPIO    ||\n");
   printf("||        PERSONAJE       ||\n");
   printf("||         NINTENDO       ||\n");
   printf("===========================\n");
   printf("||    Por favor, ingresa  ||\n");
   printf("||       tu nombre        ||\n");
   scanf("%s", &nombre);
   printf("===========================\n");
   return nombre;
}

ModeloNintendo crearPersonaje(string nombreUsuario){
   string nombreUsuario;
   string nombre;
   string color;
   int edad;
   int salud;
   bool esHumano;
   printf("Ingresa el nombre de tu personaje, %s: ", nombreUsuario);
   cin >> nombre;
   printf("Ingresa el color de tu personaje, %s: ");
   cin >> color;
   printf("Ingresa la edad de tu personaje, %s: ", nombreUsuario);
   cin >> edad;
   printf("Ingresa la salud de tu personaje, %s: ", nombreUsuario);
   cin >> salud;
   printf("¿Tu personaje es humano? (1 = si, 0 = no), %s: ", nombreUsuario);
   cin >> esHumano;
   ModeloNintendo personaje = ModeloNintendo(nombre, color, edad, salud, esHumano);
   return personaje;
}

void menu(){
   printf("1. Saludar\n");
   printf("2. Saltar\n");
   printf("3. Agacharse\n");
   printf("4. Avanzar\n");
   printf("5. Daño\n");
   printf("6. Habilidades especiales\n");
   printf("7. Trucos\n");
   printf("8. Revelar secretos\n");
   printf("9. Obtener nombre de tu personaje\n");
   printf("10. Obtener color de tu personaje\n");
   printf("11. Cambiar nombre de tu personaje\n");
   printf("12. Cambiar color de tu personaje\n");
   printf("13. Salir\n");
}

int main() {
   string nombreUsuario;
   int opcion;

   nombreUsuario = bienvenida();
   ModeloNintendo personaje = crearPersonaje(nombreUsuario);
   menu();
   
   scanf("%d", &opcion);
   
   switch (opcion)
   {
   case 1:
      personaje.saludar(nombreUsuario);
      break;
   
   default:
      printf("Opción no válida, ingresa una opción válida");
      break;
   }

   return 0;
}