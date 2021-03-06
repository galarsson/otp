/*
 * %CopyrightBegin%
 *
 * Copyright Ericsson AB 2008-2011. All Rights Reserved.
 *
 * The contents of this file are subject to the Erlang Public License,
 * Version 1.1, (the "License"); you may not use this file except in
 * compliance with the License. You should have received a copy of the
 * Erlang Public License along with this software. If not, it can be
 * retrieved online at http://www.erlang.org/.
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 *
 * %CopyrightEnd% 
*/

/***** This file is generated do not edit ****/

#include <wx/wx.h>
#include "../wxe_impl.h"

#include "wxe_macros.h"
#include "../wxe_events.h"

#include "../wxe_return.h"

wxeEtype::wxeEtype(const char *name, int Id) {eName = name;cID = Id;}

WX_DECLARE_HASH_MAP(int, wxeEtype*, wxIntegerHash, wxIntegerEqual, wxeETmap );

wxeETmap etmap;

int wxeEventTypeFromAtom(char *etype_atom) {
  wxeETmap::iterator it;
  for(it = etmap.begin(); it != etmap.end(); ++it) {
       wxeEtype * value = it->second;
       if(strcmp(value->eName, etype_atom) == 0) {
	 if(it->first > wxEVT_USER_FIRST) {
	       return it->first - wxEVT_USER_FIRST;
	    } else {
	       return it->first;
	    }
       }
  }
  return -1;
}

