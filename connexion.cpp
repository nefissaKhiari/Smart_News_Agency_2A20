#include "connexion.h"

Connexion::Connexion()
{

}

bool Connexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Projet_2A20");
db.setUserName("seif");//inserer nom de l'utilisateur
db.setPassword("toor");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

    return  test;
}
