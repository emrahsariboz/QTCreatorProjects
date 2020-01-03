#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    model = new QStandardItemModel(this);

    //Capture the root item

    QStandardItem *rootItem = model->invisibleRootItem();
    QStandardItem *turkeyItem = new QStandardItem("Turkiye");
    QStandardItem *elazigItem = new QStandardItem("Elazig");
    QStandardItem *istanbul = new QStandardItem("Istanbul");


    QStandardItem *USA = new QStandardItem("USA");
    QStandardItem *Texas = new QStandardItem("Texas");
    QStandardItem *NewMexico = new QStandardItem("NewMexico");


    QStandardItem *huntsville = new QStandardItem("Huntsville");


    //Define the tree structure

    rootItem->appendRow(turkeyItem);
    turkeyItem->appendRow(elazigItem);
    turkeyItem->appendRow(istanbul);

    rootItem->appendRow(USA);
    USA->appendRow(NewMexico);
    USA->appendRow(Texas);

    Texas->appendRow(huntsville);

    ui->treeView->setModel(model);
    ui->treeView->expandAll();

    QItemSelectionModel *selectionModel;
    selectionModel= ui->treeView->selectionModel();

    connect(selectionModel, SIGNAL(selectionChanged(QItemSelection, QItemSelection)),this,SLOT(selectionChangedSlot(QItemSelection, QItemSelection)));



}

Widget::~Widget()
{
    delete ui;
}

void Widget::selectionChangedSlot(const QItemSelection &oldSelection, const QItemSelection &newSelection)
{
    qDebug()<<"Clicked on something in the tree";
    QModelIndex currentIndex = ui->treeView->selectionModel()->currentIndex();
    QString data = model->data(currentIndex, Qt::DisplayRole).toString();

    //Find the hierarchy of the selected item

    int hierarchy = 1;
    QModelIndex seekRoot = currentIndex;

    while(seekRoot != QModelIndex()){
        seekRoot = seekRoot.parent();
        hierarchy++;
    }

    QString dataToShow = QString("%1, level %2").arg(data).arg(QString::number(hierarchy));
    setWindowTitle(dataToShow);
}


