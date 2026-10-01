/////////////////////////////////////////////////////////////////////
// Name: Ashley Villela
// Date: 9/30/36
// Class: CSCI 1470.0X
// Semester: Fall 2026
// CSCI 1470 Instructor: Dr. Jonatan Reyes
// Program Description: Public Library System Simulator
/////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>



using namespace std;

int generateUserID();
int borrowBook(int& counter);
void log(int userid, int count);
void report();

//Global variable to track total number of books borrowed
int globalCount = 0;

int main()
{
    
    int uid, bookCount;
    
    // Simulating book checkouts for a user
    bookCount = 0;
    uid = generateUserID(); 
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);
    
    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID(); 
    borrowBook(bookCount);
    log(uid, bookCount);
    
    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID(); 
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);
    
    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID(); 
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount); 
    
    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID(); 
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);
    
    // Reporting end-of-day transactions
    report();

    return 0;
}

//Generate unique ids
int generateUserID()
{
    static int id = 1001;
    return id++;
}

//process book checkout
int borrowBook(int& counter)
{
    globalCount++;
    return counter++;
}

//record library transactions in a file
void log(int userid, int count)
{
    ofstream ofile("transactions.txt", ios::app);
    ofile << endl << "User ID" << setw(40) << setfill('.') << userid << endl;
    ofile << "Books Borrowed " << setw(32) << setfill('.') << count << endl;
}

//generate an end-of-day summary
void report()
{   
    ofstream ofile("transactions.txt", ios::app);
    cout << "A total of " <<  globalCount << " items were checked out today." << endl;
    ofile << endl << endl;
    ofile << "A total of " <<  globalCount << " items were checked out today." << endl;
}