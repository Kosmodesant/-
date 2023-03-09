#include <iostream>

int main() 
{
  int arr[] = { 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bool swapped = false;

	std::cout << "Массив до сортировки: ";

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;

	do
	{
		swapped = false;
		for (int i = 1; i < size; i++)
		{
			if (arr[i - 1] > arr[i])
			{
				int temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
				swapped = true;
			}
		}
	} while (swapped);

	std::cout << "Массив после сортировки: ";

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
} 




// #include <iostream>

// int main() 
// {
//   int arr[] = { 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };
// 	int size = sizeof(arr) / sizeof(arr[0]);
// 	bool swapped = false;

// 	std::cout << "Массив до сортировки: ";

// 	for (int i = 0; i < size; i++)
// 	{
// 		std::cout << arr[i] << " ";
// 	}

// 	std::cout << std::endl;

// 	do
// 	{
// 		swapped = false;
// 		for (int i = size -1; i > 0; i--)
// 		{
// 			if (arr[i - 1] > arr[i]) // при смене знака сортировка от большего к меньшему
// 			{
// 				int temp = arr[i - 1];
// 				arr[i - 1] = arr[i];
// 				arr[i] = temp;
// 				swapped = true;
// 			}
// 		}
// 	} while (swapped);

// 	std::cout << "Массив после сортировки: ";

// 	for (int i = 0; i < size; i++)
// 	{
// 		std::cout << arr[i] << " ";
// 	}

// 	std::cout << std::endl;
// } 



// #include <iostream>
// using namespace std;

// int main()
// {
//     setlocale(LC_ALL, "Russian");

//     int arr[] = { 10, 3, 4, 1, 8, 9, 7, 2, 6, 5, 8, 23 };
//     int size = sizeof(arr) / sizeof(arr[0]);

//     cout << "Массив до сортировки: ";

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     for (int i = 0; i < size - 1; i++) {
//         for (int j = size - 1; j > i; j--) {
//             if (arr[j] > arr[j - 1]) {
//                 // меняем элементы местами
//                 int temp = arr[j];
//                 arr[j] = arr[j - 1];
//                 arr[j - 1] = temp;
//             }
//         }
//     }


//     //for (int i = 0; i < size - 1; i++) {
//     //    for (int j = 0; j < size - i - 1; j++) {
//     //        if (arr[j] > arr[j + 1]) {
//     //            // меняем элементы местами
//     //            int temp = arr[j];
//     //            arr[j] = arr[j + 1];
//     //            arr[j + 1] = temp;
//     //        }
//     //    }
//     //}


//     cout << "Массив после сортировки: ";

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;
// }


