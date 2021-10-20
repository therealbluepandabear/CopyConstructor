//
// Created by TO on 10/20/2021.
//
class Integer {
    int *m_pInt;
public:
    Integer();
    Integer(int value);
    ~Integer();
    int GetValue() const;
    void SetValue(int value);
};
