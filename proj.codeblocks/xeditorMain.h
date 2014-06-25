/***************************************************************
 * Name:      xeditorMain.h
 * Purpose:   Defines Application Frame
 * Author:    xiyuera (xiyuera@gmail.com)
 * Created:   2014-06-25
 * Copyright: xiyuera (xiyuera.com)
 * License:
 **************************************************************/

#ifndef XEDITORMAIN_H
#define XEDITORMAIN_H



#include "xeditorApp.h"


#include "GUIFrame.h"

class xeditorFrame: public GUIFrame
{
    public:
        xeditorFrame(wxFrame *frame);
        ~xeditorFrame();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};

#endif // XEDITORMAIN_H
