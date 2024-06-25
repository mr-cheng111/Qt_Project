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

    this->Bars->addSeries(series);

    this->HBox->addWidget(this->Bars);

    this->setLayout(this->HBox);

    //this->show();
}
