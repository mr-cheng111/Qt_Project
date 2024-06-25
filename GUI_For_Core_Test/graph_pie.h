#ifndef GRAPH_PIE_H
#define GRAPH_PIE_H

#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QtCharts/QChartView>
#include <QPieSeries>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMouseEvent>
#include <QDebug>

using namespace Qt;

class CChartView : public QChartView
{
    Q_OBJECT
public:
    CChartView(QChart *Chart) : QChartView(Chart)
    {
        connect(this->chart()->series().at(0),SIGNAL(hovered(QPieSlice*,bool)),this,SLOT(ShowPie(QPieSlice*,bool)));
        this->resize(640,320);
    }

private slots:
    void ShowPie(QPieSlice *Slice,bool value)
    {
        qDebug()<<"Pie Value is : " << value <<endl;
        if(value)
        {
            Slice->setLabelVisible(true);
            Slice->setExploded(true);
        }
        else
        {
            Slice->setLabelVisible(false);
            Slice->setExploded(false);
        }
        this->show();
    }
};

class graph_pie : public QWidget
{
public:
    //graph_pie(QMainWindow *P = nullptr);
    graph_pie();
    void add_pie(QList<QString> item_name,QList<int> item_data);
    void add_pie(QString Chart_Title,QList<QString> item_name,QList<int> item_data);
    ~graph_pie();
private:
    QMainWindow *Parent;
    QList<CChartView*> ChartView;
    QHBoxLayout *HBox = new QHBoxLayout;
    QVBoxLayout *VBox = new QVBoxLayout;
    QList<QColor> Color = { QColor(142,207,201),//Caryan
                            QColor(255,190,122),//Yellow
                            QColor(250,127,111),//Red
                            QColor(130,176,210),//Bule
                            QColor(190,184,220),//Purple
                            QColor(231,218,210),//White
                            QColor(183,183,183)};//Gray
};

#endif // GRAPH_PIE_H
