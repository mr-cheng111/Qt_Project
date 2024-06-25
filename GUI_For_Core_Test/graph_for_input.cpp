#include "graph_for_input.h"

graph_for_input::graph_for_input(QWidget *parent)
{
    if(parent != nullptr)
    {
        this->Parent = parent;
    }

    this->Bars->setMinimumSize(QSize(340, 240));

    this->Bars->rowAxis()->setRange(0, 4);

    this->Bars->columnAxis()->setRange(0, 4);

    QBar3DSeries *series = new QBar3DSeries;

    QBarDataRow data;

    data << QBarDataItem(1.0f) << QBarDataItem(3.0f) << QBarDataItem(7.5f) << QBarDataItem(5.0f) << QBarDataItem(2.2f);

    series->dataProxy()->addRow(data);

    QBarDataRow data2;

    data2 << QBarDataItem(1.0f) << QBarDataItem(3.0f) << QBarDataItem(7.5f) << QBarDataItem(5.0f) << QBarDataItem(2.2f);
    series->dataProxy()->addRow(data2);

    QBarDataRow data3;

    data3 << QBarDataItem(1.0f) << QBarDataItem(3.0f) << QBarDataItem(7.5f) << QBarDataItem(5.0f) << QBarDataItem(2.2f);
    series->dataProxy()->addRow(data3);

    QList<QColor> Rows_Color;

    Rows_Color << QColor(142,207,201);//Caryan
    Rows_Color << QColor(255,190,122),//Yellow
    Rows_Color << QColor(250,127,111),//Red

    series->setRowColors(Rows_Color);

    //设置Z轴坐标
    QValue3DAxis *value = new QValue3DAxis;

    value->setMax(100.0f);

    value->setTitle("Resources Usage");//设置标题

    value->setTitleVisible(true);//记得默认是false

    value->setSegmentCount(4);//z轴分为4大段

    value->setSubSegmentCount(2);//每大段分为2个空间间隙

    value->setLabelFormat(QString(QStringLiteral("%.2f ") + "%"));

    value->setLabelAutoRotation(30.0f);//设置标签的角度

    this->Bars->setValueAxis(value);

    //设置X,Y的坐标
    QCategory3DAxis *axisX=new QCategory3DAxis;
    QStringList listX;
    listX<<"AAA"<<"BBB"<<"CCC";
    axisX->setLabels(listX);
    axisX->setLabelAutoRotation(30.0f);
    this->Bars->setRowAxis(axisX);

    QCategory3DAxis *axisY=new QCategory3DAxis;
    QStringList listY;
    listY<<"UUU"<<"VVV"<<"WWW"<<"XXX"<<"YYY";
    axisY->setLabels(listY);
    axisY->setLabelAutoRotation(30.0f);
    this->Bars->setColumnAxis(axisY);

    this->Bars->addSeries(series);

    this->HBox->addWidget(this->Bars);

    this->setLayout(this->HBox);
}
