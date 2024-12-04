#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

//! Calling formula section ---------------------------------------------------------------------------------------------------

double getValidatedInputWithRange(const string& prompt, bool allowNegative); // if allow negative, set bool to true, if not , set it to false
void showAlgebraMenu();
void showGeometryMenu_2D();
void showGeometryMenu_3D();
void showPhysicsMenu();
void displayExitMessage();


//todo 20 algebra formulas ---------------------------------------------------------------------------------------------------

//? 1. Square of Sum (a + b)^2 = a^2 + 2ab + b^2
double squareOfSumAlgebra();

//? 2. Square of Difference (a - b)^2 = a^2 - 2ab + b^2
double squareOfDifferenceAlgebra();

//? 3. Product of Squares a^2 * b^2 = (a^2) * (b^2)
double productOfSquareAlgebra();

//? 4. Sum of Squares a^2 + b^2 = (a + b)^2 - 2ab
double sumOfSquaresAlgebra();

//? 5. Cube of Sum a^3 + b^3 = (a + b)(a^2 - ab + b^2)
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

//? 11. Special Sum of Cubes a^3 + b^3 + c^3 - 3abc = (a + b + c)(a^2 + b^2 + c^2 - ab - bc - ac)
double specialSumOfCubesAlgebra();

//? 12. Cubes When Sum is Zero Condition: If a + b + c = 0, then a^3 + b^3 + c^3 = 3abc
double cubesWhenSumZeroAlgebra();

//? 13. Fourth Power Identity a^4 + a^2 + 1 = (a^2 + a + 1)(a^2 - a + 1)
double fourthPowerIdentityAlgebra();

//? 14. Special Fourth Power Plus Squares a^4 + a^2b^2 + b^4 = (a^2 + ab + b^2)(a^2 - ab + b^2)
double specialFourthPowerAlgebra();

//? 15. Product with Sum of Squares ab(a^2 + b^2)(a + b)(a - b)
double productWithSumOfSquaresAlgebra();

//? 16. Fourth Power Difference (a + b)(a^2 + b^2)(a + b)(a - b)
double fourthPowerDifferenceAlgebra();

//? 17. Exponent Product Rule a^(m+n)
double exponentProductRuleAlgebra();

//? 18. Exponent Quotient Rule a^(m-n)
double exponentQuotientRuleAlgebra();

//? 19. Power Rule for Exponents (a^m)^n = a^(m*n)
double powerRuleForExponentsAlgebra();

//? 20. Power of a Product (ab)^m = a^m * b^m
double powerOfProductAlgebra();


//todo 25 geometry_2D formulas ---------------------------------------------------------------------------------------------------



//todo 25 geometry_3D formulas ---------------------------------------------------------------------------------------------------
// 1. Cube
double cubeSurfaceArea(double a) {
    return 6 * a * a;
}

double cubeVolume(double a) {
    return a * a * a;
}

// 2. Rectangular Prism
double rectangularPrismSurfaceArea(double a, double b, double c) {
    return 2 * (a * b + b * c + c * a);
}

double rectangularPrismVolume(double a, double b, double c) {
    return a * b * c;
}

// 3. Sphere
double sphereSurfaceArea(double r) {
    return 4 * M_PI * r * r;
}

double sphereVolume(double r) {
    return (4.0 / 3.0) * M_PI * r * r * r;
}

// 4. Cylinder
double cylinderLateralSurfaceArea(double r, double h) {
    return 2 * M_PI * r * h;
}

double cylinderTotalSurfaceArea(double r, double h) {
    return 2 * M_PI * r * (h + r);
}

double cylinderVolume(double r, double h) {
    return M_PI * r * r * h;
}

// 5. Cone
double coneLateralSurfaceArea(double r, double h) {
    return M_PI * r * sqrt(r * r + h * h);
}

double coneTotalSurfaceArea(double r, double h) {
    return M_PI * r * (r + sqrt(r * r + h * h));
}

double coneVolume(double r, double h) {
    return (1.0 / 3.0) * M_PI * r * r * h;
}

// 6. Hemisphere
double hemisphereSurfaceArea(double r) {
    return 3 * M_PI * r * r;
}

