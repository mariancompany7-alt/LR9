#ifndef ABITURIENT_H
#define ABITURIENT_H
#include <QMainWindow>

class Abiturient {
    int id;
    QString surname;
    QString name;
    QString patronymic;
    QString address;
    QString phoneNumber;
    double avgGrade;
public:
    Abiturient() {
      id = 0;
      surname = "";
      name = "";
      patronymic = "";
      address = "";
      phoneNumber = "";
      avgGrade = 0.0;

    };
    Abiturient(int id, QString surname, QString name, QString patronymic, QString address, QString phoneNumber, double avgGrade);
    QString toString();
};

#endif // ABITURIENT_H
