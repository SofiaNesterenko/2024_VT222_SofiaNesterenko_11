#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QColorDialog>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),

    ui(new Ui::Dialog)
{
    ui->setupUi(this);




    model = new QDirModel (this);
    model->setReadOnly (false);
    model->setSorting((QDir::DirsFirst | QDir::IgnoreCase | QDir::Name));


    ui->treeView->setModel(model);

    QModelIndex index = model->index("C://");

    ui->treeView->expand(index);
    ui->treeView->scrollTo(index);
    ui->treeView->setCurrentIndex((index));
    ui->treeView->resizeColumnToContents(0);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_6_clicked()
{
    // create dir
    QModelIndex index = ui->treeView->currentIndex();
    if (!index.isValid()) return;

    QString name =QInputDialog::getText(this,"Новая папка","Введите название папки!");

    if (name.isEmpty()) return;

    model->mkdir(index, name);
}

void Dialog::on_pushButton_3_clicked()
{
    //delete
    QModelIndex index = ui->treeView->currentIndex();
    if (!index.isValid()) return;

if (model->fileInfo(index).isDir())
{
    //dir
    model->rmdir(index);

}
else
{
    //file
    model->remove(index);
}
}

void Dialog::on_pushButton_clicked()
{
    //copy
    QModelIndex index = ui->treeView->currentIndex();
    fileNameCopy = model->filePath(index);

}

void Dialog::on_pushButton_2_clicked()
{
    //paste

    path = QInputDialog::getText(this,"Копирование...","Введите путь для копирования!");
    if(path.at(path.count() - 1)=="/")
    {

    }
    else{
        path.append("/");
    }

    QFileInfo info;
    info.setFile(fileNameCopy);

    QFile file(fileNameCopy);
    file.copy(path+info.fileName());

    model->refresh();

}

void Dialog::on_pushButton_4_clicked()
{
    //info
    QMessageBox* pmbx =new QMessageBox
    ("Справка о программе","Файловый менеджер ProG1337 на QT, с функциями копирования, и вставки файлов.",QMessageBox::Information,
    QMessageBox::NoButton,
    QMessageBox::Ok,
    QMessageBox::NoButton
     | QMessageBox::Escape);
    int n = pmbx->exec();
    delete pmbx;
}

void Dialog::on_pushButton_5_clicked()
{
    //exit
    QApplication::quit();
}
