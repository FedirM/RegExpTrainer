#ifndef REGEXPTRAINER_H
#define REGEXPTRAINER_H

#include <QWidget>
#include <QRegExp>
#include <QMessageBox>

namespace Ui {
class RegExpTrainer;
}

class RegExpTrainer : public QWidget
{
    Q_OBJECT

public:
    explicit RegExpTrainer(QWidget *parent = 0);
    ~RegExpTrainer();
    bool RegExpCheck(QRegExp& rex);


private slots:
    void on_match_clicked();
    void on_replace_clicked();

private:
    Ui::RegExpTrainer *ui;
};

#endif // REGEXPTRAINER_H
