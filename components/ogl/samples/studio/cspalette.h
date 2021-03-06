/////////////////////////////////////////////////////////////////////////////
// Name:        contrib/samples/ogl/studio/cspalette.h
// Purpose:     OGL sample palette
// Author:      Julian Smart
// Modified by:
// Created:     12/07/98
// RCS-ID:      $Id: cspalette.h,v 1.1 2007/03/28 15:15:50 frm Exp $
// Copyright:   (c) Julian Smart
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _STUDIO_CSPALETTE_H_
#define _STUDIO_CSPALETTE_H_

#include <wx/ogl/ogl.h> // base header of OGL, includes and adjusts wx/deprecated/setup.h

/*
 * Object editor tool palette
 *
 */

class csEditorToolPalette: public wxToolBar
{
   typedef wxToolBar base;
public:

  csEditorToolPalette(wxWindow *parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition,
    const wxSize& size = wxDefaultSize,
    long style = wxTB_VERTICAL);

  bool OnLeftClick(int toolIndex, bool toggled);
  void OnMouseEnter(int toolIndex);

  inline int GetSelection() const { return m_currentlySelected; }
  void SetSelection(int sel);

  void SetSize(wxCoord x, wxCoord y, wxCoord width, wxCoord height, int sizeFlags = wxSIZE_AUTO);

protected:
  int           m_currentlySelected;
};

#define PALETTE_ARROW           200
#define PALETTE_TEXT_TOOL       201

#endif
    // _STUDIO_CSPALETTE_H_
