#include "patienteditview.h"
#include "ui_patienteditview.h"
#include <QDataWidgetMapper>
#include "idatabase.h"
PatientEditView::PatientEditView(QWidget *parent,int row)
    : QWidget(parent)
    , ui(new Ui::PatientEditView)
{
    ui->setupUi(this);

    dataMapper = new QDataWidgetMapper();
    QSqlTableModel *tabModel = IDatabase::getInstance().patientTabModel;
    dataMapper->setModel(IDatabase::getInstance().patientTabModel);
    dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);

    dataMapper->addMapping(ui->dbEditID,tabModel->fieldIndex("ID"));
    dataMapper->addMapping(ui->dbEditName,tabModel->fieldIndex("NAME"));
    dataMapper->addMapping(ui->dbEditIdcard,tabModel->fieldIndex("ID_CARD"));
    dataMapper->addMapping(ui->dbHeight,tabModel->fieldIndex("HEIGHT"));
    dataMapper->addMapping(ui->dbWeight,tabModel->fieldIndex("WEIGHT"));
    dataMapper->addMapping(ui->dbMobile,tabModel->fieldIndex("MOBILEPHONE"));
    dataMapper->addMapping(ui->dbDate,tabModel->fieldIndex("DOB"));
    dataMapper->addMapping(ui->dbSex,tabModel->fieldIndex("SEX"));
    dataMapper->addMapping(ui->dbCreateTime,tabModel->fieldIndex("CREATEDTIMESTAMP"));

    dataMapper->setCurrentIndex(row);
    ui->dbEditID->setEnabled(false);

}

PatientEditView::~PatientEditView()
{
    delete ui;
}

void PatientEditView::on_pushButton_clicked()
{
    IDatabase::getInstance().submitPatientEdit();
    emit goPreviousView();
}


void PatientEditView::on_pushButton_2_clicked()
{
    IDatabase::getInstance().revertPatientEdit();
    emit goPreviousView();
}

