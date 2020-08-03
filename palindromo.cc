//pograma que verifica que palabras son palindromas
//jhon alejandro mariaca

#include <iostream>//incluir librerias
using namespace std;

string freversa(string p){//añadir funcion reverse
 string r;
 for(int i = p.size()-1; i >= 0; i--)//Agregarle parametros a la funcion
  r += p[i];
 return r;//retornar resultado
}

int main(){
 string palabra, reversa;//declarar variables
 cin >> palabra;//ingresar palabra
 reversa = freversa(palabra);//comparar palabra con su traduccion al revez
 cout << reversa;//devolver el reverso de la palabra
 if(palabra == reversa)
  cout << " Es palindromo";//impresion resultados
 else
  cout << " No  palindromo";//impresion resultados
}