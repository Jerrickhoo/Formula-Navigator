#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

//! Calling formula section ---------------------------------------------------------------------------------------------------

double getValidatedInputWithRange(const string& prompt, bool allowNegative); // if allow negative, set bool to true, if not , set it to false
void showAlgebraMenu();
void showGeometryMenu_2D();
void showGeometryMenu_3D();
void showPhysicsMenu();
void displayExitMessage();


//todo 20 algebra formulas ---------------------------------------------------------------------------------------------------

//? 1. Square of Sum (a + b)^2
double squareOfSumAlgebra();

//? 2. Square of Difference (a - b)^2
double squareOfDifferenceAlgebra();

//? 3. Product of Squares a²b² = (a + b)(a - b) 
double productOfSquareAlgebra();

//? 4. Sum of Squares a2 + b2 = (a + b)2 - 2ab
double sumOfSquaresAlgebra();

//? 5. Cube of Sum a3 + b3 = (a + b) (a2 - ab + b2)
double cubeOfSumAlgebra();

//? 6. Cube of Difference a^3 - b^3 = (a - b)(a^2 + ab + b^2)
double cubeOfDifferenceAlgebra();

//? 7. Sum of Cubes a^3 + b^3 = (a + b)(a^2 - ab + b^2)
double sumOfCubesAlgebra();

//? 8. Difference of Cubes a^3 - b^3 = (a - b)(a^2 + ab + b^2)
double differenceOfCubesAlgebra();

//? 9. Difference of Two Squares (a + b)^2 - (a - b)^2 = 4ab
double differenceOfSquaresAlgebra();

//? 10. Square of Sum for Three Terms (a + b + c)^2 = a^2 + b^2 + c^2 + 2ab + 2bc + 2ac
double squareOfThreeTermsAlgebra();

//todo 25 geometry_2D formulas ---------------------------------------------------------------------------------------------------



//todo 25 geometry_3D formulas ---------------------------------------------------------------------------------------------------



//todo 50 physics formulas ---------------------------------------------------------------------------------------------------









