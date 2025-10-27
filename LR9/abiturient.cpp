#include "abiturient.h"
#include <QMainWindow>

Abiturient::Abiturient(int id, QString surname, QString name, QString patronymic, QString address, QString phoneNumber, double avgGrade) : id(id),
    surname(surname), name(name), patronymic(patronymic),
    address(address), phoneNumber(phoneNumber), avgGrade(avgGrade) {};

QString Abiturient::toString() {
    return ("\nid: " + QString::number(id) + "\nsurname: " + surname + "\nname: "
            + name + "\npatronymic: " + patronymic + "\naddress: " + address
            + "\nphoneNumber: " + phoneNumber + "\navgGrade: " + QString::number(avgGrade));
}
