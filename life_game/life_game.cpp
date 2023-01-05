// Упрощённая консольная реализация игры «Жизнь», придуманная английским
// математиком Джоном Конвеем в 1970 году.

// Содержание
// 1. Правила игры
// Место действия игры — Вселенная. Это размеченная на клетки ограниченная
// плоскость.

// Каждая клетка на этой плоскости может находиться в двух состояниях: быть
// «живой», то есть заполненной, или быть «мёртвой», то есть пустой. Клетка
// имеет восемь соседей, окружающих её.

// Распределение живых клеток в начале игры называется первым поколением. Каждое
// следующее поколение рассчитывается на основе предыдущего по правилам:

// В пустой (мёртвой) клетке, рядом с которой ровно три живых клетки,
// зарождается жизнь. Если у живой клетки есть две или три живых соседки, то эта
// клетка продолжает жить. В противном случае, если соседей меньше двух или
// больше трёх, клетка умирает «от одиночества» или «от перенаселённости». Игра
// прекращается, если:

// на поле не останется ни одной «живой» клетки;
// при очередном шаге ни одна из клеток не меняет своего состояния, то есть
// складывается стабильная конфигурация. Игрок не принимает прямого участия в
// игре, а только расставляет начальную конфигурацию «живых» клеток, которые
// затем взаимодействуют согласно правилам уже без его участия. Он является
// наблюдателем.

// 2. Требования к решению
// Реализация должна удовлетворять требованиям и ограничениям:

// Текущее состояние Вселенной выводится на консоль в виде таблицы из символов,
// разделённых пробелом. Мёртвая клетка помечается символом -, живая клетка
// помечается символом *. Ниже приведены примеры. На каждом шаге на консоль
// должно выводиться текущее состояние Вселенной, а также информация о номере
// поколения и количестве живых клеток на текущий момент. При завершении игры на
// консоли должно присутствовать состояние Вселенной на момент окончания игры,
// номер поколения, количество живых клеток и причина завершения игры. При
// расчёте состояния клеток на границах игрового поля учитываются только
// соседние клетки. У клеток на границе игрового поля соседних клеток будет
// меньше 8. Для инициализации Вселенной использовать текстовый файл. Файл имеет
// структуру: первые два числа — это количество строк и количество столбцов в
// сетке Вселенной. Затем идёт информация о распределении живых клеток.
// Распределение состоит из неопределённого количества пар чисел, где каждая
// пара состоит из номера строки и номера столбца живой клетки. Примеры входного
// файла, соответствующее ему начальное состояние Вселенной и конечное
// состояние:

// Пример 1
// 20 30
// 2 3
// 2 4
// 3 4
// 3 5
// 3 6
// 3 7
// 5 0
// 5 1
// 5 2
// 6 2
// начальное распределение 1 конечное распределение 1



#include <fstream>
#include <iostream>

bool **create_arr(int *rows, int *cols) {
  bool **arr = new bool *[*rows];

  for (int i = 0; i < *rows; ++i) {
    arr[i] = new bool[*cols]();
  }

  return arr;
}

bool stag_life(bool **arr, bool **next_arr, const int *rows,  const int *cols)
{
  for (int i = 0; i < *rows; ++i)
    {
      for (int j = 0; j < *cols; ++j)
      {
        if (arr[i][j] != next_arr[i][j]) 
        {
          return false;
        }
      }
    }
  
  return true;
}

void delete_arr(bool **arr, int *rows) {
  for (int i = 0; i < *rows; ++i) {
    delete[] arr[i];
  }

  delete[] arr;
}

void cmp_world(bool **arr, bool **next_arr, const int *i, const int *j,
               int *alive, int *nears) {
  if (arr[*i][*j]) {
    next_arr[*i][*j] = *nears > 1 && *nears < 4;

  } else {
    next_arr[*i][*j] = *nears == 3;
  }
}

void count_live_neighbors(bool **arr, bool **next_arr, const int *cols, const int *rows,
                 const int *i, const int *j, int *alive) {
  int nears = 0;
  int position_nears[][2] = {
    *i - 1, *j - 1,
    *i - 1, *j,
    *i - 1, *j + 1,
    *i, *j - 1,
    *i, *j + 1,
    *i + 1, *j - 1,
    *i + 1, *j,
    *i + 1, *j + 1,
  };
  
  const int size_row = sizeof(position_nears) / sizeof(position_nears[0]);

  for (int x = 0; x < size_row; ++x) {
    bool check = position_nears[x][0] >= 0 &&
                 position_nears[x][0] < *rows &&
                 position_nears[x][1] >= 0 &&
                 position_nears[x][0] < *cols;
    
    if (check) {
      nears += static_cast<int>(arr[position_nears[x][0]][position_nears[x][1]]);
    }
  }
  
  *alive = arr[*i][*j] ? (++*alive) : *alive;
  cmp_world(arr, next_arr, i, j, alive, &nears);
}

std::string game_message(bool **arr, int *rows, int *cols) {

  int MSG_ALIVE = 0;
  int MSG_STAG = 1;
  int MSG_DEAD = 2;
  int MSG_GAMEOVER = 3;
  
  const std::string msg[] = {
      "",
      "The world has stagnated. ",
      "All cells are dead. ",
      "Game over.",
  };

  static int generation = 0;
  int alive = 0;
  int status = 1;
  static bool stagnation = false;

  bool **next_arr = create_arr(rows, cols);

  ++generation;

  std::cout << std::endl;

  for (int i = 0; i < *rows; ++i) {
    for (int j = 0; j < *cols; ++j) {
      char s = arr[i][j] ? '*' : '-';

      std::cout << s << " ";
      
      count_live_neighbors(arr, next_arr, rows, cols, &i, &j, &alive);
    }

    std::cout << std::endl;
  }

  std::cout << "Generation: " << generation << ". "
            << "Alive cells: " << alive << std::endl;

  status = alive == MSG_ALIVE ? MSG_DEAD : stagnation ? MSG_STAG : MSG_ALIVE;
 
  std::cout << msg[status];

  if (status == MSG_ALIVE) {

    std::cout << std::endl;

    stagnation = stag_life(arr, next_arr, rows, cols);
    
    game_message(next_arr, rows, cols);
  }

  delete_arr(next_arr, &*rows);
  next_arr = nullptr;

  return msg[MSG_GAMEOVER];
}

int main() {
 
  const char *path = {"./in.txt"};
  std::string game_over = "";

  std::ifstream fin(path);

  int rows_size = 0;
  int cols_size = 0;

  fin >> rows_size;
  fin >> cols_size;

  bool **arr = create_arr(&rows_size, &cols_size);

  for (int i = 0, j = 0; (!fin.eof());) {
    fin >> i;
    fin >> j;
    arr[i][j] = true;
  }

  game_over = game_message(arr, &rows_size, &cols_size);

  std::cout << game_over << std::endl;
  
  delete_arr(arr, &rows_size);
  arr = nullptr;

  return 0;
}
