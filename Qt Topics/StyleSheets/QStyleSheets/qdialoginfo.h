#ifndef QDIALOGINFO_H
#define QDIALOGINFO_H

#include <QDialog>

namespace Ui {
class QDialogInfo;
}

class QDialogInfo : public QDialog
{
    Q_OBJECT

public:
    explicit QDialogInfo(QWidget *parent = nullptr);
    ~QDialogInfo();

private:
    Ui::QDialogInfo *ui;
};

#endif // QDIALOGINFO_H