void initEventTable()
{
  struct { int ev_type;  int class_id; const char * ev_name;} event_types[] =
  {
   {wxEVT_NULL, 0, "null"},
   {wxEVT_COMMAND_BUTTON_CLICKED, 164, "command_button_clicked"},
   {wxEVT_COMMAND_CHECKBOX_CLICKED, 164, "command_checkbox_clicked"},
   {wxEVT_COMMAND_CHOICE_SELECTED, 164, "command_choice_selected"},
   {wxEVT_COMMAND_LISTBOX_SELECTED, 164, "command_listbox_selected"},
   {wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, 164, "command_listbox_doubleclicked"},
   {wxEVT_COMMAND_TEXT_UPDATED, 164, "command_text_updated"},
   {wxEVT_COMMAND_TEXT_ENTER, 164, "command_text_enter"},
   {wxEVT_COMMAND_MENU_SELECTED, 164, "command_menu_selected"},
   {wxEVT_COMMAND_SLIDER_UPDATED, 164, "command_slider_updated"},
   {wxEVT_COMMAND_RADIOBOX_SELECTED, 164, "command_radiobox_selected"},
   {wxEVT_COMMAND_RADIOBUTTON_SELECTED, 164, "command_radiobutton_selected"},
   {wxEVT_COMMAND_SCROLLBAR_UPDATED, 164, "command_scrollbar_updated"},
   {wxEVT_COMMAND_VLBOX_SELECTED, 164, "command_vlbox_selected"},
   {wxEVT_COMMAND_COMBOBOX_SELECTED, 164, "command_combobox_selected"},
   {wxEVT_COMMAND_TOOL_RCLICKED, 164, "command_tool_rclicked"},
   {wxEVT_COMMAND_TOOL_ENTER, 164, "command_tool_enter"},
   {wxEVT_COMMAND_CHECKLISTBOX_TOGGLED, 164, "command_checklistbox_toggled"},
   {wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, 164, "command_togglebutton_clicked"},
   {wxEVT_COMMAND_LEFT_CLICK, 164, "command_left_click"},
   {wxEVT_COMMAND_LEFT_DCLICK, 164, "command_left_dclick"},
   {wxEVT_COMMAND_RIGHT_CLICK, 164, "command_right_click"},
   {wxEVT_COMMAND_SET_FOCUS, 164, "command_set_focus"},
   {wxEVT_COMMAND_KILL_FOCUS, 164, "command_kill_focus"},
   {wxEVT_COMMAND_ENTER, 164, "command_enter"},
   {wxEVT_SCROLL_TOP, 165, "scroll_top"},
   {wxEVT_SCROLL_BOTTOM, 165, "scroll_bottom"},
   {wxEVT_SCROLL_LINEUP, 165, "scroll_lineup"},
   {wxEVT_SCROLL_LINEDOWN, 165, "scroll_linedown"},
   {wxEVT_SCROLL_PAGEUP, 165, "scroll_pageup"},
   {wxEVT_SCROLL_PAGEDOWN, 165, "scroll_pagedown"},
   {wxEVT_SCROLL_THUMBTRACK, 165, "scroll_thumbtrack"},
   {wxEVT_SCROLL_THUMBRELEASE, 165, "scroll_thumbrelease"},
   {wxEVT_SCROLL_CHANGED, 165, "scroll_changed"},
   {wxEVT_SCROLLWIN_TOP, 166, "scrollwin_top"},
   {wxEVT_SCROLLWIN_BOTTOM, 166, "scrollwin_bottom"},
   {wxEVT_SCROLLWIN_LINEUP, 166, "scrollwin_lineup"},
   {wxEVT_SCROLLWIN_LINEDOWN, 166, "scrollwin_linedown"},
   {wxEVT_SCROLLWIN_PAGEUP, 166, "scrollwin_pageup"},
   {wxEVT_SCROLLWIN_PAGEDOWN, 166, "scrollwin_pagedown"},
   {wxEVT_SCROLLWIN_THUMBTRACK, 166, "scrollwin_thumbtrack"},
   {wxEVT_SCROLLWIN_THUMBRELEASE, 166, "scrollwin_thumbrelease"},
   {wxEVT_LEFT_DOWN, 167, "left_down"},
   {wxEVT_LEFT_UP, 167, "left_up"},
   {wxEVT_MIDDLE_DOWN, 167, "middle_down"},
   {wxEVT_MIDDLE_UP, 167, "middle_up"},
   {wxEVT_RIGHT_DOWN, 167, "right_down"},
   {wxEVT_RIGHT_UP, 167, "right_up"},
   {wxEVT_MOTION, 167, "motion"},
   {wxEVT_ENTER_WINDOW, 167, "enter_window"},
   {wxEVT_LEAVE_WINDOW, 167, "leave_window"},
   {wxEVT_LEFT_DCLICK, 167, "left_dclick"},
   {wxEVT_MIDDLE_DCLICK, 167, "middle_dclick"},
   {wxEVT_RIGHT_DCLICK, 167, "right_dclick"},
   {wxEVT_MOUSEWHEEL, 167, "mousewheel"},
   {wxEVT_NC_LEFT_DOWN, 167, "nc_left_down"},
   {wxEVT_NC_LEFT_UP, 167, "nc_left_up"},
   {wxEVT_NC_MIDDLE_DOWN, 167, "nc_middle_down"},
   {wxEVT_NC_MIDDLE_UP, 167, "nc_middle_up"},
   {wxEVT_NC_RIGHT_DOWN, 167, "nc_right_down"},
   {wxEVT_NC_RIGHT_UP, 167, "nc_right_up"},
   {wxEVT_NC_MOTION, 167, "nc_motion"},
   {wxEVT_NC_ENTER_WINDOW, 167, "nc_enter_window"},
   {wxEVT_NC_LEAVE_WINDOW, 167, "nc_leave_window"},
   {wxEVT_NC_LEFT_DCLICK, 167, "nc_left_dclick"},
   {wxEVT_NC_MIDDLE_DCLICK, 167, "nc_middle_dclick"},
   {wxEVT_NC_RIGHT_DCLICK, 167, "nc_right_dclick"},
   {wxEVT_SET_CURSOR, 168, "set_cursor"},
   {wxEVT_CHAR, 169, "char"},
   {wxEVT_CHAR_HOOK, 169, "char_hook"},
   {wxEVT_KEY_DOWN, 169, "key_down"},
   {wxEVT_KEY_UP, 169, "key_up"},
   {wxEVT_SIZE, 170, "size"},
   {wxEVT_MOVE, 171, "move"},
   {wxEVT_PAINT, 172, "paint"},
   {wxEVT_PAINT_ICON, 172, "paint_icon"},
   {wxEVT_NC_PAINT, 173, "nc_paint"},
   {wxEVT_ERASE_BACKGROUND, 174, "erase_background"},
   {wxEVT_SET_FOCUS, 175, "set_focus"},
   {wxEVT_KILL_FOCUS, 175, "kill_focus"},
   {wxEVT_CHILD_FOCUS, 176, "child_focus"},
   {wxEVT_MENU_OPEN, 177, "menu_open"},
   {wxEVT_MENU_CLOSE, 177, "menu_close"},
   {wxEVT_MENU_HIGHLIGHT, 177, "menu_highlight"},
   {wxEVT_CLOSE_WINDOW, 178, "close_window"},
   {wxEVT_END_SESSION, 178, "end_session"},
   {wxEVT_QUERY_END_SESSION, 178, "query_end_session"},
   {wxEVT_SHOW, 179, "show"},
   {wxEVT_ICONIZE, 180, "iconize"},
   {wxEVT_MAXIMIZE, 181, "maximize"},
   {wxEVT_JOY_BUTTON_DOWN, 182, "joy_button_down"},
   {wxEVT_JOY_BUTTON_UP, 182, "joy_button_up"},
   {wxEVT_JOY_MOVE, 182, "joy_move"},
   {wxEVT_JOY_ZMOVE, 182, "joy_zmove"},
   {wxEVT_UPDATE_UI, 183, "update_ui"},
   {wxEVT_SYS_COLOUR_CHANGED, 184, "sys_colour_changed"},
   {wxEVT_MOUSE_CAPTURE_CHANGED, 185, "mouse_capture_changed"},
   {wxEVT_DISPLAY_CHANGED, 186, "display_changed"},
   {wxEVT_PALETTE_CHANGED, 187, "palette_changed"},
   {wxEVT_QUERY_NEW_PALETTE, 188, "query_new_palette"},
   {wxEVT_NAVIGATION_KEY, 189, "navigation_key"},
   {wxEVT_CREATE, 190, "create"},
   {wxEVT_DESTROY, 191, "destroy"},
   {wxEVT_HELP, 192, "help"},
   {wxEVT_DETAILED_HELP, 192, "detailed_help"},
   {wxEVT_CONTEXT_MENU, 193, "context_menu"},
   {wxEVT_IDLE, 194, "idle"},
   {wxEVT_GRID_CELL_LEFT_CLICK, 195, "grid_cell_left_click"},
   {wxEVT_GRID_CELL_RIGHT_CLICK, 195, "grid_cell_right_click"},
   {wxEVT_GRID_CELL_LEFT_DCLICK, 195, "grid_cell_left_dclick"},
   {wxEVT_GRID_CELL_RIGHT_DCLICK, 195, "grid_cell_right_dclick"},
   {wxEVT_GRID_LABEL_LEFT_CLICK, 195, "grid_label_left_click"},
   {wxEVT_GRID_LABEL_RIGHT_CLICK, 195, "grid_label_right_click"},
   {wxEVT_GRID_LABEL_LEFT_DCLICK, 195, "grid_label_left_dclick"},
   {wxEVT_GRID_LABEL_RIGHT_DCLICK, 195, "grid_label_right_dclick"},
   {wxEVT_GRID_ROW_SIZE, 195, "grid_row_size"},
   {wxEVT_GRID_COL_SIZE, 195, "grid_col_size"},
   {wxEVT_GRID_RANGE_SELECT, 195, "grid_range_select"},
   {wxEVT_GRID_CELL_CHANGE, 195, "grid_cell_change"},
   {wxEVT_GRID_SELECT_CELL, 195, "grid_select_cell"},
   {wxEVT_GRID_EDITOR_SHOWN, 195, "grid_editor_shown"},
   {wxEVT_GRID_EDITOR_HIDDEN, 195, "grid_editor_hidden"},
   {wxEVT_GRID_EDITOR_CREATED, 195, "grid_editor_created"},
   {wxEVT_GRID_CELL_BEGIN_DRAG, 195, "grid_cell_begin_drag"},
   {wxEVT_SASH_DRAGGED, 197, "sash_dragged"},
   {wxEVT_COMMAND_LIST_BEGIN_DRAG, 198, "command_list_begin_drag"},
   {wxEVT_COMMAND_LIST_BEGIN_RDRAG, 198, "command_list_begin_rdrag"},
   {wxEVT_COMMAND_LIST_BEGIN_LABEL_EDIT, 198, "command_list_begin_label_edit"},
   {wxEVT_COMMAND_LIST_END_LABEL_EDIT, 198, "command_list_end_label_edit"},
   {wxEVT_COMMAND_LIST_DELETE_ITEM, 198, "command_list_delete_item"},
   {wxEVT_COMMAND_LIST_DELETE_ALL_ITEMS, 198, "command_list_delete_all_items"},
   {wxEVT_COMMAND_LIST_KEY_DOWN, 198, "command_list_key_down"},
   {wxEVT_COMMAND_LIST_INSERT_ITEM, 198, "command_list_insert_item"},
   {wxEVT_COMMAND_LIST_COL_CLICK, 198, "command_list_col_click"},
   {wxEVT_COMMAND_LIST_COL_RIGHT_CLICK, 198, "command_list_col_right_click"},
   {wxEVT_COMMAND_LIST_COL_BEGIN_DRAG, 198, "command_list_col_begin_drag"},
   {wxEVT_COMMAND_LIST_COL_DRAGGING, 198, "command_list_col_dragging"},
   {wxEVT_COMMAND_LIST_COL_END_DRAG, 198, "command_list_col_end_drag"},
   {wxEVT_COMMAND_LIST_ITEM_SELECTED, 198, "command_list_item_selected"},
   {wxEVT_COMMAND_LIST_ITEM_DESELECTED, 198, "command_list_item_deselected"},
   {wxEVT_COMMAND_LIST_ITEM_RIGHT_CLICK, 198, "command_list_item_right_click"},
   {wxEVT_COMMAND_LIST_ITEM_MIDDLE_CLICK, 198, "command_list_item_middle_click"},
   {wxEVT_COMMAND_LIST_ITEM_ACTIVATED, 198, "command_list_item_activated"},
   {wxEVT_COMMAND_LIST_ITEM_FOCUSED, 198, "command_list_item_focused"},
   {wxEVT_COMMAND_LIST_CACHE_HINT, 198, "command_list_cache_hint"},
   {wxEVT_DATE_CHANGED, 199, "date_changed"},
   {wxEVT_CALENDAR_SEL_CHANGED, 200, "calendar_sel_changed"},
   {wxEVT_CALENDAR_DAY_CHANGED, 200, "calendar_day_changed"},
   {wxEVT_CALENDAR_MONTH_CHANGED, 200, "calendar_month_changed"},
   {wxEVT_CALENDAR_YEAR_CHANGED, 200, "calendar_year_changed"},
   {wxEVT_CALENDAR_DOUBLECLICKED, 200, "calendar_doubleclicked"},
   {wxEVT_CALENDAR_WEEKDAY_CLICKED, 200, "calendar_weekday_clicked"},
   {wxEVT_COMMAND_FILEPICKER_CHANGED, 201, "command_filepicker_changed"},
   {wxEVT_COMMAND_DIRPICKER_CHANGED, 201, "command_dirpicker_changed"},
   {wxEVT_COMMAND_COLOURPICKER_CHANGED, 202, "command_colourpicker_changed"},
   {wxEVT_COMMAND_FONTPICKER_CHANGED, 203, "command_fontpicker_changed"},
   {wxEVT_STC_CHANGE, 204, "stc_change"},
   {wxEVT_STC_STYLENEEDED, 204, "stc_styleneeded"},
   {wxEVT_STC_CHARADDED, 204, "stc_charadded"},
   {wxEVT_STC_SAVEPOINTREACHED, 204, "stc_savepointreached"},
   {wxEVT_STC_SAVEPOINTLEFT, 204, "stc_savepointleft"},
   {wxEVT_STC_ROMODIFYATTEMPT, 204, "stc_romodifyattempt"},
   {wxEVT_STC_KEY, 204, "stc_key"},
   {wxEVT_STC_DOUBLECLICK, 204, "stc_doubleclick"},
   {wxEVT_STC_UPDATEUI, 204, "stc_updateui"},
   {wxEVT_STC_MODIFIED, 204, "stc_modified"},
   {wxEVT_STC_MACRORECORD, 204, "stc_macrorecord"},
   {wxEVT_STC_MARGINCLICK, 204, "stc_marginclick"},
   {wxEVT_STC_NEEDSHOWN, 204, "stc_needshown"},
   {wxEVT_STC_PAINTED, 204, "stc_painted"},
   {wxEVT_STC_USERLISTSELECTION, 204, "stc_userlistselection"},
   {wxEVT_STC_URIDROPPED, 204, "stc_uridropped"},
   {wxEVT_STC_DWELLSTART, 204, "stc_dwellstart"},
   {wxEVT_STC_DWELLEND, 204, "stc_dwellend"},
   {wxEVT_STC_START_DRAG, 204, "stc_start_drag"},
   {wxEVT_STC_DRAG_OVER, 204, "stc_drag_over"},
   {wxEVT_STC_DO_DROP, 204, "stc_do_drop"},
   {wxEVT_STC_ZOOM, 204, "stc_zoom"},
   {wxEVT_STC_HOTSPOT_CLICK, 204, "stc_hotspot_click"},
   {wxEVT_STC_HOTSPOT_DCLICK, 204, "stc_hotspot_dclick"},
   {wxEVT_STC_CALLTIP_CLICK, 204, "stc_calltip_click"},
   {wxEVT_STC_AUTOCOMP_SELECTION, 204, "stc_autocomp_selection"},
   {wxEVT_COMMAND_TREE_BEGIN_DRAG, 209, "command_tree_begin_drag"},
   {wxEVT_COMMAND_TREE_BEGIN_RDRAG, 209, "command_tree_begin_rdrag"},
   {wxEVT_COMMAND_TREE_BEGIN_LABEL_EDIT, 209, "command_tree_begin_label_edit"},
   {wxEVT_COMMAND_TREE_END_LABEL_EDIT, 209, "command_tree_end_label_edit"},
   {wxEVT_COMMAND_TREE_DELETE_ITEM, 209, "command_tree_delete_item"},
   {wxEVT_COMMAND_TREE_GET_INFO, 209, "command_tree_get_info"},
   {wxEVT_COMMAND_TREE_SET_INFO, 209, "command_tree_set_info"},
   {wxEVT_COMMAND_TREE_ITEM_EXPANDED, 209, "command_tree_item_expanded"},
   {wxEVT_COMMAND_TREE_ITEM_EXPANDING, 209, "command_tree_item_expanding"},
   {wxEVT_COMMAND_TREE_ITEM_COLLAPSED, 209, "command_tree_item_collapsed"},
   {wxEVT_COMMAND_TREE_ITEM_COLLAPSING, 209, "command_tree_item_collapsing"},
   {wxEVT_COMMAND_TREE_SEL_CHANGED, 209, "command_tree_sel_changed"},
   {wxEVT_COMMAND_TREE_SEL_CHANGING, 209, "command_tree_sel_changing"},
   {wxEVT_COMMAND_TREE_KEY_DOWN, 209, "command_tree_key_down"},
   {wxEVT_COMMAND_TREE_ITEM_ACTIVATED, 209, "command_tree_item_activated"},
   {wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK, 209, "command_tree_item_right_click"},
   {wxEVT_COMMAND_TREE_ITEM_MIDDLE_CLICK, 209, "command_tree_item_middle_click"},
   {wxEVT_COMMAND_TREE_END_DRAG, 209, "command_tree_end_drag"},
   {wxEVT_COMMAND_TREE_STATE_IMAGE_CLICK, 209, "command_tree_state_image_click"},
   {wxEVT_COMMAND_TREE_ITEM_GETTOOLTIP, 209, "command_tree_item_gettooltip"},
   {wxEVT_COMMAND_TREE_ITEM_MENU, 209, "command_tree_item_menu"},
   {wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, 210, "command_notebook_page_changed"},
   {wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGING, 210, "command_notebook_page_changing"},
   {wxEVT_COMMAND_SPINCTRL_UPDATED, 216, "command_spinctrl_updated"},
   {wxEVT_SCROLL_LINEUP + wxEVT_USER_FIRST, 165, "spin_up"},
   {wxEVT_SCROLL_LINEDOWN + wxEVT_USER_FIRST, 165, "spin_down"},
   {wxEVT_SCROLL_THUMBTRACK + wxEVT_USER_FIRST, 165, "spin"},
   {wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGED, 218, "command_splitter_sash_pos_changed"},
   {wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGING, 218, "command_splitter_sash_pos_changing"},
   {wxEVT_COMMAND_SPLITTER_DOUBLECLICKED, 218, "command_splitter_doubleclicked"},
   {wxEVT_COMMAND_SPLITTER_UNSPLIT, 218, "command_splitter_unsplit"},
   {wxEVT_COMMAND_HTML_LINK_CLICKED, 220, "command_html_link_clicked"},
   {wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSE, 222, "command_auinotebook_page_close"},
   {wxEVT_COMMAND_AUINOTEBOOK_PAGE_CHANGED, 222, "command_auinotebook_page_changed"},
   {wxEVT_COMMAND_AUINOTEBOOK_PAGE_CHANGING, 222, "command_auinotebook_page_changing"},
   {wxEVT_COMMAND_AUINOTEBOOK_BUTTON, 222, "command_auinotebook_button"},
   {wxEVT_COMMAND_AUINOTEBOOK_BEGIN_DRAG, 222, "command_auinotebook_begin_drag"},
   {wxEVT_COMMAND_AUINOTEBOOK_END_DRAG, 222, "command_auinotebook_end_drag"},
   {wxEVT_COMMAND_AUINOTEBOOK_DRAG_MOTION, 222, "command_auinotebook_drag_motion"},
   {wxEVT_COMMAND_AUINOTEBOOK_ALLOW_DND, 222, "command_auinotebook_allow_dnd"},
#if wxCHECK_VERSION(2,8,5)
   {wxEVT_COMMAND_AUINOTEBOOK_TAB_MIDDLE_DOWN, 222, "command_auinotebook_tab_middle_down"},
#endif
#if wxCHECK_VERSION(2,8,5)
   {wxEVT_COMMAND_AUINOTEBOOK_TAB_MIDDLE_UP, 222, "command_auinotebook_tab_middle_up"},
#endif
#if wxCHECK_VERSION(2,8,5)
   {wxEVT_COMMAND_AUINOTEBOOK_TAB_RIGHT_DOWN, 222, "command_auinotebook_tab_right_down"},
#endif
#if wxCHECK_VERSION(2,8,5)
   {wxEVT_COMMAND_AUINOTEBOOK_TAB_RIGHT_UP, 222, "command_auinotebook_tab_right_up"},
#endif
#if wxCHECK_VERSION(2,8,5)
   {wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSED, 222, "command_auinotebook_page_closed"},
#endif
#if wxCHECK_VERSION(2,8,5)
   {wxEVT_COMMAND_AUINOTEBOOK_DRAG_DONE, 222, "command_auinotebook_drag_done"},
#endif
#if wxCHECK_VERSION(2,8,5)
   {wxEVT_COMMAND_AUINOTEBOOK_BG_DCLICK, 222, "command_auinotebook_bg_dclick"},
#endif
   {wxEVT_AUI_PANE_BUTTON, 223, "aui_pane_button"},
   {wxEVT_AUI_PANE_CLOSE, 223, "aui_pane_close"},
   {wxEVT_AUI_PANE_MAXIMIZE, 223, "aui_pane_maximize"},
   {wxEVT_AUI_PANE_RESTORE, 223, "aui_pane_restore"},
   {wxEVT_AUI_RENDER, 223, "aui_render"},
   {wxEVT_AUI_FIND_MANAGER, 223, "aui_find_manager"},
   {-1, 0, }
  };
  for(int i=0; event_types[i].ev_type != -1; i++) {
     if(NULL == etmap[event_types[i].ev_type]) {
       etmap[event_types[i].ev_type] =
        new wxeEtype(event_types[i].ev_name, event_types[i].class_id);
     } else {
       wxeEtype *prev = etmap[event_types[i].ev_type];
       wxString msg(wxT("Duplicate event defs: "));
       msg += wxString::FromAscii(event_types[i].ev_name);
       msg += wxString::Format(wxT(" %d "), event_types[i].class_id);
       msg += wxString::FromAscii(prev->eName);
       msg += wxString::Format(wxT(" %d"), prev->cID);
       send_msg("internal_error", &msg);
     }
  }
}

