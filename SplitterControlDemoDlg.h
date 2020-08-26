// SplitterControlDemoDlg.h : header file
//

#if !defined(AFX_SPLITTERCONTROLDEMODLG_H__DF3D3AA3_8536_469C_B6A6_32FDC5549ABD__INCLUDED_)
#define AFX_SPLITTERCONTROLDEMODLG_H__DF3D3AA3_8536_469C_B6A6_32FDC5549ABD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "SplitterControl.h"



#define STD_GAP             8
#define STD_BUTTON_WIDTH    90
#define STD_BUTTON_HEIGHT   25


/////////////////////////////////////////////////////////////////////////////
// CSplitterControlDemoDlg dialog
class CSplitterControlDemoDlg : public CDialog
{
// Construction
public:
	CSplitterControlDemoDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CSplitterControlDemoDlg)
	enum { IDD = IDD_SPLITTERCONTROLDEMO_DIALOG };
	CButton	m_btnCancel;
	CEdit	m_edHelp;
	CStatic	m_stTitle;
	CEdit	            m_txtContent;
	CListCtrl	        m_lstItem;
	CTreeCtrl	        m_wndType;
    HICON               m_hIcon;
    CSplitterControl    m_wndSplitter1;
    CSplitterControl    m_wndSplitter2;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSplitterControlDemoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL


// Implementation
protected:
	void InitSampleData();
    void Resize();
    void MoveDlgItem(int nD, const CRect& rcPos, BOOL bRepaint);

	// Generated message map functions
	//{{AFX_MSG(CSplitterControlDemoDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSelchangedTree(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnItemchangedList(NMHDR* pNMHDR, LRESULT* pResult);
    afx_msg void OnMaxMinInfo(NMHDR* pNMHDR, LRESULT* pResult);
    afx_msg void OnSplitter1Delta(NMHDR* pNMHDR, LRESULT* pResult);
    afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPLITTERCONTROLDEMODLG_H__DF3D3AA3_8536_469C_B6A6_32FDC5549ABD__INCLUDED_)
