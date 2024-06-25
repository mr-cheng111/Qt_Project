#ifndef GRAPH_FOR_INPUT_H
#define GRAPH_FOR_INPUT_H

#include <QWidget>
#include <Q3DBars>
#include <QMouseEvent>

using namespace Qt;

class C3DBars : public Q3DBars
{
    void WheelEvent(QWheelEvent *event)
    {
        if(event->angleDelta().y() > 0)
        {
            qDebug()<<event->angleDelta().y()<<endl;
        }
    }
};

class graph_for_input : public QWidget
{
    Q_OBJECT
public:
    graph_for_input(QWidget *parent = nullptr)
    {
        if(parent != nullptr)
        {
            this->Parent = parent;
        }

        this->Bars->setMinimumSize(QSize(256, 256));
        this->Bars->rowAxis()->setRange(0, 4);
        this->Bars->columnAxis()->setRange(0, 4);
        QBar3DSeries *series = new QBar3DSeries;
        QBarDataRow data;
        data << QBarDataItem(1.0f) << QBarDataItem(3.0f) << QBarDataItem(7.5f) << QBarDataItem(5.0f) << QBarDataItem(2.2f);
        series->dataProxy()->addRow(data);
        this->Bars->addSeries(series);
        this->Bars->setCameraZoomLevel(120);
        this->Bars->show();
    }


private:
    QWidget *Parent;
    Q3DBars *Bars;
};

#endif // GRAPH_FOR_INPUT_H
