#ifndef CUSTOMTABLEMODEL_H
#define CUSTOMTABLEMODEL_H
#include <QAbstractItemModel>

#include <QObject>
class CustomTableModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    CustomTableModel(QObject *parent);

    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;

    //Controls the data that is shown in each cell
    QVariant data(const QModelIndex &index, int role) const;
};

#endif // CUSTOMTABLEMODEL_H
