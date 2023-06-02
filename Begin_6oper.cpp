#include <iostream>

using namespace std;

int main() {
  printf("Hello operators in C++\n")	;
	/*
	 арифметические операторы -> +,  -,   *,   /,  %
	 бинарные операторы (двоичные)
	*/
	cout<< 5 + 2 << endl; 
	cout<< 5 - 2 << endl;
	cout<< 5 * 2 << endl;	 
	cout<< 5 / 2 << endl; //целое число
    cout<< 5.0 / 2.0 << endl; // = 5.0/2 = 5/2.0 ,(будет тот же результат)
    cout<< 5 % 2 <<endl ;// остаток от деления
 	
 //  унарные операторы -> ++,--;
    
    int counter=7;
    counter ++ ;           // прибавляет единицу
    cout<< counter<<endl;
    counter --;            // отнимает единицу
    cout<< counter<<endl;
    int counter2=7;
    cout<< counter2++ <<endl;// оператор постинкремента
    cout<<counter2++ <<endl;
    cout<<counter2-- <<endl;
    cout<<counter2 <<endl;
    
    system("cls"); //очистить экран
    
    /*
	 реалиционные операторы (операеоры сравнения)
	 < , > , <= , >= , == , != ; 
    */
    int a=5 , b=8 ;
    cout<< (a>b) <<endl ;  //0= folse-ложь 1=true-истинна
    cout<< (a==b) <<endl ;
    cout<< (a!=b) <<endl ;
    system("cls"); //очистить экран
    
    /*
	 логические операторы -> &&-и , ||-или , !- не ; 
	*/
    cout<<(a==5&&b==5)<<endl;
    cout<<(a==5&&b==5+3)<<endl;
    system("cls"); //очистить экран
	/*
	1 й приоритет арифметические, 2 й приоритет сравнения , 3 й приоритет  логические ;
	    4 й приоритет присваиварие
	*/ 
	 
   // операторы присваивания = , += , -= , *= , /= , %= ;	 
	
	int x = 5;
	x += 7;
	//x = x + 7;
	cout << x;
	
   system("pause>0");
}

