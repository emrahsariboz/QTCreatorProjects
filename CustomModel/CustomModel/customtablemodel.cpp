#include "customtablemodel.h"

CustomTableModel::CustomTableModel(QObject *parent) : QAbstractTableModel()
{

}

int CustomTableModel::rowCount(const QModelIndex &parent) const
{
    return 2;
}

int CustomTableModel::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant CustomTableModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole){
        QString value = QString("Row %1, Col %2")
                .arg(index.row() + 1)
                .arg(index.column()+1);

        return value;
    }
    return QVariant();
}

