#include <iostream>

using namespace std;

//1) Una función recibe 3 números enteros. La función debe devolver el mayor de ellos.
//No debe utilizar condiciones compuestas (AND, ni OR)
int mayor(int num1, int num2, int num3) {
    int may;
    if (num1 > num2) {
        if (num1 > num3)
            may = num1;
        else if (num3 > num2)
            may = num3;
        else
            may = num2;
    } else {
        if (num2 > num3)
            may = num2;
        else
            may = num3;
    }
    return may;
}

//2) Una función recibe como parámetro un número entero, que representa el mes del año.
// La función debe devolver el nombre del mes.
// Por ejemplo, si el mes es 2 debe devolver "febrero".
string nombre_del_mes(int mes) {
    string aux = "";

    if (mes == 1)
        aux = "Enero";
    else if (mes == 2)
        aux = "Febrero";
    else if (mes == 3)
        aux = "Marzo";
    else if (mes == 4)
        aux = "Abril";
    else if (mes == 5)
        aux = "Mayo";
    else if (mes == 6)
        aux = "Junio";
    else if (mes == 7)
        aux = "Julio";
    else if (mes == 8)
        aux = "Agosto";
    else if (mes == 9)
        aux = "Septiembre";
    else if (mes == 10)
        aux = "Octubre";
    else if (mes == 11)
        aux = "Noviembre";
    else if (mes == 12)
        aux = "Diciembre";
    else
        aux = "El numero que ingreso no forma parte de los meses (limite = 12)";
    return aux;
}


//3) Diseñe la función que genere un rectángulo.
// La función debe recibir un entero que indica el número de filas del rectángulo;
// y un carácter que indica el relleno del rectángulo. Por ejemplo:
//rectangulo(2,"+") debe imprimir:
//
//++++++++++
//
//++++++++++
//
//rectángulo(3,"=") debe imprimir:
//
//==========
//
//==========
//
//==========
void cuadrado(int fila, char caracter) {

    for (int i = 1; i <= fila; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout<<caracter;
        }
        cout<<endl;
    }
}
//4) Diseñe una función que imprima los primeros n números primos.
// El parámetro n indica el total de primos a imprimir.
bool esPrimo(int num)
{
    int cont=2;
    bool flat= true;
    while(cont <= num/2 && flat==true)
    {
        if(num % cont == 0)
            flat = false;
        cont++;
    }
    return  flat;
}

void imprimePrimos(int n)
{
    int i=1; int j=1;
    while(i<=n){
        j++;
        if(esPrimo(j))
        {
            cout<<" "<< j;
            i++;
        }
    }
}
//5) Diseñe la función que devuelva la sumatoria de los n primeros números primos.
// El parámetro n indica el total de primos a sumar.
int sumatoriaPrimos(int n)
{
    int i=1; int j=1; int suma=0;
    while(i<=n)
    {
        j++;
        if(esPrimo(j)){
            suma+=j;
            i++;
        }
    }
    return suma;
}

//6) Diseñe la función que recibe un entero que representa el mes del año.
// la función debe retorna el día máxima que trae ese mes. Por ejemplo si es
//7 debe devolver 31. Ojo con el mes de febrero
//string lista_del_mes(int mes) {
//    string mensaje;
//    bool anio;
//    if (mes == 1)
//        mensaje += "El mes de Enero contiene 31 dias";
//    else if (mes == 2) {
//        cout << "Es anio bisiesto? responda con Si=1 o No=2" << endl;
//        cin >> anio;
//        if (anio) {
//            mensaje += "El mes de Febrero contiene 29 dias";
//        } else {
//            mensaje += "El mes de Febrero contiene 28 dias";
//        }
//    } else if (mes == 3)
//        mensaje += "El mes de Marzo contiene 31 dias";
//    else if (mes == 4)
//        mensaje += "El mes de Abril contiene 30 dias";
//    else if (mes == 5)
//        mensaje += "El mes de Mayo contiene 31 dias";
//    else if (mes == 6)
//        mensaje += "El mes de Junio contiene 30 dias";
//    else if (mes == 7)
//        mensaje += "El mes de Julio contiene 31 dias";
//    else if (mes == 8)
//        mensaje += "El mes de Agosto contiene 31 dias";
//    else if (mes == 9)
//        mensaje += "El mes de Septiembre contiene 30 dias";
//    else if (mes == 10)
//        mensaje += "El mes de Octubre contiene 31 dias";
//    else if (mes == 11)
//        mensaje += "El mes de Noviembre contiene 30 dias";
//    else if (mes == 12)
//        mensaje += "El mes de Diciembre contiene 31 dias";
//    else
//        mensaje += "El numero que ingreso no forma parte de los meses (limite = 12)";
//
//    return mensaje;
//}
int diaMaximoDelMes(int mes, int anio)
{
    int limite=0;
    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
        limite=31;
    else if(mes==2)
        if(anio%4 ==0)
            limite = 29;
        else
            limite = 28;
        else
            limite=30;

        return limite;
}

int main() {
    cout << endl << "el mayor de 20, 10, 8 es: " << mayor(20, 10, 8);
    cout << endl << "el mayor de 20, 30, 21 es: " << mayor(30, 20, 21);
    cout << endl << "el mayor de 20, 30, 210 es: " << mayor(30, 20, 210);

    cout << endl << "El mes 5 correponde a " << nombre_del_mes(5);
    cout << endl << "El mes 1 correponde a " << nombre_del_mes(1);
    cout << endl << "El mes 12 correponde a " << nombre_del_mes(12);
    cout << endl << "El mes 15 correponde a " << nombre_del_mes(15);

    cout << endl;
    cout << "Imprimientdo figuras" << endl;
    cuadrado(5, '+');

    cout<<endl<<"Impresion de primos";
    imprimePrimos(10);
    cout<<endl<<"La sumatoria de los 5 primeros primos es: ";
    int suma= sumatoriaPrimos(5);
    cout<<suma<<endl;
//    int mes;
//    cout << "Ingrese un numero entero" << endl;
//    cin >> mes;
//    cout << lista_del_mes(mes);
    cout<<endl<<"Enero trae " <<diaMaximoDelMes(1, 2021)<<" DIAS ";
    cout<<endl<<"Diciembre trae " <<diaMaximoDelMes(12, 2021)<<" DIAS ";
    cout<<endl<<"Junio trae " <<diaMaximoDelMes(6, 2021)<<" DIAS ";
    cout<<endl<<"Febrero trae " <<diaMaximoDelMes(2, 2016)<<" DIAS ";


    return 0;
}
