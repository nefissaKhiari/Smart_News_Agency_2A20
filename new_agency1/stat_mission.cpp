#include "stat_mission.h"
#include "ui_stat_mission.h"


stat_mission::stat_mission(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stat_mission)
{
    ui->setupUi(this);
}

stat_mission::~stat_mission()
{
    delete ui;
}

void stat_mission::choix_pie()
{

    vector<QString> liste_missions;
    vector<qreal> count;
    QSqlQuery q1,q2;
    qreal tot=0,c;
    q1.prepare("SELECT * FROM MISSION");
    q1.exec();
    while (q1.next()){
        liste_missions.push_back(q1.value(1).toString());
        tot++;
    }


    for (auto i = liste_missions.begin(); i != liste_missions.end(); ++i) {
         q2.prepare("SELECT * FROM EMPLOYE where MISSION = :m");
         q2.bindValue(":m", *i);
         q2.exec();
         c=0;
         while (q2.next()){c++;}
         count.push_back(c/tot);

    }


// Define slices and percentage of whole they take up
QPieSeries *series = new QPieSeries();
for( int i = 0; i < liste_missions.size(); i++)
series->append(liste_missions[i] ,count[i]);


// Create the chart widget
QChart *chart = new QChart();

// Add data to chart with title and show legend
chart->addSeries(series);
chart->legend()->show();


// Used to display the chart
chartView = new QChartView(chart,ui->label_stat);
chartView->setRenderHint(QPainter::Antialiasing);
chartView->setMinimumSize(400,400);

chartView->show();
}

