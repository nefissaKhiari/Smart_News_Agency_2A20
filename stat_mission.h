#ifndef STAT_MISSION_H
#define STAT_MISSION_H

#include <QDialog>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

#include <iostream>
#include <vector>
using namespace std;

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class stat_mission;
}

class stat_mission : public QDialog
{
    Q_OBJECT

public:
    explicit stat_mission(QWidget *parent = nullptr);
    ~stat_mission();

    QChartView *chartView ;
    void choix_pie();

private:
    Ui::stat_mission *ui;
};

#endif // STAT_MISSION_H
