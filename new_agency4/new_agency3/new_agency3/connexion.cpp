#include "connexion.h"

Connexion::Connexion()
{

}

bool Connexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("gestion_emp");//nom de la bd
db.setUserName("abir");//inserer nom de l'utilisateur
db.setPassword("abir");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

    return  test;
}
