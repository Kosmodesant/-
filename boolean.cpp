// Таблица истинности
// Напишите программу, которая выводит таблицу истинности для логических операторов ||, &&.

// Результат работы программы

// Оператор: ||
// true    true    true
// false   true    true
// true    false   true
// false   false   false

// Оператор: &&
// true    true    true
// false   true    false
// true    false   false
// false   false   false


#include <iostream>

int main()

{

// объявляем переменные 
// Для || 
 bool a{true};
 bool b{true};
 bool d{false};
 bool e{true};
 bool g{true};
 bool h{false};
 bool j{false};
 bool k{false};

//Для &&
 bool m{true};
 bool n{true};
 bool p{false};
 bool q{true};
 bool s{true};
 bool t{false};
 bool v{false};
 bool w{false};

 
//Логика ||
 bool c = a || b;
 bool f = d || f;
 bool i = g || h;
 bool l = j || k;

 //Логика &&
 bool o = m && n;
 bool r = p && q;
 bool u = s && t;
 bool x = v && w;
 

//Вывод значений
  
// Оператор: ||
std::cout << " " << std::endl;
  
std::cout << "Оператор: ||" << std::endl;
  
std::cout << std::boolalpha << a << ' ' << ' ' << ' ';
std::cout << std::boolalpha << b << ' ' << ' ' << ' ';
std::cout << std::boolalpha << c << std::endl;

std::cout << std::boolalpha << d << ' ' << ' ';
std::cout << std::boolalpha << e << ' ' << ' ' << ' ';
std::cout << std::boolalpha << f << std::endl;

std::cout << std::boolalpha << g << ' ' << ' ' << ' ';
std::cout << std::boolalpha << h << ' ' << ' ';
std::cout << std::boolalpha << i << std::endl;

std::cout << std::boolalpha << j << ' ' << ' ';
std::cout << std::boolalpha << k << ' ' << ' ';
std::cout << std::boolalpha << l << std::endl;

std::cout << " " << std::endl;

// Оператор: &&
std::cout << "Оператор: &&" << std::endl;
  
std::cout << std::boolalpha << m << ' ' << ' ' << ' ';
std::cout << std::boolalpha << n << ' ' << ' ' << ' ';
std::cout << std::boolalpha << o << std::endl;

std::cout << std::boolalpha << p << ' ' << ' ';
std::cout << std::boolalpha << q << ' ' << ' ' << ' ';
std::cout << std::boolalpha << r << std::endl;

std::cout << std::boolalpha << s << ' ' << ' ' << ' ';
std::cout << std::boolalpha << t << ' ' << ' ';
std::cout << std::boolalpha << u << std::endl;

std::cout << std::boolalpha << v << ' ' << ' ';
std::cout << std::boolalpha << w << ' ' << ' ';
std::cout << std::boolalpha << x << std::endl;

  
}


//ниже аналог программы с ручным вводом булевых значений

// #include <iostream>

// int main()

// {

// // объявляем переменные 
//  bool a{};
//  bool b{};
//  bool d{};
//  bool e{};
//  bool g{};
//  bool h{};
//  bool j{};
//  bool k{};
//  bool m{};
//  bool n{};
//  bool p{};
//  bool q{};
//  bool s{};
//  bool t{};
//  bool v{};
//  bool w{};


// // Ввод значений  
//  std::cin >> std::boolalpha;

// // Ввод значений первой таблицы 
//  std::cout << " Введите значения истинности (true/false) для вывода значений логического оператора || ";
//  std::cout << "Enter first pair first boolean value: ";
//  std::cin >> a;
  
//  std::cout << "Enter first pair second boolean value: ";
//  std::cin >> b;

//  std::cout << "Enter second pair first boolean value: ";
//  std::cin >> d;
  
//  std::cout << "Enter second pair second boolean value: ";
//  std::cin >> e;

//  std::cout << "Enter third pair first boolean value: ";
//  std::cin >> g;
  
//  std::cout << "Enter third pair second boolean value: ";
//  std::cin >> h;

//  std::cout << "Enter fourth pair first boolean value: ";
//  std::cin >> j;

// // Ввод значений второй таблицы 
//  std::cout << " Введите значения истинности (true/false) для вывода значений логического оператора && ";
//  std::cout << "Enter fourth pair second boolean value: ";
//  std::cin >> k;

//  std::cout << "Enter first pair first boolean value: ";
//  std::cin >> m;
  
//  std::cout << "Enter first pair second boolean value: ";
//  std::cin >> n;

//  std::cout << "Enter second pair first boolean value: ";
//  std::cin >> p;
  
//  std::cout << "Enter second pair second boolean value: ";
//  std::cin >> q;

//  std::cout << "Enter third pair first boolean value: ";
//  std::cin >> s;
  
//  std::cout << "Enter third pair second boolean value: ";
//  std::cin >> t;

//  std::cout << "Enter fourth pair first boolean value: ";
//  std::cin >> v;
  
//  std::cout << "Enter fourth pair second boolean value: ";
//  std::cin >> w;
 
// //Логика ||
//  bool c = a || b;
//  bool f = d || f;
//  bool i = g || h;
//  bool l = j || k;

//  //Логика &&
//  bool o = m && n;
//  bool r = p && q;
//  bool u = s && t;
//  bool x = v && w;
 

// //Вывод значений
  
// // Оператор: ||

//std::cout << " " << std::endl;
// std::cout << "Оператор: ||" << std::endl;
  
// std::cout << std::boolalpha << a << ' ' << ' ' << ' ';
// std::cout << std::boolalpha << b << ' ' << ' ' << ' ';
// std::cout << std::boolalpha << c << std::endl;

// std::cout << std::boolalpha << d << ' ' << ' ';
// std::cout << std::boolalpha << e << ' ' << ' ' << ' ';
// std::cout << std::boolalpha << f << std::endl;

// std::cout << std::boolalpha << g << ' ' << ' ' << ' ';
// std::cout << std::boolalpha << h << ' ' << ' ';
// std::cout << std::boolalpha << i << std::endl;

// std::cout << std::boolalpha << j << ' ' << ' ';
// std::cout << std::boolalpha << k << ' ' << ' ';
// std::cout << std::boolalpha << l << std::endl;

//std::cout << " " << std::endl;


// // Оператор: &&
// std::cout << "Оператор: &&" << std::endl;
  
// std::cout << std::boolalpha << m << ' ' << ' ' << ' ';
// std::cout << std::boolalpha << n << ' ' << ' ' << ' ';
// std::cout << std::boolalpha << o << std::endl;

// std::cout << std::boolalpha << p << ' ' << ' ';
// std::cout << std::boolalpha << q << ' ' << ' ' << ' ';
// std::cout << std::boolalpha << r << std::endl;

// std::cout << std::boolalpha << s << ' ' << ' ' << ' ';
// std::cout << std::boolalpha << t << ' ' << ' ';
// std::cout << std::boolalpha << u << std::endl;

// std::cout << std::boolalpha << v << ' ' << ' ';
// std::cout << std::boolalpha << w << ' ' << ' ';
// std::cout << std::boolalpha << x << std::endl;

  
// }

