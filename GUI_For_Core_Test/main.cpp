#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include "mainwindow.h"

using namespace Qt;



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow window;

    // get_pic_dir *m = new get_pic_dir;

    window.show();

    //graph_for_input *M = new graph_for_input;

    //qDebug()<<"Start Test"<<endl;

    //M->show();


    return a.exec();
}
