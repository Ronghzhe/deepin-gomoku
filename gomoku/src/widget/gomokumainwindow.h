/*
   * Copyright (C) 2019 ~ 2020 Uniontech Software Technology Co.,Ltd.
   *
   * Author:     zhengxiaokang <zhengxiaokang@uniontech.com>
   *
   * Maintainer: zhengxiaokang <zhengxiaokang@uniontech.com>
   *
   * This program is free software: you can redistribute it and/or modify
   * it under the terms of the GNU General Public License as published by
   * the Free Software Foundation, either version 3 of the License, or
   * any later version.
   *
   * This program is distributed in the hope that it will be useful,
   * but WITHOUT ANY WARRANTY; without even the implied warranty of
   * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   * GNU General Public License for more details.
   *
   * You should have received a copy of the GNU General Public License
   * along with this program.  If not, see <http://www.gnu.org/licenses/>.
   */
#ifndef GOMOKUMAINWINDOW_H
#define GOMOKUMAINWINDOW_H

#include "checkerboard/checkerboardscene.h"

#include <DMainWindow>

DWIDGET_USE_NAMESPACE

class GomokuMainWindow : public DMainWindow
{
    Q_OBJECT
public:
    explicit GomokuMainWindow(QWidget *parent = nullptr);
    ~GomokuMainWindow() override;

public:
    bool eventFilter(QObject *watched, QEvent *event) override;

protected:
    void changeEvent(QEvent *event) override;

private:
    void initUI();
    void paintTitleBar(QWidget *titlebar);

private:
    DTitlebar *mTitleBar = nullptr;
    CheckerboardScene *checkerboardScene = nullptr;
};

#endif // GOMOKUMAINWINDOW_H
