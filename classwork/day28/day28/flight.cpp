#include <iostream>
#include <string>
using namespace std;

class Flight {
private:
    string flightNumber;
    int totalSeats;
    int bookedSeats;

public:
    // Constructor to initialize the flight
    Flight(string number, int seats) {
        flightNumber = number;
        totalSeats = seats;
        bookedSeats = 0;
    }

    // Method to book seats
    void bookSeats(int count) {
        if (count <= 0) {
            cout << "Invalid seat count entered." << endl;
            return;
        }

        if (bookedSeats + count <= totalSeats) {
            bookedSeats += count;
            cout << "Booking successful. " << count << " seat(s) booked." << endl;
        } else {
            cout << "Booking Failed: Not enough seats." << endl;
        }
    }

    // Method to show current availability
    void showAvailability() {
        int availableSeats = totalSeats - bookedSeats;
        cout << "Flight: " << flightNumber 
             << " | Seats Available: " << availableSeats << endl;
    }
};

// ----------------------
// Driver Code
// ----------------------
int main() {
    // Test Case 1
    Flight f1("AI203", 100);
    f1.bookSeats(30);     // Should succeed
    f1.showAvailability(); // Should show 70 seats available

    cout << endl;

    // Test Case 2
    f1.bookSeats(80);     // Should fail
    f1.showAvailability(); // Should still show 70 seats available

    return 0;
}
