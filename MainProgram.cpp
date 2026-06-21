// =====================================================================
//  CMP1001 - Introduction to Programming (C++)
//  HOMEWORK MINI-PROJECT: Student Records Analyzer
// =====================================================================
//  Weight   : 10% of course grade
//  Duration : ~4 days
//
//  SCENARIO
//  --------
//  You are building a small command-line tool for a teacher. It reads a
//  file of student records, computes class statistics, ranks students,
//  and writes a formatted report to a second file.
//
//  RULES
//  -----
//   * Write ALL your code in THIS single file (MainProgram.cpp).
//   * Do NOT add header files of your own, do NOT split into more files.
//   * Do NOT rename the functions or change their signatures below.
//     The autograder links against them by name and type.
//   * You MAY add helper functions if you wish (in this file only).
//   * Read the accompanying PDF (HOMEWORK.pdf) for the full spec,
//     exact output format, and grading breakdown.
//
//  Allowed headers are already included. Implement each function where
//  you see "// TODO". Replace the placeholder 'return' lines.
// =====================================================================

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX_RECORDS = 100;

// EX1 - Split "Last,First" into 'last' and 'first' (out-parameters by ref).
//       Return true if a comma was found, false otherwise (then last=full).
bool splitName(const string& full, string& last, string& first) {
    // TODO: implement
    
    for(int i=0;i<full.length();i++){
        if(full[i]==',')
        i=',';
        break;
    return true; 
    
    if(full[i]!= ','){
    last = full;
    first = " ";
    
    return false; }
    last=full.substr(0,i);
    first=full.substr(i+1);
} }
// EX2 - Read 'filename' line by line. Each valid line is "Name Grade",
//       where Name may contain a comma (e.g. "Yilmaz,Ada 87").
//       Fill names[] and grades[], skip empty/malformed lines.
//       Return the number of records loaded (0 if file cannot open).
int loadRecords(const string& filename, string names[], int grades[]) {
    // TODO: implement
    ifstream in (filename);
    if(!in.is_open()) return -1;
    while(getline(file,line))
    if(line.empty());
    continue;
  return count;
}

// EX3 - Compute average, minimum, and maximum of grades[0..n-1].
//       Write results through the pointer parameters. n<=0 -> all zero.
void computeStats(const int grades[], int n, double* avg, int* lo, int* hi) {
    // TODO: implement
    int sum = arr[0];
    *lo=arr[0];
    *hi=arr[0];
    for(int i=0;i<=n;i++){
    sum+=arr[i];
    *avg=sum/n;
    if(arr[i]<*lo)
    *lo=arr[i]
     if(arr[i]]>*hi)
    *hi=arr[i]}
    if(n<=0){
    *avg = 0.0;
    *lo = 0;
    *hi = 0;}
    return;
}

// EX4 - Count how many grades are >= threshold.
int countPassing(const int grades[], int n, int threshold) {
    // TODO: implement
    int count = 0 ;
    for(int i=0;i<=n;i++){
        if(grades[i]>=threshold)
        count++;
    }
    return count;
}

// EX5 - Map a numeric grade to a letter: 90+ A, 80+ B, 70+ C, 60+ D, else F.
char letterGrade(int g) {
    // TODO: implement
    if (g<=100 && g>90) {
        cout<<"A"<<endl;
         if (g<90 && g>=80) 
        cout<<"B"<<endl; 
        if (g<80 && g>=70) 
        cout<<"C"<<endl;
        if (g<70 && g>60) 
        cout<<"D"<<endl;}
        else{
             cout<<"F"<<endl;
        }
    return 0 ;
}

// EX6 - Sort BOTH arrays together so the highest grade is first.
//       (names[] must stay paired with its grade.)
void sortByGradeDesc(string names[], int grades[], int n) {
    for(int i=0;i<n;i++)
    int max = i
    for(int j=i;j<n;j++)
    // TODO: implement
}

// EX7 - Linear search for an exact name match. Return index or -1.
int findStudent(const string names[], int n, const string& target) {
    // TODO: implement
    for(int i=0;i<n;i++){
        if (names[i]==target)
        return i;
    }
    
    return -1;
}

// CHALLENGE - Write a formatted report to 'filename'. See the PDF for the
//             EXACT format. Assume arrays are already sorted desc by grade.
//             Return true on success, false if the file cannot be opened.
bool writeReport(const string& filename, string names[], int grades[], int n) {
    // TODO: implement
    return false;
}

// =====================================================================
//  main(): wire your functions together here for your own testing.
//  This is NOT graded directly, but it must compile.
// =====================================================================
#ifndef TESTING
int main() {
    // TODO (optional): load records.txt, print stats, write report.txt
    return 0;
}
#endif