double hemisphereVolume(double r) {
    return (2.0 / 3.0) * M_PI * r * r * r;
}

// 7. Tetrahedron
double tetrahedronSurfaceArea(double a) {
    return sqrt(3) * a * a;
}

double tetrahedronVolume(double a) {
    return (a * a * a) / (6 * sqrt(2));
}

// 8. Square Pyramid
double pyramidLateralSurfaceArea(double a, double h) {
    return 2 * a * sqrt((a / 2) * (a / 2) + h * h);
}

double pyramidTotalSurfaceArea(double a, double h) {
    return a * a + 2 * a * sqrt((a / 2) * (a / 2) + h * h);
}

double pyramidVolume(double a, double h) {
    return (1.0 / 3.0) * a * a * h;
}

// 9. Triangular Prism
double triangularPrismSurfaceArea(double a, double b, double h) {
    return a * b + 2 * a * h + b * h;
}

double triangularPrismVolume(double a, double b, double h) {
    return (1.0 / 2.0) * a * b * h;
}

// 10. Ellipsoid
double ellipsoidVolume(double a, double b, double c) {
    return (4.0 / 3.0) * M_PI * a * b * c;
}

// 11. Torus
double torusSurfaceArea(double R, double r) {
    return 4 * M_PI * M_PI * R * r;
}

double torusVolume(double R, double r) {
    return 2 * M_PI * M_PI * R * r * r;
}

// 12. Frustum of Cone
double frustumLateralSurfaceArea(double r1, double r2, double h) {
    return M_PI * (r1 + r2) * sqrt((r1 - r2) * (r1 - r2) + h * h);
}

double frustumVolume(double r1, double r2, double h) {
    return (1.0 / 3.0) * M_PI * h * (r1 * r1 + r1 * r2 + r2 * r2);
}


//todo 50 physics formulas ---------------------------------------------------------------------------------------------------


// random idea, idk if e butang
// 1. setting sa main menu, pwede ka adjust pila ka decimals e output


