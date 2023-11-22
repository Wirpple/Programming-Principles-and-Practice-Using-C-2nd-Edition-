#include "std_lib_facilities.h"

int main()
{
// CHAPTER 4 --------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------
    /*
    Exercises (Упражнение) 3:

    Read a sequence of double values into a vector.
    Think of each value as the distance between two cities along a given route.
    Compute and print the total distance (the sum of all distances).
    Find and print the smallest and greatest distance between two neighboring cities.
    Find and print the mean distance between two neighboring cities.
    */

//    vector<double> distances;
//    double distance;
//
//    std::cout << "Enter distance with A to B: ";
//    while(std::cin >> distance)
//        distances.push_back(distance);
//
//    double sum_distance = std::accumulate(distances.begin(), distances.end(), 0.0);
//    std::cout << "Distance summary: " << sum_distance << '\n';
//
//    std::cout << "Minimal distance: " << *std::min_element(distances.begin(), distances.end()) << '\n';
//    std::cout << "Maximum distance: " << *std::max_element(distances.begin(), distances.end()) << '\n';
//
//    double total_distance = accumulate(distances.begin(), distances.end(), 0.0) / distances.size();
//    std::cout << "Total distance: " << total_distance << '\n';
//
//    return 0;
//------------------------------------------------------------------
    /*
    Exercises (Упражнение) 4:

    Write a program to play a numbers guessing game.
    The user thinks of a number between 1 and 100 and your program asks questions to figure out what the number is (e.g., “Is the number you are thinking of less than 50?”).
    Your program should be able to identify the number after asking no more than seven questions.
    Hint: Use the < and <= operators and the if-else construct.
    */

//    int Lower_Bound = 1;
//    int Upper_Bound = 100;
//    int Guess;
//
//    std::cout << "Загадайте число от 1 до 100." << std::endl;
//
//    for (int attempt = 1; attempt <= 7; ++attempt) {
//        // Предполагаемое число находится в середине текущего диапазона
//        Guess = (Lower_Bound + Upper_Bound) / 2;
//
//        std::cout << "Ваше число меньше, равно или больше " << Guess << "? (Введите '<', '=', или '>'): ";
//        char user_response;
//        std::cin >> user_response;
//
//        if (user_response == '<')
//        {
//            // Число меньше, обновляем верхнюю границу
//            Upper_Bound = Guess - 1;
//        }
//
//        else if (user_response == '>')
//        {
//            // Число больше, обновляем нижнюю границу
//            Lower_Bound = Guess + 1;
//        }
//
//        else if (user_response == '=')
//        {
//            // Число угадано
//            std::cout << "Ура! Я угадал ваше число (" << Guess << ") за " << attempt << " попыток." << std::endl;
//            break;
//        }
//
//        else
//        {
//            // Некорректный ввод
//            std::cout << "Некорректный ввод. Пожалуйста, введите '<', '=', или '>': ";
//            --attempt; // Уменьшаем счетчик попыток, чтобы повторить вопрос
//        }
//    }
//
//    return 0;
//------------------------------------------------------------------
    return 0;
}