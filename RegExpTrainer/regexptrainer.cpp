#include "regexptrainer.h"
#include "ui_regexptrainer.h"

RegExpTrainer::RegExpTrainer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegExpTrainer)
{
    ui->setupUi(this);
}

RegExpTrainer::~RegExpTrainer()
{
    delete ui;
}

bool RegExpTrainer::RegExpCheck(QRegExp &rex)
{
    if(rex.isValid() && !rex.isEmpty() && !rex.exactMatch(""))
    {
        return(true);
    }
    else
    {
        QMessageBox::information(this, "Warrning", "Your regular expression isn't valid!");
        return(false);
        ui->regExp->clear();
    }
}

void RegExpTrainer::on_match_clicked()
{
    QRegExp rex(ui->regExp->text());

    if(!RegExpCheck(rex))
    {
        return;
    }

    rex.setMinimal(!(ui->greed->isChecked()));
    ui->matchedPart->clear();
    int pos = 0;

    while((pos = rex.indexIn(ui->src->toPlainText(), pos)) != -1)
    {
        ui->matchedPart->appendPlainText(rex.cap(0));
        pos += rex.matchedLength();
    }
}

void RegExpTrainer::on_replace_clicked()
{
    QRegExp rex(ui->regExp->text());

    if(!RegExpCheck(rex))
    {
        return;
    }

    rex.setMinimal(!(ui->greed->isChecked()));
    ui->editedText->setPlainText(ui->src->toPlainText().replace(rex, ui->replaceRegExp->text()));
}