int main(){

    int choice;

    cout << defaultfloat << setprecision(-1);

    do {
        cout << "\t=======================\n";
        cout << "\t|       Main Menu     |\n";   
        cout << "\t|                     |\n";           
        cout << "\t| 1. Algebra          |\n";      
        cout << "\t| 2. Geometry 2D      |\n";  
        cout << "\t| 3. Geometry 3D      |\n";  
        cout << "\t| 4. Physics          |\n";      
        cout << "\t| 5. Exit             |\n";        
        cout << "\t=======================\n";
        choice = getValidatedInputWithRange("Enter your choice(1-5): ", false);
        system("cls");

        switch (choice){
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
            system("pause");
            system("cls");
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
        cout << "\t============================================= ALGEBRA MENU =========================================\n";
        cout << "\t|  1. Square of Sum                |  2. Square of Difference        |  3. Product of Squares      |\n";
        cout << "\t|     (a + b)^2 = a^2 + 2ab + b^2  |     (a - b)^2 = a^2 - 2ab + b^2 |     a^2 * b^2               |\n";
        cout << "\t|--------------------------------------------------------------------------------------------------|\n";
        cout << "\t|  4. Sum of Squares               |  5. Cube of Sum                 |  6. Cube of Difference      |\n";
        cout << "\t|     a^2 + b^2 = (a+b)^2 - 2ab    |     (a + b)^3 = a^3 + 3a^2b     |     (a - b)^3 = a^3 - 3a^2b |\n";
        cout << "\t|                                  |     + 3ab^2 + b^3               |     + 3ab^2 - b^3           |\n";
        cout << "\t|--------------------------------------------------------------------------------------------------|\n";
        cout << "\t|  7. Sum of Cubes                 |  8. Difference of Cubes         |  9. Difference of Squares   |\n";
        cout << "\t|    a^3 + b^3 = (a+b)(a^2-ab+b^2) |    a^3 - b^3 = (a-b)(a^2+ab+b^2)|     (a+b)^2 - (a-b)^2=4ab   |\n";
        cout << "\t|--------------------------------------------------------------------------------------------------|\n";
        cout << "\t| 10. Square of Sum (3 Terms)      | 11. Special Sum of Cubes        | 12. Cubes When Sum is Zero  |\n";
        cout << "\t|     (a+b+c)^2 = a^2+b^2+c^2+     |   a^3 + b^3 + c^3 - 3abc =      |     If a+b+c = 0, then:     |\n";
        cout << "\t|     2ab+2bc+2ac                  |   (a+b+c)(a^2+b^2+c^2-ab-bc-ac) |     a^3+b^3+c^3 = 3abc      |\n";
        cout << "\t|                                  |                                 |                             |\n";
        cout << "\t|--------------------------------------------------------------------------------------------------|\n";
        cout << "\t| 13. Fourth Power Identity        | 14. Special Fourth Power        | 15. Product with Squares    |\n";
        cout << "\t|     a^4 + a^2 + 1 =              |     a^4 + a^2b^2 + b^4 =        |     ab(a^2+b^2)(a+b)(a-b)   |\n";
        cout << "\t|     (a^2+a+1)(a^2-a+1)           |     (a^2+ab+b^2)(a^2-ab+b^2)    |                             |\n";
        cout << "\t|--------------------------------------------------------------------------------------------------|\n";
        cout << "\t| 16. Fourth Power Difference      | 17. Exponent Product Rule       | 18. Exponent Quotient Rule  |\n";
        cout << "\t|     (a^2-b^2)(a^2+b^2)           |     a^(m+n)                     |     a^(m-n)                 |\n";
        cout << "\t|--------------------------------------------------------------------------------------------------|\n";
        cout << "\t| 19. Power Rule for Exponents     | 20. Power of a Product          |                             |\n";
        cout << "\t|     (a^m)^n = a^(m*n)            |     (ab)^m = a^m * b^m          |                             |\n";
        cout << "\t====================================================================================================\n";
        cout << "\n0. Back to Main Menu\n";
        option = getValidatedInputWithRange("Enter your choice(0-20): ", false);
        system("cls");

        if (option == 0){
            return; // Return to the main menu
        }

        cout << fixed << setprecision(2);

        switch (option){
        case 1:
            result = squareOfSumAlgebra();
            cout << "============= You selected (Square of Sum) in Algebra =============\n\n";
            cout << "The square of the Sum is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 2:
            result = squareOfDifferenceAlgebra();
            cout << "============= You selected (Square of Difference) in Algebra =============\n\n";
            cout << "The square of the Difference is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 3:
            result = productOfSquareAlgebra();
            cout << "============= You selected (Product of Squares) in Algebra =============\n\n";
            cout << "The Product of the Squares  is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 4:
            result = sumOfSquaresAlgebra();
            cout << "============= You selected (Sum of Squares) in Algebra =============\n\n";
            cout << "The Product of the Squares  is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 5:
            result = cubeOfSumAlgebra();
            cout << "============= You selected (Cube of Sum) in Algebra =============\n\n";
            cout << "The Cube of the Sum  is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 6:
            result = cubeOfDifferenceAlgebra();
            cout << "============= You selected (Cube of Difference) in Algebra =============\n\n";
            cout << "The Cube of the Difference  is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 7:
            result = sumOfCubesAlgebra();
            cout << "============= You selected (Sum of Cubes) in Algebra =============\n\n";
            cout << "The Sum of the Cubes  is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 8:
            result = differenceOfCubesAlgebra();
            cout << "============= You selected (Difference of Cubes) in Algebra =============\n\n";
            cout << "The Difference of the Cubes  is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 9:
            result = differenceOfSquaresAlgebra();
            cout << "============= You selected (Difference of Two Squares) in Algebra =============\n\n";
            cout << "The Difference of the Two Squares  is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 10:
            result = squareOfThreeTermsAlgebra();
            cout << "============= You selected (Square of Sum for Three Terms) in Algebra =============\n\n";
            cout << "The Square of the Sum for Three Terms is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 11:
            result = specialSumOfCubesAlgebra();
            cout << "============= You selected (Special Sum of Cubes) in Algebra =============\n\n";
            cout << "The Special Sum of the Cubes is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 12:
            result = cubesWhenSumZeroAlgebra();
            cout << "============= You selected (Cubes When Sum is Zero) in Algebra =============\n\n";
            cout << "The Cubes When the Sum is Zero is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 13:
            result = fourthPowerIdentityAlgebra();
            cout << "============= You selected (Fourth Power Identity) in Algebra =============\n\n";
            cout << "The Fourth Power Identity is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 14:
            result = specialFourthPowerAlgebra();
            cout << "============= You selected (Special Fourth Power Plus Squares) in Algebra =============\n\n";
            cout << "The Special Fourth Power Plus Squares is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 15:
            result = productWithSumOfSquaresAlgebra();
            cout << "============= You selected (Product with Sum of Squares) in Algebra =============\n\n";
            cout << "The Product with Sum of Squares is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 16:
            result = fourthPowerDifferenceAlgebra();
            cout << "============= You selected (Fourth Power Difference) in Algebra =============\n\n";
            cout << "The Fourth Power Difference is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 17:
            result = exponentProductRuleAlgebra();
            cout << "============= You selected (Exponent Product Rule) in Algebra =============\n\n";
            cout << "The Exponent Product Rule is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 18:
            result = exponentQuotientRuleAlgebra();
            cout << "============= You selected (Exponent Quotient Rule) in Algebra =============\n\n";
            cout << "The Exponent Quotient Rule is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 19:
            result = powerRuleForExponentsAlgebra();
            cout << "============= You selected (Power Rule for Exponents) in Algebra =============\n\n";
            cout << "The Power Rule for the Exponents is: " << result << "\n\n\n";
            system("pause");
            system("cls");
            break;
        case 20:
            result = powerOfProductAlgebra();
            cout << "============= You selected (Power of a Product) in Algebra =============\n\n";
            cout << "The Power of a Product is: " << result << "\n\n\n";
            system("pause");
            system("cls");
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
        cout << "\t========================================= Geometry Menu 2D Menu ============================================\n";
        cout << "\t| 1.  Placeholder Title 1       |      9.  Placeholder Title 9         |     17. Placeholder Title 17      |\n";
        cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
        cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
        cout << "\t| 2.  Placeholder Title 2       |      10. Placeholder Title 10        |     18. Placeholder Title 18      |\n";
        cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
        cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
        cout << "\t| 3.  Placeholder Title 3       |      11. Placeholder Title 11        |     19. Placeholder Title 19      |\n";
        cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
        cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
        cout << "\t| 4.  Placeholder Title 4       |      12. Placeholder Title 12        |     20. Placeholder Title 20      |\n";
        cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
        cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
        cout << "\t| 5.  Placeholder Title 5       |      13. Placeholder Title 13        |     21. Placeholder Title 21      |\n";
        cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
        cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
        cout << "\t| 6.  Placeholder Title 6       |      14. Placeholder Title 14        |     22. Placeholder Title 22      |\n";
        cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
        cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
        cout << "\t| 7.  Placeholder Title 7       |      15. Placeholder Title 15        |     23. Placeholder Title 23      |\n";
        cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
        cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
        cout << "\t| 8.  Placeholder Title 8       |      16. Placeholder Title 16        |     24. Placeholder Title 24      |\n";
        cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
        cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
        cout << "\t|                               |       25. Placeholder Title 25       |                                   |\n";
        cout << "\t|                               |            Placeholder Formula       |                                   |\n";
        cout << "\t============================================================================================================\n";
        cout << "\n0. Back to Main Menu\n";
        option = getValidatedInputWithRange("Enter your choice(0-25): ", false);
        system("cls");

        if (option == 0){
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
cout << "\t================================================ Geometry 3D Menu =============================================\n";
cout << "\t| 1.  Cube Surface Area         |      9.  Triangular Prism Surface Area |     17. Frustum Surface Area       |\n";
cout << "\t|      6 * a * a                |           a * b + 2 * a * h + b * h    |      M_PI * (r1 + r2) * sqrt(      |\n";
cout << "\t|                               |                                        |          (r1 - r2) * (r1 - r2)  +  |\n";
cout << "\t|                               |                                        |          h * h)                    |\n";
cout << "\t|-------------------------------------------------------------------------------------------------------------|\n";
cout << "\t| 2.  Cube Volume               |      10. Triangular Prism Volume       |     18. Frustum Volume             |\n";
cout << "\t|      a * a * a                |           (1.0 / 2.0) * a * b * h      |      (1.0 / 3.0) * M_PI * h * (    |\n";
cout << "\t|                               |                                        |          r1 * r1 + r1 * r2 +       |\n";
cout << "\t|                               |                                        |          r2 * r2)                  |\n";
cout << "\t|-------------------------------------------------------------------------------------------------------------|\n";
cout << "\t| 3.  Rectangular Prism         |   11. Ellipsoid Volume                 |     19. Torus Surface Area         |\n";
cout << "\t|      Surface Area             |       (4.0 / 3.0) * M_PI * a * b * c   |       4 * M_PI * M_PI * R * r      |\n";
cout << "\t|   2 * (a * b + b * c + c * a) |                                        |                                    |\n";
cout << "\t|-------------------------------------------------------------------------------------------------------------|\n";
cout << "\t| 4.  Rectangular Prism Volume  |      12. Torus Volume                  |     20. Torus Volume               |\n";
cout << "\t|      a * b * c                |      2 * M_PI * M_PI * R * r * r       |      2 * M_PI * M_PI * R * r * r   |\n";
cout << "\t|-------------------------------------------------------------------------------------------------------------|\n";
cout << "\t| 5.  Sphere Surface Area       |      13. Frustum Lateral Surface Area |     21. Hemisphere Surface Area     |\n";
cout << "\t|      4 * M_PI * r * r         |      M_PI * (r1 + r2) * sqrt(         |      3 * M_PI * r * r               |\n";
cout << "\t|                               |          (r1 - r2) * (r1 - r2) +      |                                     |\n";
cout << "\t|                               |          h * h)                       |                                     |\n";
cout << "\t|-------------------------------------------------------------------------------------------------------------|\n";
cout << "\t| 6.  Sphere Volume             |      14. Frustum Volume               |     22. Hemisphere Volume           |\n";
cout << "\t|      (4.0 / 3.0) * M_PI * r * |      (1.0 / 3.0) * M_PI * h * (       |      (2.0 / 3.0) * M_PI * r * r *   |\n";
cout << "\t|      r * r                    |          r1 * r1 + r1 * r2 + r2 * r2) |          r                          |\n";
cout << "\t|-------------------------------------------------------------------------------------------------------------|\n";
cout << "\t| 7.  Cylinder Surface Area     |      15. Cone Surface Area            |     23. Tetrahedron Surface Area    |\n";
cout << "\t|      2 * M_PI * r * (h + r)   |      M_PI * r * sqrt(r * r + h * h)   |      sqrt(3) * a * a                |\n";
cout << "\t|-------------------------------------------------------------------------------------------------------------|\n";
cout << "\t| 8.  Cylinder Volume           |      16. Cone Volume                  |     24. Tetrahedron Volume          |\n";
cout << "\t|      M_PI * r * r * h         |      (1.0 / 3.0) * M_PI * r * r * h   |      (a * a * a) / (6 * sqrt(2))    |\n";
cout << "\t|-------------------------------------------------------------------------------------------------------------|\n";
cout << "\t|                               |      25. Square Pyramid Surface Area  |                                     |\n";
cout << "\t|                               |      a * a + 2 * a * sqrt((a / 2) *   |                                     |\n";
cout << "\t|                               |          (a / 2) + h * h)             |                                     |\n";
cout << "\t===============================================================================================================\n";
        cout << "\n0. Back to Main Menu\n";
        option = getValidatedInputWithRange("Enter your choice(0-25): ", false);
        system("cls");

        if (option == 0){
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
    int page = 1;

    do{
        if (page == 1){
            cout << "\t========================================= Physics Menu (Page 1) ============================================\n";
            cout << "\t| 1.  Placeholder Title 1       |      9.  Placeholder Title 9         |     17. Placeholder Title 17      |\n";
            cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t| 2.  Placeholder Title 2       |      10. Placeholder Title 10        |     18. Placeholder Title 18      |\n";
            cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t| 3.  Placeholder Title 3       |      11. Placeholder Title 11        |     19. Placeholder Title 19      |\n";
            cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t| 4.  Placeholder Title 4       |      12. Placeholder Title 12        |     20. Placeholder Title 20      |\n";
            cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t| 5.  Placeholder Title 5       |      13. Placeholder Title 13        |     21. Placeholder Title 21      |\n";
            cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t| 6.  Placeholder Title 6       |      14. Placeholder Title 14        |     22. Placeholder Title 22      |\n";
            cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t| 7.  Placeholder Title 7       |      15. Placeholder Title 15        |     23. Placeholder Title 23      |\n";
            cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t| 8.  Placeholder Title 8       |      16. Placeholder Title 16        |     24. Placeholder Title 24      |\n";
            cout << "\t|      Placeholder Formula      |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t|                               |       25. Placeholder Title 25       |                                   |\n";
            cout << "\t|                               |            Placeholder Formula       |                                   |\n";
            cout << "\t============================================================================================================\n";
            cout << "\n51. Next Page\n";
            cout << "\n0. Back to Main Menu\n";
            option = getValidatedInputWithRange("Enter your choice(0-50): ", false);
        }
        else if (page == 2){
            cout << "\t========================================= Physics Menu (Page 2) ============================================\n";
            cout << "\t| 26.  Placeholder Title 1      |      34. Placeholder Title 9         |     42. Placeholder Title 17      |\n";
            cout << "\t|       Placeholder Formula     |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t| 27.  Placeholder Title 2      |      35. Placeholder Title 10        |     43. Placeholder Title 18      |\n";
            cout << "\t|       Placeholder Formula     |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t| 28.  Placeholder Title 3      |      36. Placeholder Title 11        |     44. Placeholder Title 19      |\n";
            cout << "\t|       Placeholder Formula     |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t| 29.  Placeholder Title 4      |      37. Placeholder Title 12        |     45. Placeholder Title 20      |\n";
            cout << "\t|       Placeholder Formula     |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t| 30.  Placeholder Title 5      |      38. Placeholder Title 13        |     46. Placeholder Title 21      |\n";
            cout << "\t|       Placeholder Formula     |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t| 31.  Placeholder Title 6      |      39. Placeholder Title 14        |     47. Placeholder Title 22      |\n";
            cout << "\t|       Placeholder Formula     |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t| 32.  Placeholder Title 7      |      40. Placeholder Title 15        |     48. Placeholder Title 23      |\n";
            cout << "\t|       Placeholder Formula     |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t| 33.  Placeholder Title 8      |      41. Placeholder Title 16        |     49. Placeholder Title 24      |\n";
            cout << "\t|       Placeholder Formula     |           Placeholder Formula        |          Placeholder Formula      |\n";
            cout << "\t|----------------------------------------------------------------------------------------------------------|\n";
            cout << "\t|                               |       50. Placeholder Title 25       |                                   |\n";
            cout << "\t|                               |            Placeholder Formula       |                                   |\n";
            cout << "\t============================================================================================================\n";
            cout << "\n51. Previous Page\n";
            cout << "\n0. Back to Main Menu\n";
            option = getValidatedInputWithRange("Enter your choice(0-50): ", false);
        }

        if (option == 51 && page == 1){
            page = 2; // Go to Page 2
            system("cls");
        }
        else if (option == 51 && page == 2){
            page = 1; // Go back to Page 1
            system("cls");
        }
        else if (option == 52 && page == 1 || option == 52 && page == 2){
            system("cls");
            return; // Exit to Main Menu
        }
        else if (option >= 1 && option <= 50){
            system("cls");
            cout << "You selected option " << option << " in Physics.\n";

            // Placeholder for actual functionality

            switch (option){
            case 1:
                // Code / function option 
                break;
            case 2:
                // Code / function option 
                break;
            case 3:
                // Code / function option 
                break;
            case 4:
                // Code / function option 
                break;
            case 5:
                // Code / function option 
                break;
            case 6:
                // Code / function option 
                break;
            case 7:
                // Code / function option 
                break;
            case 8:
                // Code / function option 
                break;
            case 9:
                // Code / function option 
                break;
            case 10:
                // Code / function option
                break;
            case 11:
                // Code / function option
                break;
            case 12:
                // Code / function option
                break;
            case 13:
                // Code / function option
                break;
            case 14:
                // Code / function option
                break;
            case 15:
                // Code / function option
                break;
            case 16:
                // Code / function option
                break;
            case 17:
                // Code / function option
                break;
            case 18:
                // Code / function option
                break;
            case 19:
                // Code / function option
                break;
            case 20:
                // Code / function option
                break;
            case 21:
                // Code / function option
                break;
            case 22:
                // Code / function option
                break;
            case 23:
                // Code / function option
                break;
            case 24:
                // Code / function option
                break;
            case 25:
                // Code / function option
                break;
            case 26:
                // Code / function option
                break;
            case 27:
                // Code / function option
                break;
            case 28:
                // Code / function option
                break;
            case 29:
                // Code / function option
                break;
            case 30:
                // Code / function option
                break;
            case 31:
                // Code / function option
                break;
            case 32:
                // Code / function option
                break;
            case 33:
                // Code / function option
                break;
            case 34:
                // Code / function option
                break;
            case 35:
                // Code / function option
                break;
            case 36:
                // Code / function option
                break;
            case 37:
                // Code / function option
                break;
            case 38:
                // Code / function option
                break;
            case 39:
                // Code / function option
                break;
            case 40:
                // Code / function option
                break;
            case 41:
                // Code / function option
                break;
            case 42:
                // Code / function option
                break;
            case 43:
                // Code / function option
                break;
            case 44:
                // Code / function option
                break;
            case 45:
                // Code / function option
                break;
            case 46:
                // Code / function option
                break;
            case 47:
                // Code / function option
                break;
            case 48:
                // Code / function option
                break;
            case 49:
                // Code / function option
                break;
            case 50:
                // Code / function option
                break;
            default:
                cin.clear();
                cin.ignore(100000, '\n');
                cout << "Invalid choice. Please try again.\n";
                system("pause");
                system("cls");
                break;
            }
        }
        else{
            cin.clear();
            cin.ignore(100000, '\n');
            cout << "Invalid choice. Please try again.\n";
            system("pause");
            system("cls");
        }
    } while (true);
}

//!---------------------------------------------------------------------------------------------------------------------------------------------------------

void displayExitMessage(){
    cout << "\n\tThank you for using the program!\n";
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

    return pow(a + b, 2);
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
    b = getValidatedInputWithRange("Enter Second Number (b): ", true);
    system("cls");

    return pow(a, 2) * pow(b, 2);

}

//? 4. Sum of Squares a2 + b2 = (a + b)2 - 2ab  
double sumOfSquaresAlgebra(){

    double a, b;

    cout << "============= You selected (Sum of Squares) in Algebra =============\n\n";

    cout << "Formula: a^2 + b^2 = (a + b)^2 - 2ab" << endl;
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

    return pow(a + b + c, 2);
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

    if (abs(a + b + c) > 1e-9){
        cout << "Condition not satisfied (a + b + c != 0). Returning 0.\n";
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
double productWithSumOfSquaresAlgebra(){
    double a, b;

    cout << "============= You selected (Product with Sum of Squares) in Algebra =============\n\n";
    cout << "Formula: ab(a^2 + b^2)(a + b)(a - b)" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter Second Number (b): ", true);
    system("cls");

    return a * b * (pow(a, 2) + pow(b, 2)) * (a + b) * (a - b);
}

//? 16. Difference with Fourth Power Terms (a + b)(a^2 + b^2)(a + b)(a - b)
double fourthPowerDifferenceAlgebra(){
    double a, b;

    cout << "============= You selected (Difference with Fourth Power Terms) in Algebra =============\n\n";
    cout << "Formula: (a + b)(a^2 + b^2)(a + b)(a - b)" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    b = getValidatedInputWithRange("Enter Second Number (b): ", true);
    system("cls");

    return pow(a + b, 2) * (pow(a, 2) + pow(b, 2)) * (a - b);
}

//? 17. Exponent Product Rule a^(m+n)
double exponentProductRuleAlgebra(){
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
double exponentQuotientRuleAlgebra(){
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
double powerRuleForExponentsAlgebra(){
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
double powerOfProductAlgebra(){
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





