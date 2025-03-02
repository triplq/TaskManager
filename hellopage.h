#ifndef HELLOPAGE_H
#define HELLOPAGE_H

#include <QWidget>

namespace Ui {
class HelloPage;
}

class HelloPage : public QWidget
{
    Q_OBJECT

public:
    explicit HelloPage(QWidget *parent = nullptr);
    ~HelloPage();

signals:
    void SigninPageClicked();

private:
    Ui::HelloPage *ui;
};

#endif // HELLOPAGE_H
