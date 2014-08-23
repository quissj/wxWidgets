/////////////////////////////////////////////////////////////////////////////
// Name:        wx/qt/gauge.h
// Author:      Peter Most
// Copyright:   (c) Peter Most
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_QT_GAUGE_H_
#define _WX_QT_GAUGE_H_

#include "wx/qt/pointer.h"
#include <QtWidgets/QProgressBar>

class WXDLLIMPEXP_CORE wxGauge : public wxGaugeBase
{
public:
    wxGauge();

    wxGauge(wxWindow *parent,
            wxWindowID id,
            int range,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize,
            long style = wxGA_HORIZONTAL,
            const wxValidator& validator = wxDefaultValidator,
            const wxString& name = wxGaugeNameStr);

    bool Create(wxWindow *parent,
                wxWindowID id,
                int range,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = wxGA_HORIZONTAL,
                const wxValidator& validator = wxDefaultValidator,
                const wxString& name = wxGaugeNameStr);

    virtual QProgressBar *GetHandle() const;

    // set/get the control range
    virtual void SetRange(int range);
    virtual int GetRange() const;

    virtual void SetValue(int pos);
    virtual int GetValue() const;

private:
    wxQtPointer< QProgressBar > m_qtProgressBar;

    wxDECLARE_DYNAMIC_CLASS_NO_COPY(wxGauge);
};

#endif // _WX_QT_GAUGE_H_
