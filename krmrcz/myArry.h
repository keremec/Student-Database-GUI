#pragma once

#include <iostream>
#include <string>

using namespace std;

int livar = 0;
int lsvar = 0;
int callsign_lin = 0;
int callsign_ls = 0;

struct student {
    long id;    // student id,
    string name;  // student name, surname
    string address;
    double gpa; // gpa of the student
};

public class myArr {
private:
    int capacity;
    int size;
    student* arr;

    // useful functions
    void reallocate() {
        student* temparr = new student[capacity];
        for (int i = 0; i <= size - 1; i++) {
            temparr[i] = arr[i];
        }
        delete[]arr;
        arr = temparr;
    }

    /*int findit(int number, int start = 0) {
        for (; start <= size - 1; start++) {
            if (arr[start] == number) {
                return start;
            }
        }
        return -1;
    }*/

    void deleteitem(int index) {
        for (int i = index; i <= size - 2; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

public:
    // get functions

    long getid(int i) {
        return arr[i].id;
    }

    string getname(int i) {
        return arr[i].name;
    }

    string getaddress(int i) {
        return arr[i].address;
    }

    double getgpa(int i) {
        return arr[i].gpa;
    }

    //constructors
    myArr() {
        capacity = 5;
        size = 0;
        arr = new student[capacity];
    }

    explicit myArr(int cap) {
        capacity = cap;
        size = 0;
        arr = new student[capacity];
    }

    myArr(const myArr& x) {
        capacity = x.capacity;
        arr = new student[capacity];
        size = x.size;
        for (int i = 0; i < size; i++) {
            arr[i] = x.arr[i];
        }
    }

    ~myArr() {
        delete[]arr;
    }

    // in array operations

    void addItem(student a) {
        if (size + 1 > capacity) {
            capacity *= 2;
            reallocate();
        }
        arr[size] = a;
        size++;
    }

    student& operator[](int i) {
        if (i < 0) {
            return arr[size - 1];
        }
        if (i < size) {
            return arr[i];
        }
        else
            return arr[0];
    }

    void removeIndexItem(int a) {
        if (a <= size - 1 && a >= 0) {
            deleteitem(a);
        }
        else {
            return;
        }
    }

    int sizeofarr() const {
        return size;
    }

    int capacityofarr() const {
        return capacity;
    }

    void cleararr() {
        delete[]arr;
        student* temparr = new student[5];
        arr = temparr;
        capacity = 5;
        size = 0;
    }

    void printItems(bool details = false) {
        for (int i = 0; i < size; i++) {
            cout << arr[i].address << arr[i].name << arr[i].gpa << arr[i].id << " ";
        }
        cout << endl;
        if (details) {
            cout << "capacity=" << capacity << " size=" << size << endl;
        }
    }

    int linfind_name(string s_name) {
        
        if (livar > size - 1 || callsign_lin != 1 ) {
            livar = 0;
        }     
        for (; livar < size; livar++) {
            
            if (arr[livar].name == s_name) {
                callsign_lin = 1;
                livar++;
                return livar - 1;
            }     
            
        }
        callsign_lin = 1;
        livar++;
        return -1;
    }

    int linfind_address(string s_name) {

        if (livar > size - 1 || callsign_lin != 2) {
            livar = 0;
        }
        for (; livar < size; livar++) {

            if (arr[livar].address == s_name) {
                callsign_lin = 2;
                livar++;
                return livar - 1;
            }

        }
        callsign_lin = 2;
        livar++;
        return -1;
    }

    int linfind_gpa(string s_name) {

        double s_num = stod(s_name);

        if (livar > size - 1 || callsign_lin != 3) {
            livar = 0;
        }
        for (; livar < size; livar++) {

            if (arr[livar].gpa == s_num) {
                callsign_lin = 3;
                livar++;
                return livar - 1;
            }

        }
        callsign_lin = 3;
        livar++;
        return -1;
    }

    int linfind_id(string s_name) {

        long s_num = stol(s_name);

        if (livar > size - 1 || callsign_lin != 4) {
            livar = 0;
        }
        for (; livar < size; livar++) {

            if (arr[livar].id == s_num) {
                callsign_lin = 4;
                livar++;
                return livar - 1;
            }

        }
        callsign_lin = 4;
        livar++;
        return -1;
    }

    // Sort Algorithms

    int strcmp_noup(string a, string b) {
        for (auto& c : a)
        {
            c = tolower(c);
        }
        for (auto& c : b)
        {
            c = tolower(c);
        }
        return a.compare(b);
    }

    void insertionSort_Name()
    {
        int i, j;
        int n = size;
        student key;

        for (i = 1; i < n; i++)
        {
            key = arr[i];
            j = i - 1;

            while (j >= 0 && strcmp_noup(arr[j].name, key.name) > 0)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }

    void insertionSort_Address()
    {
        int i, j;
        int n = size;
        student key;

        for (i = 1; i < n; i++)
        {
            key = arr[i];
            j = i - 1;

            while (j >= 0 && strcmp_noup(arr[j].address, key.address) > 0)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }

    void insertionSort_Gpa()
    {
        int i, j;
        int n = size;
        student key;

        for (i = 1; i < n; i++)
        {
            key = arr[i];
            j = i - 1;

            while (j >= 0 && arr[j].gpa > key.gpa)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }

    void insertionSort_Id()
    {
        int i, j;
        int n = size;
        student key;

        for (i = 1; i < n; i++)
        {
            key = arr[i];
            j = i - 1;

            while (j >= 0 && arr[j].id > key.id)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }

    int binarySearch_name(int l, int r, string x){
        if (r >= l) {
            int mid = l + (r - l) / 2;

            if (arr[mid].name == x)
                return mid;

            if (arr[mid].name > x)
                return binarySearch_name(l, mid - 1, x);

            return binarySearch_name(mid + 1, r, x);
        }

        return -1;
    }

    int binarySearch_address(int l, int r, string x){
        if (r >= l) {
            int mid = l + (r - l) / 2;

            if (arr[mid].address == x)
                return mid;

            if (arr[mid].address > x)
                return binarySearch_address(l, mid - 1, x);

            return binarySearch_address(mid + 1, r, x);
        }

        return -1;
    }

    int binarySearch_gpa(int l, int r, double x){
        if (r >= l) {
            int mid = l + (r - l) / 2;

            if (arr[mid].gpa == x)
                return mid;

            if (arr[mid].gpa > x)
                return binarySearch_gpa(l, mid - 1, x);

            return binarySearch_gpa(mid + 1, r, x);
        }

        return -1;
    }

    int binarySearch_id(int l, int r, long x) {
        if (r >= l) {
            int mid = l + (r - l) / 2;

            if (arr[mid].id == x)
                return mid;

            if (arr[mid].id > x)
                return binarySearch_id(l, mid - 1, x);

            return binarySearch_id(mid + 1, r, x);
        }

        return -1;
    }

    int element4_search(string x, bool s) {
        
        int* n = new int[size];
        int* a = new int[size];
        myArr nf;
        myArr af;

        student tempstd;
        int tmpint;

    // Creating and filling first tables

        //First Address Table
        tempstd.name = "N/A";
        tempstd.address = arr[0].address;
        tempstd.id = 0;
        tempstd.gpa = 0;
        af.addItem(tempstd);
        for (int i = 1; i < size; i++) {
            callsign_lin = 0;
            tmpint = af.linfind_address(arr[i].address);
            if (tmpint == -1) {
                tempstd.address = arr[i].address;
                tempstd.id = i;
                af.addItem(tempstd);
            }
            
        }

        //First Name Table
        tempstd.name = arr[0].name;
        tempstd.address = "N/A";
        tempstd.id = 0;
        tempstd.gpa = 0;
        nf.addItem(tempstd);
        for (int i = 1; i < size; i++) {
            callsign_lin = 0;
            tmpint = nf.linfind_name(arr[i].name);
            if (tmpint == -1) {
                tempstd.name = arr[i].name;
                tempstd.id = i;
                nf.addItem(tempstd);
            }

        }

        //Filling Address Table 
        int old = size + 1;
        int now = 0;
        for (int i = 0; i < size; i++) {
            old = af[i].id;
            livar = af[i].id + 1;
            callsign_lin = 2;
            now = this->linfind_address(af[i].address);
            while (now > old) {
                a[old] = now;
                old = now;
                now = this->linfind_address(af[i].address);

            }        
            a[old] = -1;

        } 


        //Filling Name Table 
        old = size + 1;
        now = 0;
        for (int i = 0; i < size; i++) {
            old = nf[i].id;
            livar = nf[i].id + 1;
            callsign_lin = 1;
            now = this->linfind_name(nf[i].name);
            while (now > old) {
                n[old] = now;
                old = now;
                now = this->linfind_name(nf[i].name);

            }
            n[old] = -1;

        }


        // Searching

        if (s) {
            if (lsvar > size - 1 || callsign_ls != 8 || lsvar == -1 ) {
                old = af.linfind_address(x);
                if (old == -1) {
                    now = -1;
                }
                else { now = af[old].id; } 
                lsvar = now;
                callsign_ls = 8;
                return now;
            }

            now = a[lsvar];
            lsvar = now;
            callsign_ls = 8;
            return now;

        }

        else {

            if (lsvar > size - 1 || callsign_ls != 9 || lsvar == -1) {
                old = nf.linfind_name(x);
                if (old == -1) {
                    now = -1;
                }
                else{ now = nf[old].id; }
                lsvar = now;
                callsign_ls = 9;
                return now;

            }

            now = n[lsvar];
            lsvar = now;
            callsign_ls = 9;
            return now;

        }




        return -1;


    }


};

myArr star;

