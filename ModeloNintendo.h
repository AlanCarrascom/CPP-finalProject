#include <iostream>
#include <string>

// If you're on a windows system, uncomment the following line:
// #include <windows.h>

#include <unistd.h>
#include <stdlib.h>

using namespace std;

class ModeloNintendo {
   public:
      string nombre;
      string color;
      int edad;
      bool esHumano;
      char letraInicial;      

      ModeloNintendo(string nombre, string color, int edad, int salud, bool esHumano = false);
      ~ModeloNintendo();
      
      void saludar(string nombre);
      void saltar(char tecla);
      void agacharse(char tecla = 'C');
      int avanzar(char tecla);
      void damage(string grito);
      void setNombre(string nombre);
      void setColor(string color);
      string getNombre();
      string getColor();
      void menu();
      string bienvenida();
      ModeloNintendo crearPersonaje(string nombreUsuario);
      
   protected:
      string nombreClave;
      int salud;
      char combinacionHabilidades[10];
      void habilidadesEspeciales(string combinacionTeclas);
   
   private:
      string nombreSecreto;
      char combinacionTrucos[10];
      char combinacionSecretos[10];
      void trucos(string combinacionTeclas);
      void revelarSecretos(string combinacionTeclas);
};