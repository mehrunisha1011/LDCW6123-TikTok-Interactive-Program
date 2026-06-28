/*
 * Project: TikTok Shop Product Recommendation Assistant
 * Course: LDCW6123 - Fundamentals of Digital Competence for Programmer
 * Part 2: Interactive Program (connects to Part 1 - TikTok Disruptive Innovation Poster)
 *
 * Description:
 * This program recommends a product category and a TikTok Shop feature
 * based on the user's shopping preference and budget range.
 */
 
#include <iostream>
#include <string>
using namespace std;
// Variables and functions declared below handle the TikTok Shop recommendation logic
 
// Function to display recommendation based on category and budget
void giveRecommendation(int category, int budget) {
 
    string productType;
    string tiktokTip;
 
    // Determine product type based on category (switch statement)
    switch (category) {
        case 1:
            productType = "Fashion Items (clothing, shoes, accessories)";
            break;
        case 2:
            productType = "Beauty Products (skincare, makeup)";
            break;
        case 3:
            productType = "Electronics (gadgets, accessories)";
            break;
        case 4:
            productType = "Food & Beverages (snacks, drinks)";
            break;
        default:
            productType = "General Products";
            break;
    }
 
    // Determine recommendation tip based on budget (if/else statement)
    if (budget == 1) {
        tiktokTip = "Check out TikTok Shop's 'Flash Sale' section for the best low-budget deals.";
    } else if (budget == 2) {
        tiktokTip = "Browse TikTok Shop's 'Live Shopping' sessions for mid-range bundle offers.";
    } else if (budget == 3) {
        tiktokTip = "Look for verified TikTok Shop sellers with premium product reviews.";
    } else {
        tiktokTip = "Explore the general TikTok Shop catalogue for more options.";
    }
 
    // Output the recommendation
    cout << "\n----------------------------------------------" << endl;
    cout << "RECOMMENDATION RESULT" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Recommended Product Type : " << productType << endl;
    cout << "TikTok Shop Tip           : " << tiktokTip << endl;
    cout << "----------------------------------------------" << endl;
}
 
int main() {
 
    int categoryChoice = 0;
    int budgetChoice = 0;
    char tryAgain = 'y';
 
    cout << "================================================" << endl;
    cout << " TIKTOK SHOP PRODUCT RECOMMENDATION ASSISTANT" << endl;
    cout << "================================================" << endl;
    cout << "(Connected to Part 1: TikTok Disruptive Innovation)\n" << endl;
 
    // Loop to allow multiple tests (User Experience & Testing marks)
    while (tryAgain == 'y' || tryAgain == 'Y') {
 
        // Input validation for category
        do {
            cout << "Select your shopping category:\n";
            cout << "1. Fashion\n";
            cout << "2. Beauty\n";
            cout << "3. Electronics\n";
            cout << "4. Food & Beverages\n";
            cout << "Enter choice (1-4): ";
            cin >> categoryChoice;
 
            if (categoryChoice < 1 || categoryChoice > 4) {
            cout << "Invalid input! '" << categoryChoice << "' is not a valid option. Please enter a number between 1 and 4.\n\n";
            }
         
        } while (categoryChoice < 1 || categoryChoice > 4);
 
        // Input validation for budget
        do {
            cout << "\nSelect your budget range:\n";
            cout << "1. Low (RM0 - RM30)\n";
            cout << "2. Medium (RM31 - RM100)\n";
            cout << "3. High (RM100 and above)\n";
            cout << "Enter choice (1-3): ";
            cin >> budgetChoice;
 
            if (budgetChoice < 1 || budgetChoice > 3) {
                cout << "Invalid input! Please enter a number between 1 and 3.\n\n";
            }
        } while (budgetChoice < 1 || budgetChoice > 3);
 
        // Confirm user's selections before showing result
        cout << "\nYou selected category " << categoryChoice << " and budget range " << budgetChoice << "." << endl;

        // Call the recommendation function
        giveRecommendation(categoryChoice, budgetChoice);
 
        // Ask if user wants to try again (testing multiple cases)
        cout << "\nWould you like to try another recommendation? (y/n): ";
        cin >> tryAgain;
        cout << endl;
    }
 
    cout << "Thank you for using TikTok Shop Recommendation Assistant!" << endl;
    cout << "Have a great day shopping on TikTok Shop!" << endl;
 
    return 0;
}
 