void wxeEvtListener::forward(wxEvent& event)
{
#ifdef DEBUG
  if(!sendevent(&event, port))
    fprintf(stderr, "Couldn't send event!\r\n");
#else
sendevent(&event, port);
#endif
}

int getRef(void* ptr, wxeMemEnv* memenv)
{
  WxeApp * app = (WxeApp *) wxTheApp;
  return app->getRef(ptr,memenv);
}

bool sendevent(wxEvent *event, ErlDrvPort port)
{
 int send_res ;
 char * evClass = NULL;
 wxMBConvUTF32 UTFconverter;
 wxeEtype *Etype = etmap[event->GetEventType()];
 wxeCallbackData *cb = (wxeCallbackData *)event->m_callbackUserData;
 WxeApp * app = (WxeApp *) wxTheApp;
 wxeMemEnv *memenv = app->getMemEnv(port);
 if(!memenv) return 0;

 wxeReturn rt = wxeReturn(port, cb->listener);

 rt.addAtom((char*)"wx");
 rt.addInt((int) event->GetId());
 rt.addRef(getRef((void *)(cb->obj), memenv), cb->class_name);
 rt.addExt2Term(cb->user_data);
 switch(Etype->cID) {
case 164: {// wxCommandEvent
 wxCommandEvent * ev = (wxCommandEvent *) event;
    evClass = (char*)"wxCommandEvent";
    rt.addAtom((char*)"wxCommand");
    rt.addAtom(Etype->eName);
 rt.add(ev->GetString());
 rt.addInt(ev->GetInt());
 rt.addInt(ev->GetExtraLong());
    rt.addTupleCount(5);
  break;
}
case 165: {// wxScrollEvent or wxSpinEvent
  if(event->IsKindOf(CLASSINFO(wxScrollEvent))) {
 wxScrollEvent * ev = (wxScrollEvent *) event;
    evClass = (char*)"wxScrollEvent";
    rt.addAtom((char*)"wxScroll");
    rt.addAtom(Etype->eName);
 rt.addInt(ev->GetInt());
 rt.addInt(ev->GetExtraLong());
    rt.addTupleCount(4);
  } else {
    Etype = etmap[event->GetEventType() + wxEVT_USER_FIRST];
 wxSpinEvent * ev = (wxSpinEvent *) event;
    evClass = (char*)"wxSpinEvent";
    rt.addAtom((char*)"wxSpin");
    rt.addAtom(Etype->eName);
 rt.addInt(ev->GetInt());
    rt.addTupleCount(3);
  }
  break;
}
case 166: {// wxScrollWinEvent
    evClass = (char*)"wxScrollWinEvent";
    rt.addAtom((char*)"wxScrollWin");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 167: {// wxMouseEvent
 wxMouseEvent * ev = (wxMouseEvent *) event;
    evClass = (char*)"wxMouseEvent";
    rt.addAtom((char*)"wxMouse");
    rt.addAtom(Etype->eName);
 rt.addInt(ev->m_x);
 rt.addInt(ev->m_y);
 rt.addBool(ev->m_leftDown);
 rt.addBool(ev->m_middleDown);
 rt.addBool(ev->m_rightDown);
 rt.addBool(ev->m_controlDown);
 rt.addBool(ev->m_shiftDown);
 rt.addBool(ev->m_altDown);
 rt.addBool(ev->m_metaDown);
 rt.addInt(ev->m_wheelRotation);
 rt.addInt(ev->m_wheelDelta);
 rt.addInt(ev->m_linesPerAction);
    rt.addTupleCount(14);
  break;
}
case 168: {// wxSetCursorEvent
    evClass = (char*)"wxSetCursorEvent";
    rt.addAtom((char*)"wxSetCursor");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 169: {// wxKeyEvent
 wxKeyEvent * ev = (wxKeyEvent *) event;
    evClass = (char*)"wxKeyEvent";
    rt.addAtom((char*)"wxKey");
    rt.addAtom(Etype->eName);
 rt.addInt(ev->m_x);
 rt.addInt(ev->m_y);
 rt.addInt(ev->m_keyCode);
 rt.addBool(ev->m_controlDown);
 rt.addBool(ev->m_shiftDown);
 rt.addBool(ev->m_altDown);
 rt.addBool(ev->m_metaDown);
 rt.addBool(ev->m_scanCode);
 rt.addInt(ev->m_uniChar);
 rt.addUint(ev->m_rawCode);
 rt.addUint(ev->m_rawFlags);
    rt.addTupleCount(13);
  break;
}
case 170: {// wxSizeEvent
 wxSizeEvent * ev = (wxSizeEvent *) event;
    evClass = (char*)"wxSizeEvent";
    rt.addAtom((char*)"wxSize");
    rt.addAtom(Etype->eName);
 rt.add(ev->m_size);
 rt.add(ev->m_rect);
    rt.addTupleCount(4);
  break;
}
case 171: {// wxMoveEvent
    evClass = (char*)"wxMoveEvent";
    rt.addAtom((char*)"wxMove");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 172: {// wxPaintEvent
    evClass = (char*)"wxPaintEvent";
    rt.addAtom((char*)"wxPaint");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 173: {// wxNcPaintEvent
    evClass = (char*)"wxNcPaintEvent";
    rt.addAtom((char*)"wxNcPaint");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 174: {// wxEraseEvent
 wxEraseEvent * ev = (wxEraseEvent *) event;
 wxDC * GetDC = ev->GetDC();
    evClass = (char*)"wxEraseEvent";
    rt.addAtom((char*)"wxErase");
    rt.addAtom(Etype->eName);
 rt.addRef(getRef((void *)GetDC,memenv), "wxDC");
    rt.addTupleCount(3);
  break;
}
case 175: {// wxFocusEvent
    evClass = (char*)"wxFocusEvent";
    rt.addAtom((char*)"wxFocus");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 176: {// wxChildFocusEvent
    evClass = (char*)"wxChildFocusEvent";
    rt.addAtom((char*)"wxChildFocus");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 177: {// wxMenuEvent
    evClass = (char*)"wxMenuEvent";
    rt.addAtom((char*)"wxMenu");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 178: {// wxCloseEvent
    evClass = (char*)"wxCloseEvent";
    rt.addAtom((char*)"wxClose");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 179: {// wxShowEvent
    evClass = (char*)"wxShowEvent";
    rt.addAtom((char*)"wxShow");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 180: {// wxIconizeEvent
    evClass = (char*)"wxIconizeEvent";
    rt.addAtom((char*)"wxIconize");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 181: {// wxMaximizeEvent
    evClass = (char*)"wxMaximizeEvent";
    rt.addAtom((char*)"wxMaximize");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 182: {// wxJoystickEvent
    evClass = (char*)"wxJoystickEvent";
    rt.addAtom((char*)"wxJoystick");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 183: {// wxUpdateUIEvent
    evClass = (char*)"wxUpdateUIEvent";
    rt.addAtom((char*)"wxUpdateUI");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 184: {// wxSysColourChangedEvent
    evClass = (char*)"wxSysColourChangedEvent";
    rt.addAtom((char*)"wxSysColourChanged");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 185: {// wxMouseCaptureChangedEvent
    evClass = (char*)"wxMouseCaptureChangedEvent";
    rt.addAtom((char*)"wxMouseCaptureChanged");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 186: {// wxDisplayChangedEvent
    evClass = (char*)"wxDisplayChangedEvent";
    rt.addAtom((char*)"wxDisplayChanged");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 187: {// wxPaletteChangedEvent
    evClass = (char*)"wxPaletteChangedEvent";
    rt.addAtom((char*)"wxPaletteChanged");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 188: {// wxQueryNewPaletteEvent
    evClass = (char*)"wxQueryNewPaletteEvent";
    rt.addAtom((char*)"wxQueryNewPalette");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 189: {// wxNavigationKeyEvent
 wxNavigationKeyEvent * ev = (wxNavigationKeyEvent *) event;
    evClass = (char*)"wxNavigationKeyEvent";
    rt.addAtom((char*)"wxNavigationKey");
    rt.addAtom(Etype->eName);
 rt.addInt(ev->m_flags);
 rt.addRef(getRef((void *)ev->m_focus,memenv), "wxWindow");
    rt.addTupleCount(4);
  break;
}
case 190: {// wxWindowCreateEvent
    evClass = (char*)"wxWindowCreateEvent";
    rt.addAtom((char*)"wxWindowCreate");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 191: {// wxWindowDestroyEvent
    evClass = (char*)"wxWindowDestroyEvent";
    rt.addAtom((char*)"wxWindowDestroy");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 192: {// wxHelpEvent
    evClass = (char*)"wxHelpEvent";
    rt.addAtom((char*)"wxHelp");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 193: {// wxContextMenuEvent
    evClass = (char*)"wxContextMenuEvent";
    rt.addAtom((char*)"wxContextMenu");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 194: {// wxIdleEvent
    evClass = (char*)"wxIdleEvent";
    rt.addAtom((char*)"wxIdle");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 195: {// wxGridEvent
 wxGridEvent * ev = (wxGridEvent *) event;
    evClass = (char*)"wxGridEvent";
    rt.addAtom((char*)"wxGrid");
    rt.addAtom(Etype->eName);
 rt.addInt(ev->GetRow());
 rt.addInt(ev->GetCol());
 rt.addInt(ev->GetPosition().x);
 rt.addInt(ev->GetPosition().y);
 rt.addBool(ev->Selecting());
 rt.addBool(ev->ControlDown());
 rt.addBool(ev->MetaDown());
 rt.addBool(ev->ShiftDown());
 rt.addBool(ev->AltDown());
    rt.addTupleCount(11);
  break;
}
case 197: {// wxSashEvent
 wxSashEvent * ev = (wxSashEvent *) event;
    evClass = (char*)"wxSashEvent";
    rt.addAtom((char*)"wxSash");
    rt.addAtom(Etype->eName);
 rt.addInt(ev->GetEdge());
 rt.add(ev->GetDragRect());
 rt.addInt(ev->GetDragStatus());
    rt.addTupleCount(5);
  break;
}
case 198: {// wxListEvent
 wxListEvent * ev = (wxListEvent *) event;
    evClass = (char*)"wxListEvent";
    rt.addAtom((char*)"wxList");
    rt.addAtom(Etype->eName);
 rt.addInt(ev->GetKeyCode());
 rt.addInt(ev->m_oldItemIndex);
 rt.addInt(ev->GetIndex());
 rt.addInt(ev->m_col);
 rt.add(ev->GetPoint());
    rt.addTupleCount(7);
  break;
}
case 199: {// wxDateEvent
 wxDateEvent * ev = (wxDateEvent *) event;
    evClass = (char*)"wxDateEvent";
    rt.addAtom((char*)"wxDate");
    rt.addAtom(Etype->eName);
 rt.add(ev->GetDate());
    rt.addTupleCount(3);
  break;
}
case 200: {// wxCalendarEvent
    evClass = (char*)"wxCalendarEvent";
    rt.addAtom((char*)"wxCalendar");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 201: {// wxFileDirPickerEvent
 wxFileDirPickerEvent * ev = (wxFileDirPickerEvent *) event;
    evClass = (char*)"wxFileDirPickerEvent";
    rt.addAtom((char*)"wxFileDirPicker");
    rt.addAtom(Etype->eName);
 rt.add(ev->GetPath());
    rt.addTupleCount(3);
  break;
}
case 202: {// wxColourPickerEvent
 wxColourPickerEvent * ev = (wxColourPickerEvent *) event;
    evClass = (char*)"wxColourPickerEvent";
    rt.addAtom((char*)"wxColourPicker");
    rt.addAtom(Etype->eName);
 rt.add(ev->GetColour());
    rt.addTupleCount(3);
  break;
}
case 203: {// wxFontPickerEvent
 wxFontPickerEvent * ev = (wxFontPickerEvent *) event;
 wxFont * GetFont = new wxFont(ev->GetFont());
 app->newPtr((void *) GetFont,3, memenv);
    evClass = (char*)"wxFontPickerEvent";
    rt.addAtom((char*)"wxFontPicker");
    rt.addAtom(Etype->eName);
 rt.addRef(getRef((void *)GetFont,memenv), "wxFont");
    rt.addTupleCount(3);
  break;
}
case 204: {// wxStyledTextEvent
 wxStyledTextEvent * ev = (wxStyledTextEvent *) event;
    evClass = (char*)"wxStyledTextEvent";
    rt.addAtom((char*)"wxStyledText");
    rt.addAtom(Etype->eName);
 rt.addInt(ev->GetPosition());
 rt.addInt(ev->GetKey());
 rt.addInt(ev->GetModifiers());
 rt.addInt(ev->GetModificationType());
 rt.add(ev->GetText());
 rt.addInt(ev->GetLength());
 rt.addInt(ev->GetLinesAdded());
 rt.addInt(ev->GetLine());
 rt.addInt(ev->GetFoldLevelNow());
 rt.addInt(ev->GetFoldLevelPrev());
 rt.addInt(ev->GetMargin());
 rt.addInt(ev->GetMessage());
 rt.addInt(ev->GetWParam());
 rt.addInt(ev->GetLParam());
 rt.addInt(ev->GetListType());
 rt.addInt(ev->GetX());
 rt.addInt(ev->GetY());
 rt.add(ev->GetDragText());
 rt.addBool(ev->GetDragAllowMove());
 rt.addInt(ev->GetDragResult());
    rt.addTupleCount(22);
  break;
}
case 209: {// wxTreeEvent
 wxTreeEvent * ev = (wxTreeEvent *) event;
    evClass = (char*)"wxTreeEvent";
    rt.addAtom((char*)"wxTree");
    rt.addAtom(Etype->eName);
 rt.add((wxUIntPtr *) ev->GetItem().m_pItem);
 rt.add((wxUIntPtr *) ev->GetOldItem().m_pItem);
 rt.add(ev->GetPoint());
    rt.addTupleCount(5);
  break;
}
case 210: {// wxNotebookEvent
    evClass = (char*)"wxNotebookEvent";
    rt.addAtom((char*)"wxNotebook");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 216: {// wxSpinEvent
 wxSpinEvent * ev = (wxSpinEvent *) event;
    evClass = (char*)"wxSpinEvent";
    rt.addAtom((char*)"wxSpin");
    rt.addAtom(Etype->eName);
 rt.addInt(ev->GetInt());
    rt.addTupleCount(3);
  break;
}
case 218: {// wxSplitterEvent
    evClass = (char*)"wxSplitterEvent";
    rt.addAtom((char*)"wxSplitter");
    rt.addAtom(Etype->eName);
    rt.addTupleCount(2);
  break;
}
case 220: {// wxHtmlLinkEvent
 wxHtmlLinkEvent * ev = (wxHtmlLinkEvent *) event;
    evClass = (char*)"wxHtmlLinkEvent";
    rt.addAtom((char*)"wxHtmlLink");
    rt.addAtom(Etype->eName);
 rt.add(ev->GetLinkInfo());
    rt.addTupleCount(3);
  break;
}
case 222: {// wxAuiNotebookEvent
 wxAuiNotebookEvent * ev = (wxAuiNotebookEvent *) event;
 wxAuiNotebook * GetDragSource = ev->GetDragSource();
    evClass = (char*)"wxAuiNotebookEvent";
    rt.addAtom((char*)"wxAuiNotebook");
    rt.addAtom(Etype->eName);
 rt.addInt(ev->GetOldSelection());
 rt.addInt(ev->GetSelection());
 rt.addRef(getRef((void *)GetDragSource,memenv), "wxAuiNotebook");
    rt.addTupleCount(5);
  break;
}
case 223: {// wxAuiManagerEvent
 wxAuiManagerEvent * ev = (wxAuiManagerEvent *) event;
 wxAuiManager * GetManager = ev->GetManager();
 wxAuiPaneInfo * GetPane = ev->GetPane();
 wxDC * GetDC = ev->GetDC();
    evClass = (char*)"wxAuiManagerEvent";
    rt.addAtom((char*)"wxAuiManager");
    rt.addAtom(Etype->eName);
 rt.addRef(getRef((void *)GetManager,memenv), "wxAuiManager");
 rt.addRef(getRef((void *)GetPane,memenv), "wxAuiPaneInfo");
 rt.addInt(ev->GetButton());
 rt.addBool(ev->veto_flag);
 rt.addBool(ev->canveto_flag);
 rt.addRef(getRef((void *)GetDC,memenv), "wxDC");
    rt.addTupleCount(8);
  break;
}
 }

 rt.addTupleCount(5);
 if(cb->fun_id) {
   rt.addRef(getRef((void *)event,memenv), evClass);
   rt.addTupleCount(2);
   rt.addInt(cb->fun_id);
   rt.addAtom("_wx_invoke_cb_");
   rt.addTupleCount(3);
   pre_callback();
   send_res =  rt.send();
   if(send_res) handle_event_callback(port, cb->listener);
   app->clearPtr((void *) event);
 } else {
   send_res =  rt.send();
   if(cb->skip) event->Skip();
 };
 return send_res;
 }
