#include "ModeloNintendo.h"

// If you're on a windows system, replace 'tiempo = 20' with 'tiempo = 2000'
int tiempo = 2;

ModeloNintendo::ModeloNintendo(string nombre, string color, int edad, int salud, bool esHumano) {
	this->nombre = nombre;
   this->color = color;
   this->edad = edad;
   this->salud = salud;
   this->esHumano = esHumano;
}

ModeloNintendo::~ModeloNintendo() {
   cout << "El juego se ha cerrado" << "\n";
}

void ModeloNintendo::saludar(string nombre) {
	cout << "Hola " << nombre << "\n";
}

void ModeloNintendo::saltar(char tecla) {
	cout << "yuha\n";
}

void ModeloNintendo::agacharse(char tecla) {
	cout << "oig\n";
}

int ModeloNintendo::avanzar(char tecla) {
	cout << "tac tac tac\n";
   return 0;
}

void ModeloNintendo::damage(string grito) {
	cout << "AUCH!\n";
}

void ModeloNintendo::habilidadesEspeciales(string combinacionTeclas) {
   cout << "*Sonido épico de habilidad* \n";
}

void ModeloNintendo::trucos(string combinacionTeclas) {
   if (combinacionTeclas == "trucos") {
      cout << "Estoy dentro 7u7r\n";
   } else {
      cout << "No estás dentro UnU\n";
   }

}

void ModeloNintendo::revelarSecretos(string combinacionTeclas) {
   if (combinacionTeclas == "secretos") {
      cout << "Días Ordaz ordenó la matanza de Tlatelolco y Salinas de Gortari mató a Colosio\n";
   } else {
      cout << "Esto es confidencial, no puedes tener acceso\n";
   }
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
   printf("||      ¡Bienvenido!      ||\n");
   printf("||                        ||\n");
   printf("||      CREA TU PROPIO    ||\n");
   printf("||        PERSONAJE       ||\n");
   printf("||         NINTENDO       ||\n");
   printf("===========================\n");
   printf("||    Por favor, ingresa  ||\n");
   printf("||       tu nombre        ||\n");
   printf("||                        ||\n ");
   printf("           ");
   cin >> nombre;
   printf("===========================\n");
   return nombre;
}

ModeloNintendo crearPersonaje(string nombreUsuario){
   string nombre;
   string color;
   int edad;
   int salud;
   bool esHumano;
   system("clear");
   cout << "¡Hola, " << nombreUsuario << "!\n";
   cout << "Vamos a crear tu personaje\n";
   cout << "Ingresa el nombre de tu personaje, "<< nombreUsuario << ": ";
   cin >> nombre;
   cout << "Ingresa el color de tu personaje, "<< nombreUsuario << ": ";
   cin >> color;
   cout << "Ingresa la edad de tu personaje, "<< nombreUsuario << ": ";
   cin >> edad;
   cout << "Ingresa la salud de tu personaje, "<< nombreUsuario << ": ";
   cin >> salud;
   cout << "¿Tu personaje es humano? (1 = sí, 0 = no): ";
   cin >> esHumano;
   ModeloNintendo personaje = ModeloNintendo(nombre, color, edad, salud, esHumano);
   cout << "¡Genial! Ahora podrás interactuar con tu personaje\n";

   // This is the first occurrence of the sleep function
   sleep(tiempo);
   return personaje;
}

void menu(){
   printf("Selecciona una de las opciones para interactuar con tu personaje\n\n");
   printf("1. Saludar\n");
   printf("2. Saltar\n");
   printf("3. Agacharse\n");
   printf("4. Avanzar\n");
   printf("5. Infligir daño\n");
   printf("6. Cambiar nombre de tu personaje\n");
   printf("7. Cambiar color de tu personaje\n");
   printf("8. Obtener nombre de tu personaje\n");
   printf("9. Obtener color de tu personaje\n");
   printf("10. Salir\n\n");
}

int main() {
   string nombreUsuario;
   string nuevoNombre;
   string nuevoColor;
   int tiempo = 2;
   bool salida = false;
   int opcion;

   system("clear");
   nombreUsuario = bienvenida();
   ModeloNintendo personaje = crearPersonaje(nombreUsuario);


   while(salida == false){
      system("clear");
      menu();
      cin >> opcion;
      switch (opcion)
      {
      case 1:
         personaje.saludar(nombreUsuario);
         sleep(tiempo);
         break;
      case 2:
         personaje.saltar('a');
         sleep(tiempo);
         break;
      case 3:
         personaje.agacharse('c');
         sleep(tiempo);
         break;
      case 4:
         personaje.avanzar('d');
         sleep(tiempo);
         break;
      case 5:
         personaje.damage("auch");
         sleep(tiempo);
         break;
      case 6:
         printf("Ingresa el nuevo nombre de tu personaje: ");
         cin >> nuevoNombre;
         personaje.setNombre(nuevoNombre);
         printf("Nombre cambiado con éxito\n");
         sleep(tiempo);
         break;
      case 7:
         printf("Ingresa el nuevo color de tu personaje: ");
         cin >> nuevoColor;
         personaje.setColor(nuevoColor);
         printf("Color cambiado con éxito\n");
         sleep(tiempo);
         break;
      case 8:
         cout << "El nombre de tu personaje es: " << personaje.getNombre() << "\n";
         sleep(tiempo);
         break;
      case 9:
         cout << "El color de tu personaje es: " << personaje.getColor() << "\n";
         sleep(tiempo);
         break;
      case 10:
         cout << "Muchas gracias por jugar, " << nombreUsuario << "\n";
         salida = true;
         sleep(tiempo);
         break;
      default:
         printf("Opción no válida, ingresa una opción válida");
         sleep(tiempo);
         break;
      }
      
   }
   return 0;
}