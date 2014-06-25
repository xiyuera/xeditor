/***************************************************************
 * Name:      xeditorApp.cpp
 * Purpose:   Code for Application Class
 * Author:    xiyuera (xiyuera@gmail.com)
 * Created:   2014-06-25
 * Copyright: xiyuera (xiyuera.com)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "xeditorApp.h"
#include "xeditorMain.h"

IMPLEMENT_APP(xeditorApp);

bool xeditorApp::OnInit()
{
    xeditorFrame* frame = new xeditorFrame(0L);
    
    frame->Show();
    
    return true;
}
