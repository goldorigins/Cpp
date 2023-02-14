// String1030.cpp
// Jacob Branson
// COSC 1030
// Program 11
// 8 Apr. 2022

#define _CRT_SECURE_NO_DEPRECATE
#include "String1030.hpp"
#include <cstring>
using std::strcpy;
#include "String1030.hpp"
#include <cstring>

String1030::String1030(const char* buf) {

    if (buf != 0) {

        mysize = strlen(buf);
        buffer = new char[mysize + 1];
        strncpy(buffer, buf, mysize);
        buffer[mysize] = '\0';
    }
    else {

        mysize = 0;
        buffer = 0;
    }
}

String1030::String1030(const String1030& oldstring) {

    mysize = oldstring.mysize;

    if (mysize > 0) {

        buffer = new char[mysize + 1];
        strncpy(buffer, oldstring.buffer, mysize);
        buffer[mysize] = '\0';
    }
    else {
        buffer = 0;
    }
}

String1030::~String1030() {

    if (buffer != 0) {

        delete[] buffer;
    }
}

String1030& String1030::operator=(const String1030& right) {

    if (this != &right) {

        if (buffer != 0)

            delete[] buffer;

        mysize = right.mysize;

        if (mysize > 0) {

            buffer = new char[mysize + 1];
            strncpy(buffer, right.buffer, mysize);
            buffer[mysize] = '\0';
        }
        else {

            buffer = 0;
        }
    }
    return *this;
}

char& String1030:: operator[](int index) {

    if (index >= 0 && index < mysize) {

        return buffer[index];
    }

    else {

        cerr << "Index out of range";
    }
}

int String1030::getSize(void) const {

    return mysize;
}

void String1030::setSize(int newsize) {

    if (newsize >= 0) {

        mysize = newsize;
        if (buffer != 0)
            delete[] buffer;
        buffer = new char[mysize + 1];
    }
}

const char* String1030::getString() {

    return buffer;
}

void String1030::setString(const char* chararray) {

    if (chararray != 0) {
        mysize = strlen(chararray);
        buffer = new char[mysize + 1];
        strncpy(buffer, chararray, mysize);
        buffer[mysize] = '\0';
    }

    else {
        mysize = 0;
        buffer = 0;
    }
}
