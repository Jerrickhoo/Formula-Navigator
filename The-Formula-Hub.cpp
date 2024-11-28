#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

//! Calling formula section ---------------------------------------------------------------------------------------------------

void showAlgebraMenu();
void showGeometryMenu();
void showPhysicsMenu();
void displayExitMessage();


//todo 20 algebra formulas ---------------------------------------------------------------------------------------------------




//todo 50 geometry formulas (divided between 2D and 3D) ---------------------------------------------------------------------------------------------------




//todo 50 physics formulas ---------------------------------------------------------------------------------------------------









int main(){

    int choice;

    do {
        cout << "====================\n";
        cout << "Main Menu\n";
        cout << "1. Algebra\n";
        cout << "2. Geometry\n";
        cout << "3. Physics\n";
        cout << "4. Exit\n";
        cout << "====================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        system("cls");

        switch (choice) {
        case 1:
            showAlgebraMenu();
            break;
        case 2:
            showGeometryMenu();
            break;
        case 3:
            showPhysicsMenu();
            break;
        case 4:
            displayExitMessage();
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);











    return 0;
}





//! Defining formula section ---------------------------------------------------------------------------------------------------

void showAlgebraMenu() {
    int option;
    do {
        cout << "\n======== Algebra Menu ========\n";
        cout << "1. ********* \t 11. *********\n";
        cout << "2. ********* \t 12. *********\n";
        cout << "3. ********* \t 13. *********\n";
        cout << "4. ********* \t 14. *********\n";
        cout << "5. ********* \t 15. *********\n";
        cout << "6. ********* \t 16. *********\n";
        cout << "7. ********* \t 17. *********\n";
        cout << "8. ********* \t 18. *********\n";
        cout << "9. ********* \t 19. *********\n";
        cout << "10. ********* \t 20. *********\n";
        cout << "21. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> option;
        system("cls");


        if (option == 21) {
            return; // Return to the main menu
        }

        // Placeholder for actual functionality
        cout << "You selected option " << option << " in Algebra.\n";
    } while (option != 21);
}

//!---------------------------------------------------------------------------------------------------------------------------------------------------------

void showGeometryMenu() {
    int option;
    do {
        cout << "\n======== Geometry Menu ========\n";
        cout << "1. ********* \t 11. ********* \t 21. ********* \t 31. ********* \t 41. *********\n";
        cout << "2. ********* \t 12. ********* \t 22. ********* \t 32. ********* \t 42. *********\n";
        cout << "3. ********* \t 13. ********* \t 23. ********* \t 33. ********* \t 43. *********\n";
        cout << "4. ********* \t 14. ********* \t 24. ********* \t 34. ********* \t 44. *********\n";
        cout << "5. ********* \t 15. ********* \t 25. ********* \t 35. ********* \t 45. *********\n";
        cout << "6. ********* \t 16. ********* \t 26. ********* \t 36. ********* \t 46. *********\n";
        cout << "7. ********* \t 17. ********* \t 27. ********* \t 37. ********* \t 47. *********\n";
        cout << "8. ********* \t 18. ********* \t 28. ********* \t 38. ********* \t 48. *********\n";
        cout << "9. ********* \t 19. ********* \t 29. ********* \t 39. ********* \t 49. *********\n";
        cout << "10. ******** \t 20. ********* \t 30. ********* \t 40. ********* \t 50. *********\n";
        cout << "51. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> option;
        system("cls");

        if (option == 51) {
            return; // Return to the main menu
        }

        // Placeholder for actual functionality
        cout << "You selected option " << option << " in Geometry.\n";
    } while (option != 51);
}

//!---------------------------------------------------------------------------------------------------------------------------------------------------------

void showPhysicsMenu() {
    int option;
    do {
        cout << "\n======== Physics Menu ========\n";
        cout << "1. ********* \t 11. ********* \t 21. ********* \t 31. ********* \t 41. *********\n";
        cout << "2. ********* \t 12. ********* \t 22. ********* \t 32. ********* \t 42. *********\n";
        cout << "3. ********* \t 13. ********* \t 23. ********* \t 33. ********* \t 43. *********\n";
        cout << "4. ********* \t 14. ********* \t 24. ********* \t 34. ********* \t 44. *********\n";
        cout << "5. ********* \t 15. ********* \t 25. ********* \t 35. ********* \t 45. *********\n";
        cout << "6. ********* \t 16. ********* \t 26. ********* \t 36. ********* \t 46. *********\n";
        cout << "7. ********* \t 17. ********* \t 27. ********* \t 37. ********* \t 47. *********\n";
        cout << "8. ********* \t 18. ********* \t 28. ********* \t 38. ********* \t 48. *********\n";
        cout << "9. ********* \t 19. ********* \t 29. ********* \t 39. ********* \t 49. *********\n";
        cout << "10. ******** \t 20. ********* \t 30. ********* \t 40. ********* \t 50. *********\n";
        cout << "51. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> option;
        system("cls");

        if (option == 51) {
            return; // Return to the main menu
        }

        // Placeholder for actual functionality
        cout << "You selected option " << option << " in Physics.\n";
    } while (option != 51);
}

//!---------------------------------------------------------------------------------------------------------------------------------------------------------

void displayExitMessage() {
    cout << "\nThank you for using the program!\n";
}



//todo 20 algebra formulas ---------------------------------------------------------------------------------------------------




//todo 50 geometry formulas (divided between 2D and 3D) ---------------------------------------------------------------------------------------------------



//todo 50 physics formulas ---------------------------------------------------------------------------------------------------





