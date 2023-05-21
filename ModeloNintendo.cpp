#include "ModeloNintendo.h"

/*
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
	cout << "Mamamia\n";
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
   printf("11. Cambiar nombre de tu personaje\n");
   printf("12. Cambiar color de tu personaje\n");
   printf("9. Obtener nombre de tu personaje\n");
   printf("10. Obtener color de tu personaje\n");
   printf("13. Salir\n");
}

int main() {
   string nombreUsuario;
   string nuevoNombre;
   string nuevoColor;
   int tiempo = 3;
   bool salida = false;
   int opcion;

   nombreUsuario = bienvenida();
   ModeloNintendo personaje = crearPersonaje(nombreUsuario);


   while(salida == false){
      menu();
      scanf("%d", &opcion);
      switch (opcion)
      {
      case 1:
         personaje.saludar(nombreUsuario);
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
         scanf("%s", &nuevoNombre);
         personaje.setNombre(nuevoNombre);
         printf("Nombre cambiado con éxito\n");
         sleep(tiempo);
         break;
      case 7:
         printf("Ingresa el nuevo color de tu personaje: ");
         scanf("%s", &nuevoColor);
         personaje.setColor(nuevoColor);
         printf("Color cambiado con éxito\n");
         sleep(tiempo);
         break;
      case 8:
         printf("El nombre de tu personaje es: %s", personaje.getNombre());
         break;
      case 9:
         printf("El color de tu personaje es: %s", personaje.getColor());
         sleep(tiempo);
         break;
      case 10:
         printf("Adiós, %s", nombreUsuario);
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