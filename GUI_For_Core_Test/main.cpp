#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow window;

    window.show();


    return a.exec();
}

// #include <QtGraphs>

// int main(int argc, char **argv)
// {
//     QApplication app(argc, argv);

//     Q3DBars bars;
//     bars.setMinimumSize(QSize(256, 256));
//     bars.rowAxis()->setRange(0, 4);
//     bars.columnAxis()->setRange(0, 4);
//     QBar3DSeries *series = new QBar3DSeries;
//     QBarDataRow data;
//     data << QBarDataItem(1.0f) << QBarDataItem(3.0f) << QBarDataItem(7.5f) << QBarDataItem(5.0f)
//          << QBarDataItem(2.2f);
//     series->dataProxy()->addRow(data);
//     bars.addSeries(series);
//     bars.setCameraZoomLevel(120);
//     bars.show();

//     return app.exec();
// }
