#include "customtablemodel.h"
#include <QFont>
#include <QBrush>
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
    /*
    if(role == Qt::DisplayRole){
        QString value = QString("Row %1, Col %2")
                .arg(index.row() + 1)
                .arg(index.column()+1);

        return value;
    }
    */
    int row = index.row();
    int col = index.column();

    switch (role) {
        case Qt::DisplayRole:
            if(row == 0 && col == 1) return QString("<-- left");
            if(row == 1 && col == 1) return QString("right-->");

        return QString("Row %1, Col %2")
                .arg(row)
                .arg(col);


        case Qt::FontRole:
            if(row == 0 && col == 0){
                 QFont font;
                 font.setBold(true);
                 return font;
            }
        break;

        case Qt::BackgroundRole:
        if(row == 1 && col == 2){
            QBrush background(Qt::yellow);
            return background;
        }

        break;

    case Qt::TextAlignmentRole:
        if(row == 1 && col == 1){
            return Qt::AlignRight;
        }

        break;
    }
    return QVariant();
}

