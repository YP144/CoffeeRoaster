void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x413462), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Screen1, lv_color_hex(0x62308B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel2 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel2, 214);
    lv_obj_set_height(ui_Panel2, 68);
    lv_obj_set_x(ui_Panel2, 0);
    lv_obj_set_y(ui_Panel2, -86);
    lv_obj_set_align(ui_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0x392C52), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel2, lv_color_hex(0x392C52), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, -55);
    lv_obj_set_y(ui_Label1, -89);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "ET (°C)");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, -110);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "TEMPERATUR");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, 55);
    lv_obj_set_y(ui_Label3, -89);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "DT (°C)");
    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel1, 1);
    lv_obj_set_height(ui_Panel1, 35);
    lv_obj_set_x(ui_Panel1, 0);
    lv_obj_set_y(ui_Panel1, -76);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label5 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, -55);
    lv_obj_set_y(ui_Label5, -68);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "00.00");
    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, 55);
    lv_obj_set_y(ui_Label4, -68);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "00.00");
    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel4 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel4, 214);
    lv_obj_set_height(ui_Panel4, 54);
    lv_obj_set_x(ui_Panel4, -2);
    lv_obj_set_y(ui_Panel4, -19);
    lv_obj_set_align(ui_Panel4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel4, lv_color_hex(0x392C52), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel4, lv_color_hex(0x392C52), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, 0);
    lv_obj_set_y(ui_Label7, -37);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "FAN (%)");
    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel3 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel3, 55);
    lv_obj_set_height(ui_Panel3, 27);
    lv_obj_set_x(ui_Panel3, -55);
    lv_obj_set_y(ui_Panel3, 140);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0x25043F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel3, lv_color_hex(0x25043F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Panel3, 150, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label8, -55);
    lv_obj_set_y(ui_Label8, 117);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "TIME");
    lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label9, -55);
    lv_obj_set_y(ui_Label9, 140);
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "00:00");
    lv_obj_set_style_text_color(ui_Label9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label9, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button2 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button2, 37);
    lv_obj_set_height(ui_Button2, 31);
    lv_obj_set_x(ui_Button2, -65);
    lv_obj_set_y(ui_Button2, -15);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0xE67DDE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label10, 0);
    lv_obj_set_y(ui_Label10, -15);
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "00");
    lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label10, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button1 = lv_btn_create(ui_Screen1);
//    lv_obj_set_event_cb(ui_Button1, btn_event_cb);
    lv_obj_set_width(ui_Button1, 37);
    lv_obj_set_height(ui_Button1, 31);
    lv_obj_set_x(ui_Button1, 65);
    lv_obj_set_y(ui_Button1, -15);
    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0xE67DDE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label11 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label11, -65);
    lv_obj_set_y(ui_Label11, -15);
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "-");
    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label11, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, 66);
    lv_obj_set_y(ui_Label6, -15);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "+");
    lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label6, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel5 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel5, 214);
    lv_obj_set_height(ui_Panel5, 94);
    lv_obj_set_x(ui_Panel5, 0);
    lv_obj_set_y(ui_Panel5, 60);
    lv_obj_set_align(ui_Panel5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel5, lv_color_hex(0x392C52), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel5, lv_color_hex(0x392C52), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label12 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label12, 0);
    lv_obj_set_y(ui_Label12, 22);
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label12, "HEATER (%)");
    lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button3 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button3, 37);
    lv_obj_set_height(ui_Button3, 31);
    lv_obj_set_x(ui_Button3, -65);
    lv_obj_set_y(ui_Button3, 45);
    lv_obj_set_align(ui_Button3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0xE67DDE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label13, 1);
    lv_obj_set_y(ui_Label13, 45);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "00");
    lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label13, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button4 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button4, 37);
    lv_obj_set_height(ui_Button4, 31);
    lv_obj_set_x(ui_Button4, 65);
    lv_obj_set_y(ui_Button4, 45);
    lv_obj_set_align(ui_Button4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button4, lv_color_hex(0xE67DDE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label14, -65);
    lv_obj_set_y(ui_Label14, 45);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "-");
    lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label15 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label15, 65);
    lv_obj_set_y(ui_Label15, 45);
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "+");
    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel6 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel6, 55);
    lv_obj_set_height(ui_Panel6, 23);
    lv_obj_set_x(ui_Panel6, 0);
    lv_obj_set_y(ui_Panel6, 93);
    lv_obj_set_align(ui_Panel6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel6, lv_color_hex(0x25043F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel6, lv_color_hex(0x25043F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Panel6, 150, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label17 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label17, 0);
    lv_obj_set_y(ui_Label17, 73);
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label17, "Temp. Heater  (°C)");
    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label17, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label16 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label16, 0);
    lv_obj_set_y(ui_Label16, 94);
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label16, "00.00");
    lv_obj_set_style_text_color(ui_Label16, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label16, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label18 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label18, 55);
    lv_obj_set_y(ui_Label18, 117);
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label18, "CURRENT (mA)");
    lv_obj_set_style_text_color(ui_Label18, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label18, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel7 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel7, 55);
    lv_obj_set_height(ui_Panel7, 27);
    lv_obj_set_x(ui_Panel7, 55);
    lv_obj_set_y(ui_Panel7, 140);
    lv_obj_set_align(ui_Panel7, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel7, lv_color_hex(0x25043F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel7, lv_color_hex(0x25043F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Panel7, 150, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label19 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label19, 55);
    lv_obj_set_y(ui_Label19, 140);
    lv_obj_set_align(ui_Label19, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label19, "00.00");
    lv_obj_set_style_text_color(ui_Label19, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label19, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

}


void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen1);
}
