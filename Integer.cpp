//
// Created by TO on 10/20/2021.
//

#include "Integer.h"

Integer::Integer() {
    m_pInt = new int(0);
}

Integer::Integer(int value) {
    m_pInt = new int(value);
}

Integer::~Integer() {
    delete m_pInt;
}

void Integer::SetValue(int value) {
    *m_pInt = value;
}

int Integer::GetValue() const {
    return *m_pInt;
}
