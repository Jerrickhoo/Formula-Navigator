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

//? 1. 


//? 2. 


//? 3. 


//? 4. 


//? 5. 


//? 6. 


//? 7. 


//? 8. 


//? 9. 


//? 10.


//? 11.


//? 12.


//? 13.


//? 14.


//? 15.


//? 16.


//? 17.


//? 18.


//? 19.


//? 20.


//? 21.


//? 22.


//? 23.


//? 24.


//? 25.


//todo 25 geometry_3D formulas ---------------------------------------------------------------------------------------------------

//? 1. Cube Surface Area
double cubeSurfaceArea();

//? 2. Cube Volume
double cubeVolume();

//? 3. Rectangular Prism Surface Area
double rectangularPrismSurfaceArea();

//? 4. Rectangular Prism Volume
double rectangularPrismVolume();

//? 5. Sphere Surface Area
double sphereSurfaceArea();

//? 6. Sphere Volume
double sphereVolume();

//? 7. Cylinder Surface Area
double cylinderSurfaceArea();

//? 8. Cylinder Volume
double cylinderVolume();

//? 9. Triangular Prism Surface Area
double triangularPrismSurfaceArea();

//? 10. Triangular Prism Volume
double triangularPrismVolume();

//? 11. Ellipsoid Volume
double ellipsoidVolume();

//? 12. Torus Volume
double torusVolume();

//? 13. Frustum Lateral Surface Area
double frustumLateralSurfaceArea();

//? 14. Frustum Volume
double frustumVolume();

//? 15. Cone Surface Area
double coneSurfaceArea();

//? 16. Cone Volume
double coneVolume();

//? 17. Oblique Cone Surface Area
double obliqueConeSurfaceArea();

//? 18. Frustum Surface Area
double frustumSurfaceArea();

//? 19. Torus Surface Area
double torusSurfaceArea();

//? 20. Hemisphere Surface Area
double hemisphereSurfaceArea();

//? 21. Hemisphere Volume
double hemisphereVolume();

//? 22. Tetrahedron Surface Area
double tetrahedronSurfaceArea();

//? 23. Tetrahedron Volume
double tetrahedronVolume();

//? 24. Square Pyramid Surface Area
double squarePyramidSurfaceArea();

//? 25. Hollow Cylinder Volume
double hollowCylinderVolume();


//todo 50 physics formulas ---------------------------------------------------------------------------------------------------

//* Marque -------------------------------------------------------------------------------------------------------------------------

//? 1. Average Speed: avg_speed = total_distance / total_time
double calculateAverageSpeed();

//? 2. Average Acceleration: avg_acceleration = (v_final - v_initial) / t
double calculateAverageAcceleration();

//? 3. Centripetal Force: F_c = m * v^2 / r 
double calculateCentripetalForce();

//? 4. Torque: τ = F * r 
double calculateTorque();

//? 5. Linear Expansion: ΔL = α * L_initial * ΔT 


//? 6. Total Energy: E_total = KE + PE 


//? 7. Magnetic Force: F = q * v * B 
double calculateMagneticForce();

//? 8. Magnetic Flux: Φ = B * A * cos(theta) 


//? 9. Induced EMF: EMF = -dΦ / dt 


//? 10. Period of a Wave: T = 1 / f 


//? 11. Intensity: I = P / A 


//? 12. Spring Potential Energy: PE_spring = 0.5 * k * x^2 


//? 13. Angular Momentum: L = I * ω 


//? 14. Impulse: J = F * Δt 


//? 15. Elastic Collision: v1_final = (m1 - m2) / (m1 + m2) * v1_initial + (2 * m2 / (m1 + m2)) * v2_initial 


//? 16. Inelastic Collision: v_final = (m1 * v1_initial + m2 * v2_initial) / (m1 + m2) 


//? 17. Mechanical Advantage: MA = output_force / input_force 


//? 18. Energy Efficiency: efficiency = (useful_energy / total_energy) * 100 


//? 19. Thermal Conductivity: Q/t = k * A * (T1 - T2) / d 


//? 20. Angular Velocity: ω = θ / t 


//? 21. Power in Rotational Motion: P = τ * ω 


//? 22. Elastic Potential Energy: E_elastic = 0.5 * k * x^2 


