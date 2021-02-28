#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include<iomanip>
#include<cmath>

using namespace std;

main()
{
	int op;
	while(op !=21)
	{
		cout<< "1)------OPERACIONES CON DOS NUMEROS----------------"<<endl;
		cout<< "2)------NUMERO PAR O IMPAR-------------------------"<<endl;
		cout<< "3)------CONVERSOR DE UNIDADES----------------------"<<endl;
		cout<< "4)------DETECTOR DE PALINDROMO---------------------"<<endl;
		cout<< "5)------CONVERSOR ARABIGOS a ROMANOS---------------"<<endl;
		cout<< "6)------CONVERSOR DE ENTEROS a LETRAS--------------"<<endl;
		cout<< "7)------CONVERSOR DE ENTEROS (DECIMAL) a LETRAS----"<<endl;
		cout<< "8)------TABLA DE MULTIPLICAR-----------------------"<<endl;
		cout<< "9)------TABLAS DE MULTIPLICAR DEL 1 AL 10----------"<<endl;
		cout<< "10)-----MULTIPLICACION (FORMA GRAFICA)-------------"<<endl;
		cout<< "11)-----CONVERSOR NUMEROS DECINALES a BINARIO------"<<endl;
		cout<< "12)-----CONVERSOR NUMEROS DECIMALES a HEXADECIMALES"<<endl;
		cout<< "13)-----FIGURAS GEOMETRICAS BASICAS----------------"<<endl;
		cout<< "14)-----MOVER UN PUNTO-----------------------------"<<endl;
		cout<< "15)-----SIMULACION DE CAJERO AUTOMATICO------------"<<endl;
		cout<< "16)-----CALCULAR LA HIPOTENUSA---------------------"<<endl;
		cout<< "17)-----PENDIENTE----------------------------------"<<endl;
		cout<< "18)-----PENDIENTE----------------------------------"<<endl;
		cout<< "19)-----PENDIENTE----------------------------------"<<endl;
		cout<< "20)-----PENDIENTE----------------------------------"<<endl;
		cout<< "21)-SALIR-"<<endl;
		cout<< "-Elija una opcion a realizar:"<< endl;
		cin>>op;
		 
		switch(op)
		{
			case 1:
			 system("cls");
			    float a,b,s,r,p,d;
			 	cout<<"\n ingrese numero a:"<<endl;
 				cin>>a;
 				cout<<"\n ingrese numero b:"<<endl;
 				cin>>b;
 				s=a+b;
 				r=a-b;
 				p=a*b;
 				d=a/b;
 				cout<<"la suma:"<<a<<"+"<<b<<"="<<s<<endl;
 				cout<<"la resta:"<<a<<"-"<<b<<"="<<r<<endl;
 				cout<<"la multiplicacion:"<<a<<"*"<<b<<"="<<p<<endl;
 				cout<<"la division:"<<a<<"/"<<b<<"="<<d<<endl;
 				
			 system("pause");
			 system("cls");
			 break;
	    
		
			case 2:
				system("cls");
				int n;
				cout<<"Ingrese un numero"<<endl;
				cin>>n;
				
				if(n%2 == 0)
				cout<<"Elnumero ingresado es par"<<endl;
				else
				cout<<"El numero ingresado es impar"<<endl;
				system("pause");
				system("cls");
			break;
			
			case 3:
				system("cls");
			
				  int x;
	
			       cout << "1) Kilometros a millas-----" << endl;
			       cout << "2) Millas a kilometros-----" << endl; 
			       cout << "3) Metros a pulgadas-------" << endl;
			       cout << "4) pulgadas a metros-------" << endl;
			       cout << "5) Libras a kilos----------" << endl;
		           cout << "6) Kilos a libras----------" << endl;
			       cin >> x;
		      	
		      	    switch (x)
		      	    {
					  
				 case 1:
					system("cls");
					float co1, km, milla;
					cout << " Ingrese los kilometros" << endl;
					cin >> co1;
					milla = co1 * 0.6214;
					cout << " la conversion de kilometros a millas es: " << milla<<" millas" << endl;
					system("pause");
					system("cls");
					break;
				 case 2:
					system("cls");
					 float co2, millas, kilometros;
					cout << " Ingrese las millas " << endl;
					cin >> co2;
					km = co2 * 1.609;
					cout << " la conversion de millas a kilometros es: "<< km <<" kilometros"<< endl;
					system("pause");
					system("cls");
					break; 
				 case 3:
					system("cls");
					float co3, mt, pulg;
					cout << " Ingrese la cantidad de metros "<< endl;
					cin >> co3;
					mt = co3 * 0.0254;
					cout << " la conversion de pulgadas a metros es: "<< mt <<" metros"<< endl;
					system("pause");
					system("cls");
					break;
			   	 case 4: 	
				    system("cls");
				    float co4, mts,pul;
					cout << " Ingrese la cantidad de pulgadas " << endl;
					cin >> co4;
					pul = co4 * 39.37;
					cout << " la conversion de metros a pulgadas es: "<< pul <<" pulgadas"<< endl;	
					system("pause");
					system("cls");
					break;
				 case 5:
					system("cls");
					float co5, lb,kg;
					cout << " Ingrese la cantidad de libras: "<< endl;
					cin >> co5;
					kg = co5 * 0.45;
					cout << " la conversion de libras a kilos es: " << kg <<" kilos"<< endl;
					system("pause");
					system("cls");
					break;
				 case 6:
					system("cls");
					float co6, lbs, kil;
					cout << " Ingrese la cantidad de kilogramos: " << endl;
					cin >> co6;
					lbs = co6 * 2.20;
					cout << " la conversion de kilogramos a libras es: " << lbs <<" libras"<< endl;
					system("pause");
					system("cls");
					break;
				
				}
		            break;
		    case 4:
		    	system("cls");
		    	int y;
		    	cout<<"1)--palabra--"<<endl;
		    	cout<<"2)--numero---"<<endl;
			    cin>> y;
			    
			    switch(y)
			    {
			    	case 1:
			    		system("cls");
			    		{
						
			    		 string texto;
                        int aux = 0, igual = 0;
    
                        cout << "Ingrese una palabra: "<<endl;
                        getline(cin >> ws, texto);
    
                        for(int ind = texto.length() - 1; ind >= 0; ind--) 
						{
                        if(texto[ind] == texto[aux]) 
						{
                        igual++;
                        }
                        aux++;
                        } 
    
                       if(texto.length() == igual)
					   {
                       cout << "La palabra ingresada es palindromo" << endl;
                       }
					    else 
					   {
                        cout << "La palabra ingresada no es palindromo" << endl;
                       }
                       }
			    		system("pause");
			    		system("cls");
                     break;
			    	
			    	case 2:
			    		system("cls");
			    	  {
                         int num,aux,resto,numInv=0;
 
                         cout<<"Ingrese numero"<<endl;
                         cin>>num;
 
                         aux=num;
 
                         while(aux>0)
						 {
                          resto=aux%10;
                          aux=aux/10;
                          numInv=numInv*10+resto;
                         }
 
                        if(numInv==num)
						{
                         cout<<"Elnumero es palindromo"<<endl;
                        }
                        else
						{
                         cout<<"El numero no es palindromo"<<endl;
  
                        }
                        
				      }
			     		system("pause");
			    		system("cls");
			    		break;
			    	
				}
			break;
			    
			case 5:
				{		
			    system("cls");
			    int num, a;
                {
                cout << "Escribe el numero que sea mayor o igual a 1 y menor o igual a 3999" << endl;
                cin >> a;
                num=a; 
                while(num!=0)
                {

                if (num<= 3999 && num>= 1000)
                {
                cout << "M";
                num = num -1000;
                }
                else if(num <1000 && num>=900)
                {
                cout << "CM";
                num = num - 900;
                }
                else if(num < 900 && num>500)
                {
                cout << "D";
                num = num - 500;
                }
                else if (num == 500)
                {
                cout << "D";
                num = num -500;
                }
                else if (num<500 && num>= 400)
                {
                cout << "CD";
                num = num - 400;
                }
                else if (num<400 && num >99)
                {
                cout << "C";
                num = num -100;
                }
                else if (num< 100 && num>89)
                {
                cout << "XC";
                num = num - 90;
                }
                else if (num< 90 && num>59)
                {
                cout << "L";
                num = num - 50;
                }
                else if(num<60 && num >50)
                {
                cout << "L";
                num = num - 50;
                }
                else if (num ==50)
                {
                cout << "L";
                num = num -50;
                }
                else if(num<50 && num>39)
                {
                cout << "XL";
                num = num - 40;
                }
                else if(num< 40 && num> 10)
                {
                cout << "X";
                num = num - 10;
                }
                else if(num == 10)
                {
                cout << "X";
                num = num -10;
                }
                else if(num==9)
                {
                cout << "IX";
                num = num - 9;
                }
                else if(num<=8 && num>=6)
                {
                cout << "V";
                num = num - 5;
                }
                else if (num == 5)
                {
                cout << "V";
                num = num - 5;
                }
                else if (num == 4)
                {
                cout << "IV";
                num = num - 4;
                }
                else if (num<= 3 && num>=1) 
                {
                cout << "I";
                num = num - 1;
                }
                }
                cout << endl << "Listo :3" << endl;
                }	
			      system("pause");
			      system("cls");
		        }
		    break;
		    
		    case 6:
                {
		    	system("cls");
		    	    int x;
                    cout<<"ingrese un numero entero"<<endl;
                    cin>>x;
                    if((x<1)||(x>9)) cout<<"ingresa un numero entero..."<<endl;
                    else
                    {
                      if(x==9)         {cout<<"NUEVE"<<endl;x=x-9; }
                      if(x==8)         {cout<<"OCHO"<<endl;x=x-8;  }
                      if(x==7)         {cout<<"SIETE"<<endl;x=x-7; }
                      if(x==6)         {cout<<"SEIS"<<endl;x=x-6;  }
                      else if(x==5)    {cout<<"CINCO"<<endl;x=x-5; }
                      else if(x==4)    {cout<<"CUATRO"<<endl;x=x-4;}
                      else if(x==3)    {cout<<"TRES"<<endl;x=x-3;  }
                      else if(x==2)    {cout<<"DOS"<<endl;x=x-2;   }
                    else if(x==1)      {cout<<"UNO"<<endl;x=x-1;   }	
					}
		    	system("pause");
		    	system("cls");
		       }
		    
		
		    break;
		    
		    
		    case 7:
		    	system("cls");
		    	
		    	system("pause");
		    break;
		    
		    case 8:
		    	{
		    	system("cls");
		    	int a, b, res;
		    	
		    	cout << "Ingresa un numero"<<endl;
		    	cin>>a;
		    	cout<<endl;
		    	
		    	for(b=1; b<=10; b++)
		    	{
		    		res = a*b;
		    		cout<<a<<"x"<<b<<"="<<res<<endl;
				}
		    	system("pause");
		    	system("cls");
		        }
		    break;
		    
		    case 9:
		    	{
		    	system("cls");
		    	for (int i = 1; i<11;i++)
				{
					for(int j=1; j<11; j++)
					{
						cout<<i<<"x"<<j<<"="<<i*j<<endl;
					}
				}
		    	system("pause");
		    	system("cls");
		        }
		    break;	
		    
		    case 10:
		    	system("cls");
		    	
		    	system("pause");
		    break;
		    
		    case 11:
		        {
		        	system("cls");
                   int numero, exp, digito;
                   double binario;
                   cout << "Introduce un numero: "<<endl;
                   cin >> numero;
                   exp=0;
                   binario=0;
                   while(numero/2!=0)
                   {
                   digito = numero % 2;
                   binario = binario + digito * pow(10.0,exp);
                   exp++;
                   numero=numero/2;
                   }
                   binario = binario + numero * pow(10.0,exp);
                   cout << fixed << setprecision(0);
                   cout << "binario: " << binario << endl;
                   system("pause");
                   system("cls");
                }
		    break;
		    
		    case 12:
		    	{
		    	system("cls");
		    	int digitoex[20];
                int decimal, residuo, resultado, i = 0;

                cout << "Introduce el numero decimal: " << endl;
                cin >> decimal;

                do
                {
                residuo = decimal % 16;
                resultado = decimal / 16;
                digitoex[i] = residuo;
                decimal = resultado;
                i++;
                } while (resultado > 15);

                digitoex[i] = resultado;

                cout << "La conversion a hexadecimal es: ";

                for (int j = i; j >= 0; j--)
                {
                if (digitoex[j] == 10)
                {
                cout << "A";
                }
                else if (digitoex[j] == 11)
                {
                cout << "B";
                }
                else if (digitoex[j] == 12)
                {
                cout << "C";
                }
                else if (digitoex[j] == 13)
                {
                cout << "D";
                }
                else if (digitoex[j] == 14)
                {
                cout << "E";
                }
                else if (digitoex[j] == 15)
                {
                cout << "F";
                }
                else
                {
                cout << digitoex[j];
                }   
                }
                cout << endl;
                system("pause");
                system("cls");
		    	
		        }
		    break;
		    
		    case 13:
		    	system("cls");
		    		{
			    	int n=5 ;
    		     	
    		    	for (int j = 0; j < n ; ++j) {
        	     	for (int i = 0; i < n-j-1; ++i)
        	 	    cout << " ";
        			for (int i = 0; i < 2*j+1; ++i)
            		 cout << "*" ;
        			cout << endl ;
    			}

   				 for (int j=n-2; j>=0; --j) {
    			    for (int i=0; i<n-j-1; ++i)
        		    cout << " " ;
        			for (int i=0; i<2*j+1; ++i)
        		    cout << "*" ;
       				 cout << endl ;
    			}
    	            	}
		    	system("pause");
		    	system("cls");
		    break;
		    
		    case 14:
		    	system("cls");
		    	cout<<"incompleto :("<<endl;
		    	system("pause");
		    	system("cls");
		    break;
		    
		    case 15:
		    	system("cls");
		    	cout<<"en construccion :,)"<<endl;
		    	system("pause");
		    	system("cls");
		    break;
		    
		    case 16:
		    	{
				
		    	system("cls");
		          float c1,c2,hipo=0;
 
                  cout << "Digite cateto 1: ";
                  cin >> c1;
                  cout << "Digite cateto 2: ";
                  cin >> c2;
 
                  hipo = sqrt(pow(c1,2)+pow(c2,2));
 
                  cout << "La hipotenusa es " << hipo << endl;
                }
		    	   system("pause");
		           system("cls");
		    break;
		
		        
	      }
	}
}

