#include "dialog.h"
#include "ui_dialog.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
///
#include <QFile>
#include <QTextStream>
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
    for (int x=0;x<10102 ; x++) {
        ui->textEdit->append (QString::number(-2147483646));
    }
///
//    QFile file("/home/viktor/my_projects_qt_2/zapolnenie_0/0_sinapsi.txt");
//    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
//        return;
    
//    QTextStream out(&file);
//    out << "The magic number is: " << 49 << "\n";
//    file.close();
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    
    QFile file("/home/viktor/my_projects_qt_2/zapolnenie_0/0_sinapsi.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;
    
    QTextStream out(&file);//поток для записи текста
    out << ui->textEdit->toPlainText(); // в зависимости от того нужна ли разметка или нет
    file.close();    
    
    
}

Dialog::~Dialog()
{
    delete ui;
}