int main(){

    int choice;

    do {
        cout << "====================\n";
        cout << "   Main Menu\n";
        cout << "   1. Algebra\n";
        cout << "   2. Geometry 3D\n";
        cout << "   3. Geometry 3D\n";
        cout << "   4. Physics\n";
        cout << "   5. Exit\n";
        cout << "====================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        system("cls");

        switch (choice) {
        case 1:
            showAlgebraMenu();
            break;
        case 2:
            showGeometryMenu_2D();
            break;
        case 3:
            showGeometryMenu_3D();
            break;
        case 4:
            showPhysicsMenu();
            break;
        case 5:
            displayExitMessage();
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}





//! Defining formula section ---------------------------------------------------------------------------------------------------


double getValidatedInputWithRange(const string& prompt, bool allowNegative = true){
    double value;
    while (true){
        cout << prompt;
        cin >> value;

        if (cin.fail()){
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "\nInvalid input. Please enter a numeric value.\n";
            system("pause");
            cout << "\n\n";
        }
        else if (!allowNegative && value < 0){
            cout << "\nNegative values are not allowed for this input. Try again.\n";
            system("pause");
            cout << "\n\n";
        }
        else{
            return value;
        }
    }
}


//!---------------------------------------------------------------------------------------------------------------------------------------------------------



void showAlgebraMenu(){
    int option;
    double result = 0;

    do {
        cout << "============= Algebra Menu =============\n\n";
        cout << "1. Square of Sum                      \t 11. *********    \n";
        cout << "    (a + b)^2 = a^2 + 2ab + b^2       \t       (a + b)^2  \n";
        cout << "2. Square of Difference               \t 11. *********    \n";
        cout << "    (a - b)^2 = a^2 - 2ab + b^2       \t       (a + b)^2  \n";
        cout << "3. Product of Squares                 \t 13. *********    \n";
        cout << "    a^2 * b^2                         \t                  \n";
        cout << "4. Sum of Squares                     \t 14. *********    \n";
        cout << "    a^2 + b^2                         \t                  \n";
        cout << "5. Cube of Sum                        \t 15. *********    \n";
        cout << "    (a + b)^3                         \t                  \n";
        cout << "6. Cube of Difference                 \t 16. *********    \n";
        cout << "    (a - b)^3                         \t                  \n";
        cout << "7. Sum of Cubes                       \t 17. *********    \n";
        cout << "    a^3 + b^3                         \t                  \n";
        cout << "8. Difference of Cubes                \t 18. *********    \n";
        cout << "    (a - b)(a^2 + ab + b^2)           \t                  \n";
        cout << "9. Difference of Two Squares          \t 19. *********    \n";
        cout << "    (a + b)^2 - (a - b)^2             \t                  \n";
        cout << "10. Square of Sum for Three Terms     \t 20. *********    \n";
        cout << "    (a + b + c)^2                     \t                  \n";

        cout << "\n21. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> option;
        system("cls");

        if (option == 21){
            return; // Return to the main menu
        }

        switch (option){
        case 1:
            result = squareOfSumAlgebra();
            cout << "============= You selected (Square of Sum) in Algebra =============\n\n";
            cout << "The square of the Sum is: " << result << endl;
            system("pause");
            system("cls");
            break;
        case 2:
            result = squareOfDifferenceAlgebra();
            cout << "============= You selected (Square of Difference) in Algebra =============\n\n";
            cout << "The square of the Difference is: " << result << endl;
            system("pause");
            system("cls");
            break;
        case 3:
            result = productOfSquareAlgebra();
            cout << "============= You selected (Product of Squares) in Algebra =============\n\n";
            cout << "The Product of the Squares  is: " << result << endl;
            system("pause");
            system("cls");
            break;
        case 4:
            result = sumOfSquaresAlgebra();
            cout << "============= You selected (Sum of Squares) in Algebra =============\n\n";
            cout << "The Product of the Squares  is: " << result << endl;
            system("pause");
            system("cls");
            break;
        case 5:
            result = cubeOfSumAlgebra();
            cout << "============= You selected (Cube of Sum) in Algebra =============\n\n";
            cout << "The Cube of the Sum  is: " << result << endl;
            system("pause");
            system("cls");
            break;
        case 6:
            result = cubeOfDifferenceAlgebra();
            cout << "============= You selected (Cube of Difference) in Algebra =============\n\n";
            cout << "The Cube of the Difference  is: " << result << endl;
            system("pause");
            system("cls");
            break;
        case 7:
            result = sumOfCubesAlgebra();
            cout << "============= You selected (Sum of Cubes) in Algebra =============\n\n";
            cout << "The Sum of the Cubes  is: " << result << endl;
            system("pause");
            system("cls");
            break;
        case 8:
            result = differenceOfCubesAlgebra();
            cout << "============= You selected (Difference of Cubes) in Algebra =============\n\n";
            cout << "The Difference of the Cubes  is: " << result << endl;
            system("pause");
            system("cls");
            break;
        case 9:
            result = differenceOfSquaresAlgebra();
            cout << "============= You selected (Difference of Two Squares) in Algebra =============\n\n";
            cout << "The Difference of the Two Squares  is: " << result << endl;
            system("pause");
            system("cls");
            break;
        case 10:
            result = squareOfThreeTermsAlgebra();
            cout << "============= You selected (Square of Sum for Three Terms) in Algebra =============\n\n";
            cout << "The Square of the Sum for Three Terms  is: " << result << endl;
            system("pause");
            system("cls");
            break;
        case 11:
            // Code / function
            break;
        case 12:
            // Code / function
            break;
        case 13:
            // Code / function
            break;
        case 14:
            // Code / function
            break;
        case 15:
            // Code / function
            break;
        case 16:
            // Code / function
            break;
        case 17:
            // Code / function
            break;
        case 18:
            // Code / function
            break;
        case 19:
            // Code / function
            break;
        case 20:
            // Code / function
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (option != 21);
}



//!---------------------------------------------------------------------------------------------------------------------------------------------------------

void showGeometryMenu_2D(){
    int option;
    do {
        cout << "============= Geometry 2D Menu =============\n\n";
        cout << "1. Square of Sum             \t 11. *********                \t 21. *********      \n";
        cout << "      (a + b)^2              \t       (a + b)^2              \t       (a + b)^2    \n";
        cout << "2. Square of Sum             \t 12. *********                \t 22. *********      \n";
        cout << "      (a + b)^2              \t       (a + b)^2              \t       (a + b)^2    \n";
        cout << "3. *********                 \t 13. *********                \t 23. *********      \n";
        cout << "      (a + b)^2              \t                              \t                    \n";
        cout << "4. *********                 \t 14. *********                \t 24. *********      \n";
        cout << "      (a + b)^2              \t                              \t                    \n";
        cout << "5. *********                 \t 15. *********                \t 25. *********      \n";
        cout << "      (a + b)^2              \t                                                    \n";
        cout << "6. *********                 \t 16. *********                                      \n";
        cout << "      (a + b)^2              \t                                                    \n";
        cout << "7. *********                 \t 17. *********                                      \n";
        cout << "      (a + b)^2              \t                                                    \n";
        cout << "8. *********                 \t 18. *********                                      \n";
        cout << "      (a + b)^2              \t                                                    \n";
        cout << "9. *********                 \t 19. *********                                      \n";
        cout << "      (a + b)^2              \t                                                    \n";
        cout << "10.*********                 \t 20. *********                                      \n";
        cout << "      (a + b)^2              \t                                                    \n";
        cout << "\n26. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> option;
        system("cls");

        if (option == 26){
            return; // Return to the main menu
        }


        // Placeholder for actual functionality
        cout << "You selected option " << option << " in Geometry 2D.\n";

        switch (option){
        case 1:
            // Code / function
            break;
        case 2:
            // Code / function
            break;
        case 3:
            // Code / function
            break;
        case 4:
            // Code / function
            break;
        case 5:
            // Code / function
            break;
        case 6:
            // Code / function
            break;
        case 7:
            // Code / function
            break;
        case 8:
            // Code / function
            break;
        case 9:
            // Code / function
            break;
        case 10:
            // Code / function
            break;
        case 11:
            // Code / function
            break;
        case 12:
            // Code / function
            break;
        case 13:
            // Code / function
            break;
        case 14:
            // Code / function
            break;
        case 15:
            // Code / function
            break;
        case 16:
            // Code / function
            break;
        case 17:
            // Code / function
            break;
        case 18:
            // Code / function
            break;
        case 19:
            // Code / function
            break;
        case 20:
            // Code / function
            break;
        case 21:
            // Code / function
            break;
        case 22:
            // Code / function
            break;
        case 23:
            // Code / function
            break;
        case 24:
            // Code / function
            break;
        case 25:
            // Code / function
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (option != 26);
}

//!---------------------------------------------------------------------------------------------------------------------------------------------------------

void showGeometryMenu_3D(){
    int option;
    do{
        cout << "============= Geometry 3D Menu =============\n\n";
        cout << "1. Square of Sum             \t 11. *********                \t 21. *********      \n";
        cout << "      (a + b)^2              \t       (a + b)^2              \t       (a + b)^2    \n";
        cout << "2. Square of Sum             \t 12. *********                \t 22. *********      \n";
        cout << "      (a + b)^2              \t       (a + b)^2              \t       (a + b)^2    \n";
        cout << "3. *********                 \t 13. *********                \t 23. *********      \n";
        cout << "      (a + b)^2              \t                              \t                    \n";
        cout << "4. *********                 \t 14. *********                \t 24. *********      \n";
        cout << "      (a + b)^2              \t                              \t                    \n";
        cout << "5. *********                 \t 15. *********                \t 25. *********      \n";
        cout << "      (a + b)^2              \t                                                    \n";
        cout << "6. *********                 \t 16. *********                                      \n";
        cout << "      (a + b)^2              \t                                                    \n";
        cout << "7. *********                 \t 17. *********                                      \n";
        cout << "      (a + b)^2              \t                                                    \n";
        cout << "8. *********                 \t 18. *********                                      \n";
        cout << "      (a + b)^2              \t                                                    \n";
        cout << "9. *********                 \t 19. *********                                      \n";
        cout << "      (a + b)^2              \t                                                    \n";
        cout << "10.*********                 \t 20. *********                                      \n";
        cout << "      (a + b)^2              \t                                                    \n";
        cout << "\n26. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> option;
        system("cls");

        if (option == 26){
            return; // Return to the main menu
        }


        // Placeholder for actual functionality
        cout << "You selected option " << option << " in Geometry 3D.\n";

        switch (option){
        case 1:
            // Code / function
            break;
        case 2:
            // Code / function
            break;
        case 3:
            // Code / function
            break;
        case 4:
            // Code / function
            break;
        case 5:
            // Code / function
            break;
        case 6:
            // Code / function
            break;
        case 7:
            // Code / function
            break;
        case 8:
            // Code / function
            break;
        case 9:
            // Code / function
            break;
        case 10:
            // Code / function
            break;
        case 11:
            // Code / function
            break;
        case 12:
            // Code / function
            break;
        case 13:
            // Code / function
            break;
        case 14:
            // Code / function
            break;
        case 15:
            // Code / function
            break;
        case 16:
            // Code / function
            break;
        case 17:
            // Code / function
            break;
        case 18:
            // Code / function
            break;
        case 19:
            // Code / function
            break;
        case 20:
            // Code / function
            break;
        case 21:
            // Code / function
            break;
        case 22:
            // Code / function
            break;
        case 23:
            // Code / function
            break;
        case 24:
            // Code / function
            break;
        case 25:
            // Code / function
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (option != 26);
}

//!---------------------------------------------------------------------------------------------------------------------------------------------------------

void showPhysicsMenu(){
    int option;
    do{
        cout << "============= Physics Menu =============\n\n";
        cout << "1. Square of Sum    \t 11. *********       \t 21. *********       \t 31. *********         \t 41. *********   \n";
        cout << "      (a + b)^2     \t       (a + b)^2     \t       (a + b)^2     \t       (a + b)^2       \t       (a + b)^2 \n";
        cout << "2. Square of Sum    \t 12. *********       \t 22. *********       \t 32. *********         \t 42. *********   \n";
        cout << "      (a + b)^2     \t       (a + b)^2     \t       (a + b)^2     \t       (a + b)^2       \t       (a + b)^2 \n";
        cout << "3. *********        \t 13. *********       \t 23. *********       \t 33. *********         \t 43. *********   \n";
        cout << "      (a + b)^2     \t                     \t                     \t                       \t                 \n";
        cout << "4. *********        \t 14. *********       \t 24. *********       \t 34. *********         \t 44. *********   \n";
        cout << "      (a + b)^2     \t                     \t                     \t                       \t                 \n";
        cout << "5. *********        \t 15. *********       \t 25. *********       \t 35. *********         \t 45. *********   \n";
        cout << "      (a + b)^2     \t                     \t                     \t                       \t                 \n";
        cout << "6. *********        \t 16. *********       \t 26. *********       \t 36. *********         \t 46. *********   \n";
        cout << "      (a + b)^2     \t                     \t                     \t                       \t                 \n";
        cout << "7. *********        \t 17. *********       \t 27. *********       \t 37. *********         \t 47. *********   \n";
        cout << "      (a + b)^2     \t                     \t                     \t                       \t                 \n";
        cout << "8. *********        \t 18. *********       \t 28. *********       \t 38. *********         \t 48. *********   \n";
        cout << "      (a + b)^2     \t                     \t                     \t                       \t                 \n";
        cout << "9. *********        \t 19. *********       \t 29. *********       \t 39. *********         \t 49. *********   \n";
        cout << "      (a + b)^2     \t                     \t                     \t                       \t                 \n";
        cout << "10.*********        \t 20. *********       \t 30. *********       \t 40. *********         \t 50. *********   \n";
        cout << "      (a + b)^2     \t                     \t                     \t                       \t                 \n";
        cout << "\n51. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> option;
        system("cls");

        if (option == 51){
            return; // Return to the main menu
        }

        // Placeholder for actual functionality
        cout << "You selected option " << option << " in Physics.\n";

        switch (option){
        case 1:
            // Code / function
            break;
        case 2:
            // Code / function
            break;
        case 3:
            // Code / function
            break;
        case 4:
            // Code / function
            break;
        case 5:
            // Code / function
            break;
        case 6:
            // Code / function
            break;
        case 7:
            // Code / function
            break;
        case 8:
            // Code / function
            break;
        case 9:
            // Code / function
            break;
        case 10:
            // Code / function
            break;
        case 11:
            // Code / function
            break;
        case 12:
            // Code / function
            break;
        case 13:
            // Code / function
            break;
        case 14:
            // Code / function
            break;
        case 15:
            // Code / function
            break;
        case 16:
            // Code / function
            break;
        case 17:
            // Code / function
            break;
        case 18:
            // Code / function
            break;
        case 19:
            // Code / function
            break;
        case 20:
            // Code / function
            break;
        case 21:
            // Code / function
            break;
        case 22:
            // Code / function
            break;
        case 23:
            // Code / function
            break;
        case 24:
            // Code / function
            break;
        case 25:
            // Code / function
            break;
        case 26:
            // Code / function
            break;
        case 27:
            // Code / function
            break;
        case 28:
            // Code / function
            break;
        case 29:
            // Code / function
            break;
        case 30:
            // Code / function
            break;
        case 31:
            // Code / function
            break;
        case 32:
            // Code / function
            break;
        case 33:
            // Code / function
            break;
        case 34:
            // Code / function
            break;
        case 35:
            // Code / function
            break;
        case 36:
            // Code / function
            break;
        case 37:
            // Code / function
            break;
        case 38:
            // Code / function
            break;
        case 39:
            // Code / function
            break;
        case 40:
            // Code / function
            break;
        case 41:
            // Code / function
            break;
        case 42:
            // Code / function
            break;
        case 43:
            // Code / function
            break;
        case 44:
            // Code / function
            break;
        case 45:
            // Code / function
            break;
        case 46:
            // Code / function
            break;
        case 47:
            // Code / function
            break;
        case 48:
            // Code / function
            break;
        case 49:
            // Code / function
            break;
        case 50:
            // Code / function
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (option != 51);
}

//!---------------------------------------------------------------------------------------------------------------------------------------------------------

void displayExitMessage(){
    cout << "\nThank you for using the program!\n";
}



//todo 20 algebra formulas ---------------------------------------------------------------------------------------------------------------------

//? 1. Square of Sum (a + b)^2 = a^2 + 2ab + b^2
double squareOfSumAlgebra(){
    double a, b;

    cout << "============= You selected (Square of Sum) in Algebra =============\n\n";
    cout << "Formula: (a + b)^2 = a^2 + 2ab + b^2" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter Second Number (b): ", true);
    system("cls");

    return pow(a, 2) + 2 * a * b + pow(b, 2);
}

//? 2. Square of Difference (a - b)^2 = a^2 - 2ab + b^2
double squareOfDifferenceAlgebra(){
    double a, b;

    cout << "============= You selected (Square of Difference) in Algebra =============\n\n";
    cout << "Formula: (a - b)^2 = a^2 - 2ab + b^2" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter Second Number (b): ", true);
    system("cls");

    return pow(a, 2) - 2 * a * b + pow(b, 2);
}

//? 3. Product of Squares a^2 * b^2 = (a^2) * (b^2)
double productOfSquareAlgebra(){

    double a, b;

    cout << "============= You selected (Product of Squares) in Algebra =============\n\n";

    cout << "Formula: a^2 * b^2 = (a^2) * (b^2)" << endl;
    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter First Number (b): ", true);
    system("cls");

    return pow(a, 2) * pow(b, 2);

}

//? 4. Sum of Squares a2 + b2 = (a + b)2 - 2ab  
double sumOfSquaresAlgebra(){

    double a, b;

    cout << "============= You selected (Product of Squares) in Algebra =============\n\n";

    cout << "Formula: a^2 + b^2" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter First Number (b): ", true);
    system("cls");

    return pow(a + b, 2) - 2 * a * b;
}

//? 5. Cube of Sum a3 + b3 = (a + b) (a2 - ab + b2) 
double cubeOfSumAlgebra(){

    double a, b;

    cout << "============= You selected (Cube of Sum) in Algebra =============\n\n";

    cout << "Formula: a3 + b3 = (a + b) (a2 - ab + b2)" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter First Number (b): ", true);
    system("cls");

    return (a + b) * (pow(a, 2) - a * b + pow(b, 2));
}

//? 6. Cube of Difference a^3 - b^3 = (a - b)(a^2 + ab + b^2) 
double cubeOfDifferenceAlgebra(){

    double a, b;

    cout << "============= You selected (Cube of Difference) in Algebra =============\n\n";

    cout << "Formula: (a - b)^3 = (a - b)(a^2 + ab + b^2)" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter Second Number (b): ", true);
    system("cls");

    return (a - b) * (pow(a, 2) + a * b + pow(b, 2));

}

//? 7. Sum of Cubes a^3 + b^3 = (a + b)(a^2 - ab + b^2)
double sumOfCubesAlgebra(){

    double a, b;

    cout << "============= You selected (Sum of Cubes) in Algebra =============\n\n";
    cout << "Formula: a^3 + b^3 = (a + b)(a^2 - ab + b^2)" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter Second Number (b): ", true);
    system("cls");

    return (a + b) * (pow(a, 2) - a * b + pow(b, 2));
}

//? 8. Difference of Cubes a^3 - b^3 = (a - b)(a^2 + ab + b^2)
double differenceOfCubesAlgebra(){
    double a, b;

    cout << "============= You selected (Difference of Cubes) in Algebra =============\n\n";
    cout << "Formula: a^3 - b^3 = (a - b)(a^2 + ab + b^2)" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter Second Number (b): ", true);
    system("cls");

    return (a - b) * (pow(a, 2) + a * b + pow(b, 2));
}

//? 9. Difference of Two Squares (a + b)^2 - (a - b)^2 = 4ab
double differenceOfSquaresAlgebra(){
    double a, b;

    cout << "============= You selected (Difference of Two Squares) in Algebra =============\n\n";
    cout << "Formula: (a + b)^2 - (a - b)^2 = 4ab" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter Second Number (b): ", true);
    system("cls");

    return 4 * a * b;
}

//? 10. Square of Sum for Three Terms (a + b + c)^2 = a^2 + b^2 + c^2 + 2ab + 2bc + 2ac
double squareOfThreeTermsAlgebra(){
    double a, b, c;

    cout << "============= You selected (Square of Sum for Three Terms) in Algebra =============\n\n";
    cout << "Formula: (a + b + c)^2 = a^2 + b^2 + c^2 + 2ab + 2bc + 2ac" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter Second Number (b): ", true);
    c = getValidatedInputWithRange("Enter Third Number (c): ", true);
    system("cls");

    return pow(a, 2) + pow(b, 2) + pow(c, 2) + 2 * a * b + 2 * b * c + 2 * a * c;
}

//? 11. Special Sum of Cubes a^3 + b^3 + c^3 - 3abc = (a + b + c)(a^2 + b^2 + c^2 - ab - bc - ac)
double specialSumOfCubesAlgebra(){
    double a, b, c;

    cout << "============= You selected (Special Sum of Cubes) in Algebra =============\n\n";
    cout << "Formula: a^3 + b^3 + c^3 - 3abc = (a + b + c)(a^2 + b^2 + c^2 - ab - bc - ac)" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter Second Number (b): ", true);
    c = getValidatedInputWithRange("Enter Third Number (c): ", true);
    system("cls");

    return (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2) - a * b - b * c - a * c);
}

//? 12. Cubes When Sum is Zero  Condition: If a + b + c = 0, then a^3 + b^3 + c^3 = 3abc
double cubesWhenSumZeroAlgebra(){
    double a, b, c;

    cout << "============= You selected (Cubes When Sum is Zero) in Algebra =============\n\n";
    cout << "Condition: If a + b + c = 0, then a^3 + b^3 + c^3 = 3abc" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter Second Number (b): ", true);
    c = getValidatedInputWithRange("Enter Third Number (c): ", true);
    system("cls");

    if (a + b + c != 0) {
        cout << "Condition not satisfied (a + b + c ≠ 0). Returning 0.\n";
        return 0;
    }

    return 3 * a * b * c;
}

//? 13. Fourth Power Identity a^4 + a^2 + 1 = (a^2 + a + 1)(a^2 - a + 1)
double fourthPowerIdentityAlgebra(){
    double a;

    cout << "============= You selected (Fourth Power Identity) in Algebra =============\n\n";
    cout << "Formula: a^4 + a^2 + 1 = (a^2 + a + 1)(a^2 - a + 1)" << endl;

    a = getValidatedInputWithRange("Enter Number (a): ", true);
    system("cls");

    return (pow(a, 2) + a + 1) * (pow(a, 2) - a + 1);
}

//? 14. Special Fourth Power Plus Squares a^4 + a^2b^2 + b^4 = (a^2 + ab + b^2)(a^2 - ab + b^2)
double specialFourthPowerAlgebra(){
    double a, b;

    cout << "============= You selected (Special Fourth Power Plus Squares) in Algebra =============\n\n";
    cout << "Formula: a^4 + a^2b^2 + b^4 = (a^2 + ab + b^2)(a^2 - ab + b^2)" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter Second Number (b): ", true);
    system("cls");

    return (pow(a, 2) + a * b + pow(b, 2)) * (pow(a, 2) - a * b + pow(b, 2));
}

//? 15. Product of a and b with Sum of Squares ab(a^2 + b^2)(a + b)(a - b)
double productWithSumOfSquares(){
    double a, b;

    cout << "============= You selected (Product with Sum of Squares) in Algebra =============\n\n";
    cout << "Formula: ab(a^2 + b^2)(a + b)(a - b)" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter Second Number (b): ", true);
    system("cls");

    return a * b * (pow(a, 2) + pow(b, 2)) * (a + b) * (a - b);
}

//? 16. Difference with Fourth Power Terms (a + b)(a^2 + b^2)(a + b)(a - b)
double fourthPowerDifference(){
    double a, b;

    cout << "============= You selected (Difference with Fourth Power Terms) in Algebra =============\n\n";
    cout << "Formula: (a + b)(a^2 + b^2)(a + b)(a - b)" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter Second Number (b): ", true);
    system("cls");

    return (a + b) * (pow(a, 2) + pow(b, 2)) * (a + b) * (a - b);
}

//? 17. Exponent Product Rule a^(m+n)
double exponentProductRule(){
    double a, m, n;

    cout << "============= You selected (Exponent Product Rule) in Algebra =============\n\n";
    cout << "Formula: a^(m+n)" << endl;

    a = getValidatedInputWithRange("Enter Base (a): ", true);
    m = getValidatedInputWithRange("Enter First Exponent (m): ", true);
    n = getValidatedInputWithRange("Enter Second Exponent (n): ", true);
    system("cls");

    return pow(a, m + n);
}

//? 18. Exponent Quotient Rule a^(m-n)
double exponentQuotientRule(){
    double a, m, n;

    cout << "============= You selected (Exponent Quotient Rule) in Algebra =============\n\n";
    cout << "Formula: a^(m-n)" << endl;

    a = getValidatedInputWithRange("Enter Base (a): ", true);
    m = getValidatedInputWithRange("Enter Numerator Exponent (m): ", true);
    n = getValidatedInputWithRange("Enter Denominator Exponent (n): ", true);
    system("cls");

    return pow(a, m - n);
}

//? 19. Power Rule for Exponents (a^m)^n = a^(m*n)
double powerRule(){
    double a, m, n;

    cout << "============= You selected (Power Rule for Exponents) in Algebra =============\n\n";
    cout << "Formula: (a^m)^n = a^(m*n)" << endl;

    a = getValidatedInputWithRange("Enter Base (a): ", true);
    m = getValidatedInputWithRange("Enter First Exponent (m): ", true);
    n = getValidatedInputWithRange("Enter Second Exponent (n): ", true);
    system("cls");

    return pow(a, m * n);
}

//? 20. Power of a Product (ab)^m = a^m * b^m
double powerOfProduct(){
    double a, b, m;

    cout << "============= You selected (Power of a Product) in Algebra =============\n\n";
    cout << "Formula: (ab)^m = a^m * b^m" << endl;

    a = getValidatedInputWithRange("Enter First Base (a): ", true);
    b = getValidatedInputWithRange("Enter Second Base (b): ", true);
    m = getValidatedInputWithRange("Enter Exponent (m): ", true);
    system("cls");

    return pow(a, m) * pow(b, m);
}






//todo 25 geometry_2D formulas ---------------------------------------------------------------------------------------------------



//todo 25 geometry_3D formulas ---------------------------------------------------------------------------------------------------




//todo 50 physics formulas ---------------------------------------------------------------------------------------------------