//? 23. Rotational Kinetic Energy: KE_rotational = 0.5 * I * ω^2 


//? 24. Gravitational Acceleration: g = GM / r^2 


//? 25. Work in Rotational Motion: W = τ * θ


//* Jesse -------------------------------------------------------------------------------------------------------------------------

//? 26.


//? 27.


//? 28.


//? 29.


//? 30.


//? 31.


//? 32.


//? 33.


//? 34.


//? 35.


//? 36.


//? 37.


//? 38.


//? 39.


//? 40.


//? 41.


//? 42.


//? 43.


//? 44.


//? 45.


//? 46.


//? 47.


//? 48.


//? 49.


//? 50.






//!-----------------------------------------------------------------------------------------------------------------------------------------

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
    double result = 0;
    do{
        cout << "\t============================================== Geometry Menu 3D ================================================\n";
        cout << "\t|  1. Cube Surface Area           |  9. Triangular Prism Surface Area       |  17. Oblique Cone Surface Area   |\n";
        cout << "\t|    Formula:                     |    Formula:                             |    Formula:                      |\n";
        cout << "\t|       6 * a^2                   |       a * b + a * h + b * h             |       π * r * (r + slantHeight)  |\n";
        cout << "\t|--------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t|  2. Cube Volume                 |  10. Triangular Prism Volume            |  18. Frustum Surface Area        |\n";
        cout << "\t|    Formula:                     |    Formula:                             |    Formula:                      |\n";
        cout << "\t|       a^3                       |       (1/2) * a * b * h                 |       π * (r1 + r2) *            |\n";
        cout << "\t|                                 |                                         |         sqrt((r1 - r2)^2 + h^2)  |\n";
        cout << "\t|--------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t|  3. Rectangular Prism Surface   |  11. Ellipsoid Volume                   |  19. Torus Surface Area          |\n";
        cout << "\t|      Area Formula:              |    Formula:                             |    Formula:                      |\n";
        cout << "\t|      2 * (a * b + b * c + c * a)|       (4/3) * π * a * b * c             |       4 * π^2 * R * r^2          |\n";
        cout << "\t|--------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t|  4. Rectangular Prism Volume    |  12. Torus Volume                       |  20. Hemisphere Surface Area     |\n";
        cout << "\t|    Formula:                     |    Formula:                             |    Formula:                      |\n";
        cout << "\t|       a * b * c                 |       2 * π^2 * R * r^2                 |       3 * π * r^2                |\n";
        cout << "\t|--------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t|  5. Sphere Surface Area         |  13. Frustum Lateral Surface Area       |  21. Hemisphere Volume           |\n";
        cout << "\t|    Formula:                     |    Formula:                             |    Formula:                      |\n";
        cout << "\t|       4 * π * r^2               |       π * (r1 + r2) *                   |       (2/3) * π * r^3            |\n";
        cout << "\t|                                 |         sqrt((r1 - r2)^2 + h^2)         |                                  |\n";
        cout << "\t|--------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t|  6. Sphere Volume               |  14. Frustum Volume                     |  22. Tetrahedron Surface Area    |\n";
        cout << "\t|    Formula:                     |    Formula:                             |    Formula:                      |\n";
        cout << "\t|       (4/3) * π * r^3           |       (1/3) * π * h *                   |       √3 * a^2                   |\n";
        cout << "\t|                                 |         (r1^2 + r1 * r2 + r2^2)         |                                  |\n";
        cout << "\t|--------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t|  7. Cylinder Surface Area       |  15. Cone Surface Area                  |  23. Tetrahedron Volume          |\n";
        cout << "\t|    Formula:                     |    Formula:                             |    Formula:                      |\n";
        cout << "\t|       2 * π * r * (r + h)       |       π * r * (√(h^2 + r^2) + r)        |       (a^3) / (6√2)              |\n";
        cout << "\t|--------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t|  8. Cylinder Volume             |  16. Cone Volume                        |  24. Square Pyramid Surface Area |\n";
        cout << "\t|    Formula:                     |    Formula:                             |    Formula:                      |\n";
        cout << "\t|       π * r^2 * h               |       (1/3) * π * r^2 * h               |       a^2 + 2 * a *              |\n";
        cout << "\t|                                 |                                         |         sqrt((a / 2)^2 + h^2)    |\n";
        cout << "\t|--------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t|                                 |  25. Hollow Cylinder Volume             |                                  |\n";
        cout << "\t|                                 |    Formula:                             |                                  |\n";
        cout << "\t|                                 |       π * h * (R^2 - r^2)               |                                  |\n";
        cout << "\t================================================================================================================\n";

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
            result = cubeSurfaceArea();
            cout << "============= You selected (Square of Sum) in Algebra =============\n\n";
            cout << "The square of the Sum is: " << result << "\n\n\n";
            system("pause");
            system("cls");
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
        else if (option == 0 && page == 1 || option == 0 && page == 2){
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

//? 1. Square of Sum: (a + b)^2 = a^2 + 2ab + b^2
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

//? 1. Cube Surface Area
double cubeSurfaceArea(){
    double a;

    cout << "============= You selected (Cube Surface Area) in Geometry 3D =============\n\n";
    cout << "Formula: 6 * a^2" << endl;

    a = getValidatedInputWithRange("Enter First Number (a): ", true);
    system("cls");
    return 6 * a * a;
}

//? 2. Cube Volume
double cubeVolume(){
    return a * a * a;
}

//? 3. Rectangular Prism Surface Area
double rectangularPrismSurfaceArea(){
    return 2 * (a * b + b * c + c * a);
}

//? 4. Rectangular Prism Volume
double rectangularPrismVolume(){
    return a * b * c;
}

//? 5. Sphere Surface Area
double sphereSurfaceArea(){
    return 4 * M_PI * r * r;
}

//? 6. Sphere Volume
double sphereVolume(){
    return (4.0 / 3.0) * M_PI * r * r * r;
}

//? 7. Cylinder Surface Area
double cylinderSurfaceArea(){
    return 2 * M_PI * r * (r + h);
}

//? 8. Cylinder Volume
double cylinderVolume(){
    return M_PI * r * r * h;
}

//? 9. Triangular Prism Surface Area
double triangularPrismSurfaceArea(){
    return a * b + a * h + b * h;
}

//? 10. Triangular Prism Volume
double triangularPrismVolume(){
    return (1.0 / 2.0) * a * b * h;
}

//? 11. Ellipsoid Volume
double ellipsoidVolume(){
    return (4.0 / 3.0) * M_PI * a * b * c;
}

//? 12. Torus Volume
double torusVolume(){
    return 2 * M_PI * M_PI * R * r * r;
}

//? 13. Frustum Lateral Surface Area
double frustumLateralSurfaceArea(){
    return M_PI * (r1 + r2) * sqrt((r1 - r2) * (r1 - r2) + h * h);
}

//? 14. Frustum Volume
double frustumVolume(){
    return (1.0 / 3.0) * M_PI * h * (r1 * r1 + r1 * r2 + r2 * r2);
}

//? 15. Cone Surface Area
double coneSurfaceArea(){
    return M_PI * r * (sqrt(h * h + r * r) + r);
}

//? 16. Cone Volume
double coneVolume(){
    return (1.0 / 3.0) * M_PI * r * r * h;
}

//? 17. Oblique Cone Surface Area
double obliqueConeSurfaceArea(){
    return M_PI * r * (r + slantHeight);
}

//? 18. Frustum Surface Area
double frustumSurfaceArea(){
    return M_PI * (r1 + r2) * sqrt((r1 - r2) * (r1 - r2) + h * h);
}

//? 19. Torus Surface Area
double torusSurfaceArea(){
    return 4 * M_PI * M_PI * R * r;
}

//? 20. Hemisphere Surface Area
double hemisphereSurfaceArea(){
    return 3 * M_PI * r * r;
}

//? 21. Hemisphere Volume
double hemisphereVolume(){
    return (2.0 / 3.0) * M_PI * r * r * r;
}

//? 22. Tetrahedron Surface Area
double tetrahedronSurfaceArea(){
    return sqrt(3) * a * a;
}

//? 23. Tetrahedron Volume
double tetrahedronVolume(){
    return (a * a * a) / (6 * sqrt(2));
}

//? 24. Square Pyramid Surface Area
double squarePyramidSurfaceArea(){
    return a * a + 2 * a * sqrt((a / 2.0) * (a / 2.0) + h * h);
}

//? 25. Hollow Cylinder Volume
double hollowCylinderVolume(){
    return M_PI * h * (R * R - r * r);
}



//todo 50 physics formulas ---------------------------------------------------------------------------------------------------

//* Marque ---------------------------------------------------------------------------------------------------

//? 1. Average Speed Calculation Function
double calculateAverageSpeed(){
    double total_distance, total_time;

    do {
        cout << "============= You selected (Average Speed Calculation) =============\n\n";
        cout << "Formula: avg_speed = total_distance / total_time\n";
        cout << "Where:\n";
        cout << "  avg_speed = Average Speed\n";
        cout << "  total_distance = Total Distance (in kilometers or miles)\n";
        cout << "  total_time = Total Time (in hours)\n\n";

        total_distance = getValidatedInputWithRange("Enter the total distance (in kilometers or miles): ", false);
        total_time = getValidatedInputWithRange("Enter the total time (in hours): ", false);

        if (total_time == 0) {
            cout << "\nError: Time cannot be zero. Division by zero is not allowed.\n";
            system("pause");
            system("cls");
        }
    } while (total_time == 0);

    system("cls");

    return total_distance / total_time;
}

//? 2. Average Acceleration Calculation Function
double calculateAverageAcceleration(){
    double v_final, v_initial, time;

    do {
        cout << "============= You selected (Average Acceleration Calculation) =============\n\n";
        cout << "Formula: avg_acceleration = (v_final - v_initial) / t\n";
        cout << "Where:\n";
        cout << "  avg_acceleration = Average Acceleration\n";
        cout << "  v_final = Final Velocity (in m/s)\n";
        cout << "  v_initial = Initial Velocity (in m/s)\n";
        cout << "  time = Time Interval (in seconds)\n\n";

        v_initial = getValidatedInputWithRange("Enter the initial velocity (v_initial) in m/s: ", false);
        v_final = getValidatedInputWithRange("Enter the final velocity (v_final) in m/s: ", false);
        time = getValidatedInputWithRange("Enter the time interval (t) in seconds: ", false);

        if (time == 0) {
            cout << "\nError: Time cannot be zero. Division by zero is not allowed.\n";
            system("pause");
            system("cls");
        }
    } while (time == 0);

    system("cls");

    return (v_final - v_initial) / time;
}

//? 3. Centripetal Force Calculation Function
double calculateCentripetalForce(){
    double m, v, r;

    do {
        cout << "============= You selected (Centripetal Force Calculation) =============\n\n";
        cout << "Formula: F_c = m * v^2 / r\n";
        cout << "Where:\n";
        cout << "  F_c = Centripetal Force\n";
        cout << "  m = Mass (in kilograms)\n";
        cout << "  v = Velocity (in m/s)\n";
        cout << "  r = Radius (in meters)\n\n";

        m = getValidatedInputWithRange("Enter the mass (m) in kilograms: ", false);
        v = getValidatedInputWithRange("Enter the velocity (v) in m/s: ", false);
        r = getValidatedInputWithRange("Enter the radius (r) in meters: ", false);

        if (r == 0) {
            cout << "\nError: Radius cannot be zero. Division by zero is not allowed.\n";
            system("pause");
            system("cls");
        }
    } while (r == 0);

    system("cls");

    return (m * v * v) / r;
}

//? 4. Torque Calculation Function
double calculateTorque(){
    double F, r;

    F = getValidatedInputWithRange("Enter the force (F) in newtons: ", false);
    r = getValidatedInputWithRange("Enter the lever arm distance (r) in meters: ", false);

    system("cls");

    return F * r;
}

//? 5. Gravitational Acceleration Calculation Function
double calculateGravitationalAcceleration(){
    double G, M, r;

    do {
        cout << "============= You selected (Gravitational Acceleration Calculation) =============\n\n";
        cout << "Formula: g = GM / r^2\n";
        cout << "Where:\n";
        cout << "  g = Gravitational Acceleration (in m/s^2)\n";
        cout << "  G = Gravitational constant (6.67430 × 10^-11 m^3 kg^-1 s^-2)\n";
        cout << "  M = Mass of the central body (in kilograms)\n";
        cout << "  r = Distance from the center of the mass (in meters)\n\n";

        G = getValidatedInputWithRange("Enter the gravitational constant (G) in m^3 kg^-1 s^-2: ", false);
        M = getValidatedInputWithRange("Enter the mass (M) of the central body in kilograms: ", false);
        r = getValidatedInputWithRange("Enter the distance (r) from the center of the mass in meters: ", false);

        if (r == 0) {
            cout << "\nError: Distance cannot be zero. Division by zero is not allowed.\n";
            system("pause");
            system("cls");
        }
    } while (r == 0);

    system("cls");

    return (G * M) / (r * r);
}

//? 6. Total Mechanical Energy Calculation Function
double calculateTotalEnergy(){
    double KE, PE;

    KE = getValidatedInputWithRange("Enter the kinetic energy (KE) in joules: ", false);
    PE = getValidatedInputWithRange("Enter the potential energy (PE) in joules: ", false);

    system("cls");

    return KE + PE;
}

//? 7. Magnetic Force Calculation Function
double calculateMagneticForce(){
    double q, v, B;

    q = getValidatedInputWithRange("Enter the electric charge (q) in coulombs: ", true);
    v = getValidatedInputWithRange("Enter the velocity (v) in m/s: ", false);
    B = getValidatedInputWithRange("Enter the magnetic field strength (B) in teslas: ", false);

    system("cls");

    return q * v * B;
}

//? 8. Inelastic Collision Calculation Function
double calculateInelasticCollision(){
    double m1, m2, v1_initial, v2_initial, v_final;

    do {
        cout << "============= You selected (Inelastic Collision Calculation) =============\n\n";
        cout << "Formula: v_final = (m1 * v1_initial + m2 * v2_initial) / (m1 + m2)\n";
        cout << "Where:\n";
        cout << "  v_final = Final velocity after inelastic collision\n";
        cout << "  m1 = Mass of the first object\n";
        cout << "  m2 = Mass of the second object\n";
        cout << "  v1_initial = Initial velocity of the first object\n";
        cout << "  v2_initial = Initial velocity of the second object\n\n";

        m1 = getValidatedInputWithRange("Enter the mass of the first object (m1) in kg: ", false);
        m2 = getValidatedInputWithRange("Enter the mass of the second object (m2) in kg: ", false);
        v1_initial = getValidatedInputWithRange("Enter the initial velocity of the first object (v1_initial) in m/s: ", false);
        v2_initial = getValidatedInputWithRange("Enter the initial velocity of the second object (v2_initial) in m/s: ", false);

        if (m1 == 0 || m2 == 0) {
            cout << "\nError: Mass of objects cannot be zero. Please enter positive values.\n";
            system("pause");
            system("cls");
        }
    } while (m1 == 0 || m2 == 0);

    v_final = (m1 * v1_initial + m2 * v2_initial) / (m1 + m2);

    return v_final;
}

//? 9. Thermal Conductivity Calculation Function
double calculateThermalConductivity(){
    double Q, t, k, A, T1, T2, d;

    Q = getValidatedInputWithRange("Enter the rate of heat transfer (Q/t) in W: ", false);
    k = getValidatedInputWithRange("Enter the thermal conductivity (k) in W/m·K: ", false);
    A = getValidatedInputWithRange("Enter the cross-sectional area (A) in square meters: ", false);
    T1 = getValidatedInputWithRange("Enter the initial temperature (T1) in Celsius: ", false);
    T2 = getValidatedInputWithRange("Enter the final temperature (T2) in Celsius: ", false);
    d = getValidatedInputWithRange("Enter the thickness (d) of the material in meters: ", false);

    system("cls");

    return (k * A * (T1 - T2)) / d;
}

//? 10. Period of a Wave Calculation Function
double calculateWavePeriod(){
    double f, T;

    do {
        cout << "============= You selected (Period of a Wave Calculation) =============\n\n";
        cout << "Formula: T = 1 / f\n";
        cout << "Where:\n";
        cout << "  T = Period of the wave\n";
        cout << "  f = Frequency of the wave\n\n";

        f = getValidatedInputWithRange("Enter the frequency (f) in Hz: ");

        if (f == 0) {
            cout << "\nError: Frequency cannot be zero. Division by zero is not allowed.\n";
            system("pause");
            system("cls");
        }
    } while (f == 0);

    system("cls");

    T = 1 / f;

    return T;
}








//* Jesse ---------------------------------------------------------------------------------------------------





