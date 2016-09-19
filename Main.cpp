#include "Articulos.h"
#include "FyV.h"
#include "Granos.h"
#include "Lacteos.h"
#include "Carnes.h"
#include "Enlatados.h"
#include "Lavanderia.h"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


int main(int argc, char const *argv[])
{
	vector<Articulos*> articulos;
	int opc = 0;
	while(opc != 4)
	{
		opc = 0;
		cout<< "------Supermercados DankMemes------" << endl;
		cout<<"1.-Modo Administrador"<<endl<<"2.-Modo Venta"<<endl<<"3.-Listado de productos por articulo"<<endl<<"4.-Salir"<<endl<<"...";
		cin>>opc;
		switch(opc)
		{
			case 1:
			{
				cout<< "------Administrador------" << endl;
				int admopc = 0;
				cout<< "1.-Agregar"<<endl<<"2.-Eliminar"<<endl << "...";
				cin>>admopc;

				if (admopc == 1)
				{
					string codigo = "";
					string nombre = "";
					int precio = 0;
					int cantidad = 0;
					string tipo = "";

					int artopc = 0;

					cout<< "1.-Frutas y Verduras"<<endl<<"2.-Granos"<<endl << "3.-Carnes"<<endl<<"4.-Lacteos"<<endl<<"5.-Enlatados"<<endl<<"6.-Lavanderia" << endl<< "...";
					cin>> artopc;
					if (artopc == 1)
					{
						string vencimiento = "";

						cout<< "Ingrese el codigo del articulo!"<< endl<<"...";
						cin>> codigo;
						cout<< "Ingrese el nombre del articulo!"<< endl<<"...";
						cin>> nombre;
						cout<< "Ingrese el precio del articulo!"<< endl<<"...";
						cin>> precio;
						cout<< "Ingrese la cantidad de producto que tiene el articulo!"<< endl<<"...";
						cin>> cantidad;
						cout<< "seleccione el tipo de estado del producto"<< endl;
						cout<< "1.-Refrigerado"<<endl<<"2.-Fresco"<<endl<<"3.-Procesado"<<endl<<"...";

						int estado = 0;
						cin>> estado;

						if (estado == 1)
						{
							tipo = "Refrigerado";
						}
						if (estado == 2)
						{
							tipo = "Fresco";
						}
						if (estado == 3)
						{
							tipo = "Procesado";
						}

						cout<< "Ingrese la fecha de vencimiento"<<endl<< "...";
						cin>> vencimiento;

						articulos.push_back(new FyV(codigo, nombre, precio, cantidad, tipo, vencimiento));

						cout<< "Se a agregado sucesivamente un articulo!"<< endl;

					}

					if (artopc == 2)
					{
						bool Aceitoso;
						bool Procesado;

						cout<< "Ingrese el codigo del articulo!"<< endl<<"...";
						cin>> codigo;
						cout<< "Ingrese el nombre del articulo!"<< endl<<"...";
						cin>> nombre;
						cout<< "Ingrese el precio del articulo!"<< endl<<"...";
						cin>> precio;
						cout<< "Ingrese la cantidad de producto que tiene el articulo!"<< endl<<"...";
						cin>> cantidad; 
						cout<< "seleccione el tipo de estado del producto"<< endl;

						cout<< "1.-Grano"<<endl<<"2.-Cereal"<<endl<<"3.-Legumbre"<<endl<<"...";

						int estado = 0;
						cin>> estado;

						if (estado == 1)
						{
							tipo = "Grano";
						}
						if (estado == 2)
						{
							tipo = "Cereal";
						}
						if (estado == 3 )
						{
							tipo = "Legumbre";
						}

						cout<< "1.-Aceitoso"<< endl << "2.-No Aceitoso"<<endl<< "...";

						int oil = 0;
						cin>> oil;

						if (oil == 1)
						{
							Aceitoso = true;
						}
						else
						{
							Aceitoso = false;
						}

						cout<<"1.-Procesado"<< endl << "2.-No Procesado"<<endl<< "...";

						int process = 0;
						cin>> process;

						if (process == 1)
						{
							Procesado = true;
						}
						else
						{
							Procesado = false;
						}

						articulos.push_back(new Granos(codigo, nombre, precio, cantidad, tipo, Aceitoso, Procesado));

						cout<< "Se a agregado sucesivamente un articulo!"<< endl;

					}

					if (artopc == 3)
					{
						string vencimiento = "";
						string Corte = "";

						cout<< "Ingrese el codigo del articulo!"<< endl<<"...";
						cin>> codigo;
						cout<< "Ingrese el nombre del articulo!"<< endl<<"...";
						cin>> nombre;
						cout<< "Ingrese el precio del articulo!"<< endl<<"...";
						cin>> precio;
						cout<< "Ingrese la cantidad de producto que tiene el articulo!"<< endl<<"...";
						cin>> cantidad;
						cout<< "seleccione el tipo de estado del producto"<< endl;
						cout<< "1.-Vaca"<<endl<<"2.-Cordero"<<endl<<"3.-Cerdo"<<endl<<"...";

						int estado = 0;
						cin>> estado;

						if (estado == 1)
						{
							tipo = "Vaca";
						}
						if (estado == 2)
						{
							tipo = "Cordero";
						}
						if (estado == 3)
						{
							tipo = "Cerdo";
						}

						cout<< "Ingrese la fecha de vencimiento"<<endl<< "...";
						cin>> vencimiento;

						cout<< "1.-Mariposa"<<endl<<"2.-Tajo"<<endl<<"3.-Embutido"<<endl<<"...";

						estado = 0;
						cin>> estado;

						if (estado == 1)
						{
							Corte = "Mariposa";
						}
						if (estado == 2)
						{
							Corte = "Tajo";
						}
						if (estado == 3)
						{
							Corte = "Embutido";
						}

						articulos.push_back(new Carnes(codigo, nombre, precio, cantidad, tipo, vencimiento, Corte));

						cout<< "Se a agregado sucesivamente un articulo!"<< endl;

					}

					if (artopc == 4)
					{
						string vencimiento = "";
						int Peso = 0;

						cout<< "Ingrese el codigo del articulo!"<< endl<<"...";
						cin>> codigo;
						cout<< "Ingrese el nombre del articulo!"<< endl<<"...";
						cin>> nombre;
						cout<< "Ingrese el precio del articulo por libra o litro!"<< endl<<"...";
						cin>> precio;
						cout<< "Ingrese la cantidad de producto que tiene el articulo!"<< endl<<"...";
						cin>> cantidad;
						cout<< "seleccione el tipo de estado del producto"<< endl;
						cout<< "1.-Leche"<<endl<<"2.-Queso"<<endl<<"...";

						int estado = 0;
						cin>> estado;

						if (estado == 1)
						{
							tipo = "Leche";
						}
						if (estado == 2)
						{
							tipo = "Queso";
						}

						cout<< "Ingrese la fecha de vencimiento"<<endl<< "...";
						cin>> vencimiento;

						cout<< "Ingrese el Peso del articulo"<<endl<< "...";
						cin>> Peso;

						precio = Peso * precio;

						articulos.push_back(new Lacteos(codigo, nombre, precio, cantidad, tipo, vencimiento, Peso));

						cout<< "Se a agregado sucesivamente un articulo!"<< endl;

					}

					if (artopc == 5)
					{
						string vencimiento = "";
						int Tamano = 0;

						cout<< "Ingrese el codigo del articulo!"<< endl<<"...";
						cin>> codigo;
						cout<< "Ingrese el nombre del articulo!"<< endl<<"...";
						cin>> nombre;
						cout<< "Ingrese el precio del articulo por libra o litro!"<< endl<<"...";
						cin>> precio;
						cout<< "Ingrese la cantidad de producto que tiene el articulo!"<< endl<<"...";
						cin>> cantidad;
						cout<< "seleccione el tipo de estado del producto"<< endl;
						cout<< "1.-Naturales"<<endl<<"2.-Sinteticos"<<endl<<"...";

						int estado = 0;
						cin>> estado;

						if (estado == 1)
						{
							tipo = "Naturales";
						}
						if (estado == 2)
						{
							tipo = "Sinteticos";
						}

						cout<< "Ingrese la fecha de vencimiento"<<endl<< "...";
						cin>> vencimiento;

						cout<< "Ingrese el Tamano del articulo"<<endl<< "...";
						cin>> Tamano;

						articulos.push_back(new Enlatados(codigo, nombre, precio, cantidad, tipo, vencimiento, Tamano));

						cout<< "Se a agregado sucesivamente un articulo!"<< endl;

					}

					if (artopc == 6)
					{
						string Marca = "";
						string Componentes = "";

						cout<< "Ingrese el codigo del articulo!"<< endl<<"...";
						cin>> codigo;
						cout<< "Ingrese el nombre del articulo!"<< endl<<"...";
						cin>> nombre;
						cout<< "Ingrese el precio del articulo por libra o litro!"<< endl<<"...";
						cin>> precio;
						cout<< "Ingrese la cantidad de producto que tiene el articulo!"<< endl<<"...";
						cin>> cantidad;
						cout<< "seleccione el tipo de estado del producto"<< endl;
						cout<< "1.-Asistin"<<endl<<"2.-Jabon"<<endl<< "3.-Detergente" <<endl << "4.-Trastes" <<endl<< "...";

						int estado = 0;
						cin>> estado;

						if (estado == 1)
						{
							tipo = "Asistin";
						}
						if (estado == 2)
						{
							tipo = "Jabon";
						}
						if (estado == 3)
						{
							tipo = "Detergente";
						}
						if (estado == 4)
						{
							tipo = "Trastes";
						}

						cout<< "Ingrese la marca del articulo"<<endl<< "...";
						cin>> Marca;

						cout<< "Ingrese el Componente principal del articulo"<<endl<< "...";
						cin>> Componentes;

						articulos.push_back(new Lavanderia(codigo, nombre, precio, cantidad, tipo, Marca, Componentes));

						cout<< "Se a agregado sucesivamente un articulo!"<< endl;
					}
				}

				if (admopc == 2)
				{
					for (int i = 0; i < articulos.size(); ++i)
					{
						cout<< endl;
						Articulos* temp = (articulos[i]);
						Articulos* arti=dynamic_cast<Articulos*>(temp);
						cout<< i << ".-"<<arti->toString()<<endl;
					}

					cout<< "Ingrese la posicion del articulo a borrar"endl << "...";

					int posicion = 0;
					cin>> posicion;

					articulos.erase(articulos.begin() + posicion);

					cout<< "Se a borrado sucesivamente!"<< endl;
				}
				break;
			}

			case 2:
			{

				vector<Articulos*> Carrito;
				cout<< "------Modo Venta------" << endl;

				int resp = 0;
				while(resp != 1)
				{
					for (int i = 0; i < articulos.size(); ++i)
					{
						cout<< endl;
						Articulos* temp = (articulos[i]);
						Articulos* arti=dynamic_cast<Articulos*>(temp);
						cout<< i << ".-"<<arti->toString()<<endl;
					}

					cout<< "Ingrese la posicion del articulo a agregar al carrito!"<< endl << "...";

					int posicion = 0;	
					cin>> posicion;

					cout<< "Ingrese cantidad a comprar!"<< endl;
					int valor = 0;
					cin>> valor;

					while((articulos[posicion]->getCantidad() - valor) <= 0)
					{
						cout<< "Valor de cantidad incorrecta! vuelva a ingresar un nuevo valor!"<< endl << "...";
						cin>> valor;
					}

					Carrito.push_back(articulos[posicion]);

					articulos[posicion]->setCantidad(articulos[posicion]->getCantidad() - valor);

					if (articulos[posicion]->getCantidad() == 0)
					{
						articulos.erase(articulos.begin() + posicion);
						cout<< "Articulo acabado!";
					}

					cout<< "Desea Continuar!? 0/1"<< endl << "...";
					cin>> resp;
				}
				break;
			}

			case 3:
			{
				if (articulos.empty())
				{
					cout<< "NO HAY ARTICULOS REGISTRADOS!" <<endl;
				}
				else
				{
					cout<<"------Listar------"<<endl;
					cout<<articulos.size()<<endl;
					for (int i = 0; i < articulos.size(); i++)
					{
						Articulos* temp = (articulos[i]);
						if (dynamic_cast<FyV*>(articulos[i])!=NULL)
						{
							FyV* fyv=dynamic_cast<FyV*>(temp);
							cout<<fyv->toString()<<endl;
						}
						if (dynamic_cast<Granos*>(temp)!=NULL)
						{
						Granos *grano=dynamic_cast<Granos*>(temp);
						cout<<grano->toString()<<endl;
						}
						if (dynamic_cast<Carnes*>(temp)!=NULL)
						{
						Carnes *carne=dynamic_cast<Carnes*>(temp);
						cout<<carne->toString()<<endl;
						}
						if (dynamic_cast<Lacteos*>(temp)!=NULL)
						{
						Lacteos *lacteo=dynamic_cast<Lacteos*>(temp);
						cout<<lacteo->toString()<<endl;
						}
						if (dynamic_cast<Lacteos*>(temp)!=NULL)
						{
						Enlatados *enlatado=dynamic_cast<Enlatados*>(temp);
						cout<<enlatado->toString()<<endl;
						}
						if (dynamic_cast<Lacteos*>(temp)!=NULL)
						{
						Lavanderia *lavanderia=dynamic_cast<Lavanderia*>(temp);
						cout<<lavanderia->toString()<<endl;
						}
					}
				}
				break;
			}
		}
	}
}