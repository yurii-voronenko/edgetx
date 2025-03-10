/*
 * Copyright (C) EdgeTX
 *
 * Based on code named
 *   opentx - https://github.com/opentx/opentx
 *   th9x - http://code.google.com/p/th9x
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

/*
 * Formatting octal codes available in TR_ strings:
 *  \037\x           -sets LCD x-coord (x value in octal)
 *  \036             -newline
 *  \035             -horizontal tab (ARM only)
 *  \001 to \034     -extended spacing (value * FW/2)
 *  \0               -ends current string
 */

#define TR_MIN_PLURAL2 2
#define TR_MAX_PLURAL2 2
// For this number of minute in the last decimal place singular form is used in plural
#define TR_USE_SINGULAR_IN_PLURAL 1
#define TR_USE_PLURAL2_SPECIAL_CASE 0
// If the number of minutes is above this value PLURAL2 is used
#define TR_USE_PLURAL2 INT_MAX

#define TR_MINUTE_SINGULAR             "minute"
#define TR_MINUTE_PLURAL1              "minutes"
#define TR_MINUTE_PLURAL2              "minutes"

#define TR_OFFON                       "OFF","ON"
#define TR_MMMINV                      "---","リバース"
#define TR_VBEEPMODE                   "消音","アラームのみ","キー音なし","すべて"
#define TR_VBLMODE                     "OFF","クリック時",TR("Ctrl","操作時"),"両方","ON"
#define TR_TRNMODE                     "OFF","加算","置換"
#define TR_TRNCHN                      "CH1","CH2","CH3","CH4"

#define TR_AUX_SERIAL_MODES            "OFF","テレメトリーミラー","テレメトリーIN","SBUSトレーナー","LUAスクリプト","CLI","GPS","デバッグ","外部モジュール"
#define TR_SWTYPES                     "なし","トグル","2POS","3POS"
#define TR_POTTYPES                    "なし",TR("Pot w. det","ダイヤル(ノッチ有)"),TR("Multipos","マルチPOSスイッチ"),"ダイヤル","スライダー"
#define TR_VPERSISTENT                 "無効","飛行時","手動リセット"
#define TR_COUNTRY_CODES               TR("US","アメリカ"),TR("JP","日本"),TR("EU","ヨーロッパ")
#define TR_USBMODES                    "確認",TR("Joyst","JoyStick"),TR("SDカード","ストレージ"),"シリアル"
#define TR_JACK_MODES                  "確認","音声","トレーナー"
#define TR_TELEMETRY_PROTOCOLS         "FrSky S.PORT","FrSky D","FrSky D (cable)","TBS Crossfire","Spektrum","AFHDS2A IBUS","Multi Telemetry"

#define TR_SBUS_INVERSION_VALUES       "標準","リバースなし"
#define TR_MULTI_CUSTOM                "カスタム"
#define TR_VTRIMINC                    "ステップExpo","ステップ極小","ステップ小","ステップ中","ステップ大"
#define TR_VDISPLAYTRIMS               "非表示","変更時","常時表示"
#define TR_VBEEPCOUNTDOWN              "消音","ビープ","音声","バイブレート",TR2_2("B & H","Beeps & Haptic"),TR("V & H","Voice & Haptic")
#define TR_COUNTDOWNVALUES             "5秒","10秒","20秒","30秒"
#define TR_VVARIOCENTER                "トーン","消音"
#define TR_CURVE_TYPES                 "スタンダード","カスタム"

#define TR_ADCFILTERVALUES             "グローバル","OFF","ON"

#define TR_VCURVETYPE                  "Diff","Expo","Func","Cstm"
#define TR_VCURVEFUNC                  "---","x>0","x<0","|x|","f>0","f<0","|f|"
#define TR_VMLTPX                      "加算","乗算","置換"
#define TR_VMLTPX2                     "+=","*=",":="

#if LCD_W >= 212
  #define TR_CSWTIMER                  "Timer"
  #define TR_CSWSTICKY                 "Stcky"
  #define TR_CSWRANGE                  "Range"
  #define TR_CSWSTAY                   "Edge"
#else
  #define TR_CSWTIMER                  "Tim"
  #define TR_CSWSTICKY                 "Stky"
  #define TR_CSWRANGE                  "Rnge"
  #define TR_CSWSTAY                   "Edge"
#endif

#define TR_CSWEQUAL                    "a=x"
#define TR_VCSWFUNC                    "---",TR_CSWEQUAL,"a" STR_CHAR_TILDE "x","a>x","a<x",TR_CSWRANGE,"|a|>x","|a|<x","AND","OR","XOR",TR_CSWSTAY,"a=b","a>b","a<b",STR_CHAR_DELTA,"≥x","|",STR_CHAR_DELTA,"|≥x",TR_CSWTIMER,TR_CSWSTICKY

#define TR_SF_TRAINER                  "トレーナー"
#define TR_SF_INST_TRIM                "Inst.トリム"
#define TR_SF_RESET                    "リセット"
#define TR_SF_SET_TIMER                "設定"
#define TR_SF_VOLUME                   "ダイヤル"
#define TR_SF_FAILSAFE                 "フェイルセーフ"
#define TR_SF_RANGE_CHECK              "レンジチェック"
#define TR_SF_MOD_BIND                 "モジュールバインド"
 
#define TR_SOUND                       "サウンド再生"
#define TR_PLAY_TRACK                  "音源再生"
#define TR_PLAY_VALUE                  TR("Play Val","再生値")
#define TR_SF_HAPTIC                   "バイブレート"
#define TR_SF_PLAY_SCRIPT              "LUAスクリプト"
#define TR_SF_BG_MUSIC                 "BGM再生"
#define TR_SF_BG_MUSIC_PAUSE           "BGM一時停止"
#define TR_SF_LOGS                     "SDログ出力"
#define TR_ADJUST_GVAR                 "G変数修正"
#define TR_SF_BACKLIGHT                "バックライト"
#define TR_SF_VARIO                    "バリオ"
#define TR_SF_TEST                     "テスト"
#define TR_SF_SAFETY                   TR("Overr.","上書き")

#define TR_SF_SCREENSHOT               "画面キャプチャ"
#define TR_SF_RACING_MODE              "レースモード"
#define TR_SF_DISABLE_TOUCH            "非タッチ"
#define TR_SF_SET_SCREEN               "メインスクリーン設定"
#define TR_SF_RESERVE                  "[予備]"

#define TR_FSW_RESET_TELEM             TR("Telm", "テレメトリー")

#if LCD_W >= 212
  #define TR_FSW_RESET_TIMERS          "タイマー1","タイマー2","タイマー3"
#else
  #define TR_FSW_RESET_TIMERS          "Tmr1","Tmr2","Tmr3"
#endif

#define TR_VFSWRESET                   TR_FSW_RESET_TIMERS,TR("すべて","飛行時"),TR_FSW_RESET_TELEM

#define TR_FUNCSOUNDS                  TR("Bp1","Beep1"),TR("Bp2","Beep2"),TR("Bp3","Beep3"),TR("Wrn1","Warn1"),TR("Wrn2","Warn2"),TR("Chee","Cheep"),TR("Rata","Ratata"),"Tick",TR("Sirn","Siren"),"Ring",TR("SciF","SciFi"),TR("Robt","Robot"),TR("Chrp","Chirp"),"Tada",TR("Crck","Crickt"),TR("Alrm","AlmClk")

#define LENGTH_UNIT_IMP                "ft"
#define SPEED_UNIT_IMP                 "mph"
#define LENGTH_UNIT_METR               "m"
#define SPEED_UNIT_METR                "kmh"

#define TR_VUNITSSYSTEM                "メートル法","ヤードポンド法"
#define TR_VTELEMUNIT                  "-","V","A","mA","kts","m/s","f/s","kmh","mph","m","ft","@C","@F","%","mAh","W","mW","dB","rpm","g","@","rad","ml","fOz","mlm","Hz","ms","us","km","dBm"

#define STR_V                          (STR_VTELEMUNIT[1])
#define STR_A                          (STR_VTELEMUNIT[2])

#define TR_VTELEMSCREENTYPE            "無効","数値","バー","スクリプト"
#define TR_GPSFORMAT                   "DMS","NMEA"


#define TR_VSWASHTYPE                  "---","120","120X","140","90"

#define TR_STICK_NAMES                 "Rud", "Ele", "Thr", "Ail"
#define TR_SURFACE_NAMES               "ST", "TH"

#if defined(PCBNV14)
#define  TR_RFPOWER_AFHDS2             "Default","High"
#endif

#define TR_ROTARY_ENCODERS
#define TR_ROTENC_SWITCHES

#define TR_ON_ONE_SWITCHES             "ON","One"

#if defined(COLORLCD)
  #define TR_ROTARY_ENC_OPT         "標準","リバース"
#else
  #define TR_ROTARY_ENC_OPT         "標準","リバース","V-I H-N","V-I H-A"
#endif

#if defined(IMU)
  #define TR_IMU_VSRCRAW               "チルトX軸","チルトY軸",
#else
  #define TR_IMU_VSRCRAW
#endif

#if defined(HELI)
  #define TR_CYC_VSRCRAW               "CYC1","CYC2","CYC3"
#else
  #define TR_CYC_VSRCRAW               "[C1]","[C2]","[C3]"
#endif


#define TR_SRC_BATT                    "Batt"
#define TR_SRC_TIME                    "Time"
#define TR_SRC_GPS                     "GPS"
#define TR_SRC_TIMER                   "Tmr"

#define TR_VTMRMODES                   "OFF","ON","Strt","THs","TH%","THt"
#define TR_VTRAINER_MASTER_OFF         "OFF"
#define TR_VTRAINER_MASTER_JACK        "マスター/Jack"
#define TR_VTRAINER_SLAVE_JACK         "スレーブ/Jack"
#define TR_VTRAINER_MASTER_SBUS_MODULE "マスター/SBUSモジュール"
#define TR_VTRAINER_MASTER_CPPM_MODULE "マスター/CPPMモジュール"
#define TR_VTRAINER_MASTER_BATTERY     "マスター/シリアル"
#define TR_VTRAINER_BLUETOOTH          "マスター/" TR("BT","Bluetooth"), "スレーブ/" TR("BT","Bluetooth")
#define TR_VTRAINER_MULTI              "マスター/Multi"
#define TR_VFAILSAFE                   "設定なし","ホールド","カスタム","信号なし","受信機"
#define TR_VSENSORTYPES                "カスタム","演算"
#define TR_VFORMULAS                   "加算値","平均値","最小値","最大値","乗算値","合計値","セル","消費量","距離"
#define TR_VPREC                       "0.--","0.0 ","0.00"
#define TR_VCELLINDEX                  "最低値","1","2","3","4","5","6","最高値","差分"
#define TR_TEXT_SIZE                   "標準","極小","小","中","2倍"
#define TR_SUBTRIMMODES                STR_CHAR_DELTA " (中央)","= (全体)"
#define TR_TIMER_DIR                   TR("Remain", "残り時間表示"), TR("Elaps.", "経過時間表示")

#if defined(COLORLCD)
#if defined(BOLD)
#define TR_FONT_SIZES                  "STD"
#else
#define TR_FONT_SIZES                  "STD","BOLD","XXS","XS","L","XL","XXL"
#endif
#endif

#if defined(PCBFRSKY)
  #define TR_ENTER                     "[ENTER]"
#elif defined(PCBNV14)
  #define TR_ENTER                     "[NEXT]"
#else
  #define TR_ENTER                     "[MENU]"
#endif

#if defined(COLORLCD)
  #define TR_EXIT                      "RTN"
  #define TR_OK                        TR_ENTER
#else
  #define TR_EXIT                      "EXIT"
  #define TR_OK                        TR("\010" "\010" "\010" "[OK]", "\010" "\010" "\010" "\010" "\010" "[OK]")
#endif

#if defined(PCBTARANIS)
  #define TR_POPUPS_ENTER_EXIT         TR(TR_EXIT "\010" TR_ENTER, TR_EXIT "\010" "\010" "\010" "\010" TR_ENTER)
#else
  #define TR_POPUPS_ENTER_EXIT         TR_ENTER "\010" TR_EXIT
#endif

#define TR_FREE                        "フリー"
#define TR_YES                         "Yes"
#define TR_NO                          "No"
#define TR_DELETEMODEL                 "モデルを削除"
#define TR_COPYINGMODEL                "モデルをコピー..."
#define TR_MOVINGMODEL                 "モデルを移動..."
#define TR_LOADINGMODEL                "モデルを読み込み..."
#define TR_UNLABELEDMODEL              "ラベルなし"
#define TR_NAME                        "名称"
#define TR_MODELNAME                   "モデル名"
#define TR_PHASENAME                   "モード名"
#define TR_MIXNAME                     "ミキサー名称"
#define TR_INPUTNAME                   TR("入力", "入力名")
#define TR_EXPONAME                    TR("名称", "カーブ名")
#define TR_BITMAP                      "モデルイメージ"
#define TR_NO_PICTURE                  "画像なし"
#define TR_TIMER                       TR("タイマー", "タイマー ")
#define TR_START                       "スタート"
#define TR_ELIMITS                     TR("E.Limit", "リミット拡張")
#define TR_ETRIMS                      TR("E.Trims", "トリム拡張")
#define TR_TRIMINC                     "トリムステップ"
#define TR_DISPLAY_TRIMS               TR("Show Trims", "トリム表示")
#define TR_TTRACE                      TR("T-Source", INDENT "ソース")
#define TR_TTRIM                       TR("T-Trim-Idle", INDENT "アイドル時トリム")
#define TR_TTRIM_SW                    TR("T-Trim-Sw", INDENT "トリムスイッチ")
#define TR_BEEPCTR                     TR("Ctr Beep", "センタービープ")
#define TR_USE_GLOBAL_FUNCS            TR("Glob.Funcs", "グローバルFuncs利用")
#define TR_PROTOCOL                    TR("Proto", "プロトコル")
  #define TR_PPMFRAME                  INDENT "PPMフレーム"
  #define TR_REFRESHRATE               TR(INDENT "Refresh", INDENT "リフレッシュレート")
  #define STR_WARN_BATTVOLTAGE         TR(INDENT "Output is VBAT: ", INDENT "警告: 出力レベル VBAT: ")
#define TR_WARN_5VOLTS                 "警告: 出力レベル 5V"
#define TR_MS                          "ms"
#define TR_SWITCH                      "スイッチ"
#define TR_FUNCTION_SWITCHES           "Customizable switches"
#define TR_SF_SWITCH                   "Trigger"
#define TR_TRIMS                       "トリム"
#define TR_FADEIN                      "フェードイン"
#define TR_FADEOUT                     "フェードアウト"
#define TR_DEFAULT                     "(デフォルト)"
#if defined(COLORLCD)
  #define TR_CHECKTRIMS                "現在の飛行モードのトリムをチェック"
#else
  #define TR_CHECKTRIMS                CENTER "\006チェック\012トリム"
#endif
#define OFS_CHECKTRIMS                 CENTER_OFS+(9*FW)
#define TR_SWASHTYPE                   "スワッシュタイプ"
#define TR_COLLECTIVE                  TR("Collective", "Coll. pitch ソース")
#define TR_AILERON                     TR("Lateral cyc.", "Lateral cyc. ソース")
#define TR_ELEVATOR                    TR("Long. cyc.", "Long. cyc. ソース")
#define TR_SWASHRING                   "スワッシュリング"
#define TR_MODE                        "モード"
#if LCD_W > LCD_H
  #define TR_LEFT_STICK                "Left"
#else
  #define TR_LEFT_STICK                "Left"
#endif
#define TR_SUBTYPE                     INDENT "サブタイプ"
#define TR_NOFREEEXPO                  "Expoが未設定です!!"
#define TR_NOFREEMIXER                 "ミキサーが未設定です!!"
#define TR_SOURCE                       "ソース"
#define TR_WEIGHT                      "ウェイト"
#define TR_SIDE                        "末端"
#define TR_OFFSET                      "オフセット"
#define TR_TRIM                        "トリム"
#define TR_DREX                        "DRex"
#define DREX_CHBOX_OFFSET              30
#define TR_CURVE                       "カーブ"
#define TR_FLMODE                      TR("Mode", "モード")
#define TR_MIXWARNING                  "警告"
#define TR_OFF                         "OFF"
#define TR_ANTENNA                     "アンテナ"
#define TR_NO_INFORMATION              TR("No info", "情報なし")
#define TR_MULTPX                      "複数ミキサー"
#define TR_DELAYDOWN                   TR("Delay dn", "遅延")
#define TR_DELAYUP                     "遅延アップ"
#define TR_SLOWDOWN                    TR("Slow dn", "スローダウン")
#define TR_SLOWUP                      "スローアップ"
#define TR_MIXES                       "ミキサー"
#define TR_CV                          "CV"
#if defined(PCBNV14)
#define TR_GV                          "GV"
#else
#define TR_GV                          TR("G", "GV")
#endif
#define TR_RANGE                       INDENT "範囲"
#define TR_CENTER                      INDENT "中央値"
#define TR_ALARM                       "アラーム"
#define TR_BLADES                      "ブレード/ポール"
#define TR_SCREEN                      "スクリーン\001"
#define TR_SOUND_LABEL                 "音声"
#define TR_LENGTH                      "長さ"
#define TR_BEEP_LENGTH                 "ビープ音の長さ"
#define TR_BEEP_PITCH                  "ビープ音のピッチ"
#define TR_HAPTIC_LABEL                "バイブレート"
#define TR_STRENGTH                    "強さ"
#define TR_IMU_LABEL                   "IMU"
#define TR_IMU_OFFSET                  "オフセット"
#define TR_IMU_MAX                     "最大"
#define TR_CONTRAST                    "コントラスト"
#define TR_ALARMS_LABEL                "アラーム"
#define TR_BATTERY_RANGE               TR("Batt. range", "バッテリー表示範囲")
#define TR_BATTERYCHARGING             "充電中..."
#define TR_BATTERYFULL                 "フル充電"
#define TR_BATTERYNONE                 "バッテリー空!!"
#define TR_BATTERYWARNING              "バッテリー低値"
#define TR_INACTIVITYALARM             "無効化"
#define TR_MEMORYWARNING               "メモリ低"
#define TR_ALARMWARNING                "音声OFF"
#define TR_RSSI_SHUTDOWN_ALARM         TR("RSSI shutdown", "シャットダウン時 RSSIを確認")
#define TR_MODEL_STILL_POWERED         "電源が入ったままです"
#define TR_USB_STILL_CONNECTED         "USBが接続されたままです"
#define TR_MODEL_SHUTDOWN              "シャットダウンしますか？"
#define TR_PRESS_ENTER_TO_CONFIRM      "Enterを押して確認してください"
#define TR_THROTTLE_LABEL              "Throttle"
#define TR_THROTTLE_START              "Throttle Start"
#define TR_THROTTLEREVERSE             TR("T-Reverse", INDENT "リバース")
#define TR_MINUTEBEEP                  TR("Minute", "分単位コール")
#define TR_BEEPCOUNTDOWN               INDENT "カウントダウン"
#define TR_PERSISTENT                  TR(INDENT "Persist.", INDENT "持続設定")
#define TR_BACKLIGHT_LABEL             "バックライト"
#define TR_GHOST_MENU_LABEL            "GHOSTメニュー"
#define TR_STATUS                      "ステータス"
#define TR_BLDELAY                     INDENT "持続時間"
#define TR_BLONBRIGHTNESS              INDENT "バックライトON"
#define TR_BLOFFBRIGHTNESS             INDENT "バックライトOFF"
#define TR_KEYS_BACKLIGHT              "キー バックライト"
#define TR_BLCOLOR                     "カラー"
#define TR_SPLASHSCREEN                "起動イメージ"
#define TR_PLAY_HELLO                  "起動時サウンド"
#define TR_PWR_ON_DELAY                "電源ON遅延"
#define TR_PWR_OFF_DELAY               "電源OFF遅延"
#define TR_THROTTLE_WARNING            TR(INDENT "T-Warning", INDENT "Throttle状態")
#define TR_CUSTOM_THROTTLE_WARNING     TR(INDENT INDENT INDENT INDENT "Cust-Pos", INDENT INDENT INDENT INDENT "カスタム位置？")
#define TR_CUSTOM_THROTTLE_WARNING_VAL TR("Pos. %", "位置 %")
#define TR_SWITCHWARNING               TR(INDENT "S-Warning", INDENT "スイッチ位置")
#define TR_POTWARNINGSTATE             TR(INDENT "Pot&Slid.", INDENT "ダイヤル&スライダー")
#define TR_SLIDERWARNING               TR(INDENT "Slid. pos.", INDENT "スライダー位置")
#define TR_POTWARNING                  TR(INDENT "Pot warn.", INDENT "ダイヤル位置")
#define TR_TIMEZONE                    "タイムゾーン"
#define TR_ADJUST_RTC                  "内蔵時計修正"
#define TR_GPS                         "GPS"
#define TR_DEF_CHAN_ORD                TR("Def chan order", "チャンネルマップ初期値")
#define TR_STICKS                      "スティック"
#define TR_POTS                        "ダイヤル"
#define TR_SWITCHES                    "スイッチ"
#define TR_SWITCHES_DELAY              TR("Play delay", "遅延(スイッチ位置)")
#define TR_SLAVE                       CENTER "スレーブ"
#define TR_MODESRC                     "モード\006% ソース"
#define TR_MULTIPLIER                  "倍率"
#define TR_CAL                         "設定"
#define TR_CALIBRATION                 "キャリブレーション"
#define TR_VTRIM                       "トリム - +"
#define TR_CALIB_DONE                  "キャリブレーション 完了"
#if defined(PCBHORUS)
  #define TR_MENUTOSTART               "[Enter]を押してスタート"
  #define TR_SETMIDPOINT               "スティック/ダイヤル/スライダーを中央にして[Enter]"
  #define TR_MOVESTICKSPOTS            "スティック/ダイヤル/スライダーを動かして[Enter]"
#elif defined(COLORLCD)
  #define TR_MENUTOSTART               TR_ENTER " スタート"
  #define TR_SETMIDPOINT               "スティック/スライダーを中央に合わせます"
  #define TR_MOVESTICKSPOTS            "スティック/スライダーを動かします"
#else
  #define TR_MENUTOSTART               CENTER "\010" TR_ENTER " TO START"
  #define TR_SETMIDPOINT               TR(CENTER "\004SET STICKS MIDPOINT", CENTER "\004CENTER STICKS/SLIDERS")
  #define TR_MOVESTICKSPOTS            CENTER "\006MOVE STICKS/POTS"
  #define TR_MENUWHENDONE              CENTER "\006" TR_ENTER " WHEN DONE"
#endif
#define TR_TXnRX                       "Tx:\0Rx:"
#define OFS_RX                         4
#define TR_NODATA                      CENTER "データなし"
#define TR_US                          "us"
#define TR_HZ                          "Hz"
#define TR_TMIXMAXMS                   "Tmix max"
#define TR_FREE_STACK                  "Free stack"
#define TR_INT_GPS_LABEL               "内蔵GPS"
#define TR_HEARTBEAT_LABEL             "Heartbeat"
#define TR_LUA_SCRIPTS_LABEL           "Lua scripts"
#define TR_FREE_MEM_LABEL              "Free mem"
#define TR_DURATION_MS                 TR("[D]","継続時間(ms): ")
#define TR_INTERVAL_MS                 TR("[I]","Interval(ms): ")
#define TR_MEM_USED_SCRIPT             "Script(B): "
#define TR_MEM_USED_WIDGET             "Widget(B): "
#define TR_MEM_USED_EXTRA              "Extra(B): "
#define TR_STACK_MIX                   "Mix: "
#define TR_STACK_AUDIO                 "Audio: "
#define TR_GPS_FIX_YES                 "Fix: Yes"
#define TR_GPS_FIX_NO                  "Fix: No"
#define TR_GPS_SATS                    "Sats: "
#define TR_GPS_HDOP                    "Hdop: "
#define TR_STACK_MENU                  "Menu: "
#define TR_TIMER_LABEL                 "Timer"
#define TR_THROTTLE_PERCENT_LABEL      "Throttle %"
#define TR_BATT_LABEL                  "Battery"
#define TR_SESSION                     "Session"
#define TR_MENUTORESET                 TR_ENTER " リセット"
#define TR_PPM_TRAINER                 "TR"
#define TR_CH                          "CH"
#define TR_MODEL                       "モデル名"
#define TR_FM                          "FM"
#define TR_EEPROMLOWMEM                "EEPROMメモリ低"
#define TR_PRESS_ANY_KEY_TO_SKIP       "任意のキーを押してスキップします"
#define TR_THROTTLE_NOT_IDLE           "Throttleがアイドル値ではありません"
#define TR_ALARMSDISABLED              "アラーム無効"
#define TR_PRESSANYKEY                 TR("\010Press any Key", "任意のキーを押してください")
#define TR_BADEEPROMDATA               "EEPROMデータが不良です"
#define TR_BAD_RADIO_DATA              "送信機データ不具合、もしくは存在しません"
#define TR_RADIO_DATA_RECOVERED        TR3("バックアップした送信機データを使用","バックアップした送信機設定を使用","バックアップから送信機設定を復元")
#define TR_RADIO_DATA_UNRECOVERABLE    TR3("送信機設定が無効です","送信機設定が有効ではありません", "有効な送信機設定を読み込めません")
#define TR_EEPROMFORMATTING            "EEPROMをフォーマットします"
#define TR_STORAGE_FORMAT              "ストレージをフォーマットします"
#define TR_EEPROMOVERFLOW              "EEPROMがオーバーフローしています"
#define TR_RADIO_SETUP                 "送信機セットアップ"
#define TR_MENUTRAINER                 "トレーナー"
#define TR_MENUSPECIALFUNCS            "グローバルファンクション"
#define TR_MENUVERSION                 "バージョン"
#define TR_MENU_RADIO_SWITCHES         TR("SWITCHES", "スイッチテスト")
#define TR_MENU_RADIO_ANALOGS          TR("ANALOGS", "アナログ入力テスト")
#define TR_MENU_RADIO_ANALOGS_CALIB    "アナログ キャリブレーション"
#define TR_MENU_RADIO_ANALOGS_RAWLOWFPS "RAW アナログ (5 Hz)"
#define TR_MENUCALIBRATION             "キャリブレーション"
#define TR_MENU_FSWITCH                "CUSTOMIZABLE SWITCHES"
#if defined(COLORLCD)
  #define TR_TRIMS2OFFSETS             "トリム => サブトリム"
#else
  #define TR_TRIMS2OFFSETS             "\006トリム => サブトリム"
#endif
#define TR_CHANNELS2FAILSAFE           "チャンネル群=>フェイルセーフ"
#define TR_CHANNEL2FAILSAFE            "チャンネル=>フェイルセーフ"
#define TR_MENUMODELSEL                TR("MODELSEL", "モデル選択")
#define TR_MENU_MODEL_SETUP            TR("SETUP", "モデル設定")
#define TR_MENUFLIGHTMODES             "飛行モード群"
#define TR_MENUFLIGHTMODE              "飛行モード"
#define TR_MENUHELISETUP               "ヘリ セットアップ"

  #define TR_MENUINPUTS                "入力"
  #define TR_MENULIMITS                "出力"
#define TR_MENUCURVES                  "カーブ群"
#define TR_MENUCURVE                   "カーブ"
#define TR_MENULOGICALSWITCH           "論理スイッチ"
#define TR_MENULOGICALSWITCHES         "論理スイッチ群"
#define TR_MENUCUSTOMFUNC              "スペシャルファンクション"
#define TR_MENUCUSTOMSCRIPTS           "カスタムスクリプト"
#define TR_MENUTELEMETRY               "テレメトリー"
#define TR_MENUSTAT                    "統計"
#define TR_MENUDEBUG                   "デバッグ"
#define TR_MONITOR_CHANNELS1           "チャンネルモニター 1-8"
#define TR_MONITOR_CHANNELS2           "チャンネルモニター 9-16"
#define TR_MONITOR_CHANNELS3           "チャンネルモニター 17-24"
#define TR_MONITOR_CHANNELS4           "チャンネルモニター 25-32"
#define TR_MONITOR_SWITCHES            "論理スイッチモニター"
#define TR_MONITOR_OUTPUT_DESC         "出力"
#define TR_MONITOR_MIXER_DESC          "ミキサー"
  #define TR_RECEIVER_NUM              TR("RxNum", "受信機 No.")
  #define TR_RECEIVER                  "受信機"
#define TR_MULTI_RFTUNE                TR("Freq tune", "周波数微調整")
#define TR_MULTI_RFPOWER               "送信出力"
#define TR_MULTI_WBUS                  "出力"
#define TR_MULTI_TELEMETRY             "テレメトリー"
#define TR_MULTI_VIDFREQ               TR("Vid. freq.", "VTX周波数")
#define TR_RF_POWER                    "送信出力"
#define TR_MULTI_FIXEDID               TR("FixedID", "固定ID")
#define TR_MULTI_OPTION                TR("Option", "オプション値")
#define TR_MULTI_AUTOBIND              TR(INDENT "Bind Ch.", INDENT "チャンネルバインド")
#define TR_DISABLE_CH_MAP              TR("No Ch. map", "CHマップ無効")
#define TR_DISABLE_TELEM               TR("No Telem", "テレメトリー無効")
#define TR_MULTI_DSM_AUTODTECT         TR(INDENT "Autodetect", INDENT "自動検出")
#define TR_MULTI_LOWPOWER              TR(INDENT "Low power", INDENT "低出力モード")
#define TR_MULTI_LNA_DISABLE           INDENT "LNA無効"
#define TR_MODULE_TELEMETRY            TR(INDENT "S.Port", INDENT "S.Portリンク")
#define TR_MODULE_TELEM_ON             TR("ON", "有効")
#define TR_DISABLE_INTERNAL            TR("Disable int.", "内部モジュール無効")
#define TR_MODULE_NO_SERIAL_MODE       TR("!serial mode", "非シリアルモード")
#define TR_MODULE_NO_INPUT             TR("No input", "非シリアル入力")
#define TR_MODULE_NO_TELEMETRY         TR3("No telemetry", "No MULTI_TELEMETRY", "MULTI_テレメトリー検出なし")
#define TR_MODULE_WAITFORBIND          "読込プロトコルでバインド"
#define TR_MODULE_BINDING              TR("Bind...","バインド中")
#define TR_MODULE_UPGRADE_ALERT        TR3("Upg. needed", "Module upgrade required", "モジュール\nアップグレードが必要")
#define TR_MODULE_UPGRADE              TR("Upg. advised", "モジュールアップデートを推奨")
#define TR_REBIND                      "再バインドが必要"
#define TR_REG_OK                      "レジストレーションOK"
#define TR_BIND_OK                     "バインド成功"
#define TR_BINDING_CH1_8_TELEM_ON      "Ch1-8 Telemetry ON"
#define TR_BINDING_CH1_8_TELEM_OFF     "Ch1-8 Telemetry OFF"
#define TR_BINDING_CH9_16_TELEM_ON     "Ch9-16 Telemetry ON"
#define TR_BINDING_CH9_16_TELEM_OFF    "Ch9-16 Telemetry OFF"
#define TR_PROTOCOL_INVALID            TR("Prot. invalid", "プロトコル無効")
#define TR_MODULE_STATUS               TR(INDENT "Status", INDENT "モジュール状態")
#define TR_MODULE_SYNC                 TR(INDENT "Sync", INDENT "Proto 同期ステータス")
#define TR_MULTI_SERVOFREQ             TR("Servo rate", "サーボアップデートレート")
#define TR_MULTI_MAX_THROW             TR("Max. Throw", "Max. throw有効")
#define TR_MULTI_RFCHAN                TR("RF Channel", "送信チャンネル選択")
#define TR_AFHDS3_RX_FREQ              TR("RX freq.", "受信周波数")
#define TR_AFHDS3_ONE_TO_ONE_TELEMETRY TR("Unicast/Tel.", "ユニキャスト/テレメトリー")
#define TR_AFHDS3_ONE_TO_MANY          "マルチキャスト"
#define TR_AFHDS3_ACTUAL_POWER         TR("Act. pow", "実電力")
#define TR_AFHDS3_POWER_SOURCE         TR("Power src.", "出力ソース")
#define TR_FLYSKY_TELEMETRY            TR("FlySky RSSI #", "再コールせずFlySky RSSI値を使用")
#define TR_GPS_COORDS_FORMAT           TR("GPS Coords", "GPS座標形式")
#define TR_VARIO                       TR("Vario", "バリオメーター")
#define TR_PITCH_AT_ZERO               "ゼロ ピッチ"
#define TR_PITCH_AT_MAX                "最大 ピッチ"
#define TR_REPEAT_AT_ZERO              "ゼロ リピート"
#define TR_BATT_CALIB                  TR("Batt. calib", "バッテリー\nキャリブレーション")
#define TR_CURRENT_CALIB               "Current calib"
#define TR_VOLTAGE                     TR(INDENT "Voltage", INDENT "電圧ソース")
#define TR_SELECT_MODEL                "モデル選択"
#define TR_MANAGE_MODELS               "モデル管理"
#define TR_MODELS                      "モデル"
#define TR_SELECT_MODE                 "モード選択"
#define TR_CREATE_MODEL                "モデル作成"
#define TR_FAVORITE_LABEL              "お気に入り"
#define TR_MODELS_MOVED                "未使用モデルを移動"
#define TR_NEW_MODEL                   "新規モデル"
#define TR_INVALID_MODEL               "無効なモデル"
#define TR_EDIT_LABELS                 "ラベル編集"
#define TR_LABEL_MODEL                 "モデルラベル"
#define TR_MOVE_UP                     "上へ移動"
#define TR_MOVE_DOWN                   "下へ移動"
#define TR_ENTER_LABEL                 "ラベル適用"
#define TR_LABEL                       "ラベル"
#define TR_LABELS                      "ラベル"
#define TR_CURRENT_MODEL               "現在のモデル"
#define TR_ACTIVE                      "有効"
#define TR_NEW                         "新規"
#define TR_NEW_LABEL                   "新規ラベル"
#define TR_RENAME_LABEL                "ラベル名変更"
#define TR_DELETE_LABEL                "ラベル削除"
#define TR_DUPLICATE_MODEL             "モデル複製"
#define TR_COPY_MODEL                  "モデルコピー"
#define TR_MOVE_MODEL                  "モデル移動"
#define TR_BACKUP_MODEL                "モデルバックアップ"
#define TR_DELETE_MODEL                "モデル削除"
#define TR_RESTORE_MODEL               "モデル復元"
#define TR_DELETE_ERROR                "削除エラー"
#define TR_SDCARD_ERROR                TR("SD error", "SDカードエラー")
#define TR_SDCARD                      "SDカード"
#define TR_NO_FILES_ON_SD              "SDにファイルがありません!!"
#define TR_NO_SDCARD                   "SDカードがありません"
#define TR_WAITING_FOR_RX              "受信機から応答を待っています..."
#define TR_WAITING_FOR_TX              "送信機から応答を待っています..."
#define TR_WAITING_FOR_MODULE          TR("Waiting module", "モジュールから応答を待っています...")
#define TR_NO_TOOLS                    "ツールはありません"
#define TR_NORMAL                      "標準"
#define TR_NOT_INVERTED                "正方向"
#define TR_NOT_CONNECTED               TR("!Connected", "未接続です");
#define TR_CONNECTED                   "接続しました"
#define TR_FLEX_915                    "FLEX 915MHz"
#define TR_FLEX_868                    "FLEX 868MHz"
#define TR_16CH_WITHOUT_TELEMETRY      TR("16CH without telem.", "16CH テレメトリーなし")
#define TR_16CH_WITH_TELEMETRY         TR("16CH with telem.", "16CH テレメトリーあり")
#define TR_8CH_WITH_TELEMETRY          TR("8CH with telem.", "8CH テレメトリーあり")
#define TR_EXT_ANTENNA                 "外部アンテナ"
#define TR_PIN                         "ピン"
#define TR_UPDATE_RX_OPTIONS           "受信オプションをアップデートしますか ?"
#define TR_UPDATE_TX_OPTIONS           "送信オプションをアップデートしますか ?"
#define TR_MODULES_RX_VERSION          "モジュール / 受信機バージョン"
#define TR_SHOW_MIXER_MONITORS         "Show mixer monitors"
#define TR_MENU_MODULES_RX_VERSION     "モジュール / 受信機バージョン"
#define TR_MENU_FIRM_OPTIONS           "ファームウェアオプション"
#define TR_IMU                         "IMU"
#define TR_STICKS_POTS_SLIDERS         "スティック/ダイヤル/スライダー"
#define TR_PWM_STICKS_POTS_SLIDERS     "PWM スティック/ダイヤル/スライダー"
#define TR_RF_PROTOCOL                 "RFプロトコル"
#define TR_MODULE_OPTIONS              "モジュールオプション"
#define TR_POWER                       "出力"
#define TR_NO_TX_OPTIONS               "送信オプションなし"
#define TR_RTC_BATT                    "内蔵電池"
#define TR_POWER_METER_EXT             "出力メーター\n(外部)"
#define TR_POWER_METER_INT             "出力メーター\n(内部)"
#define TR_SPECTRUM_ANALYSER_EXT       "スペクトラム\n(外部)"
#define TR_SPECTRUM_ANALYSER_INT       "スペクトラム\n(内部)"
#define TR_SDCARD_FULL                 "SDカード空き容量なし"
#if defined(COLORLCD)
#define TR_SDCARD_FULL_EXT             TR_SDCARD_FULL "\nログとスクリーンショット保存が無効"
#else
#define TR_SDCARD_FULL_EXT             TR_SDCARD_FULL "\036Logs and " LCDW_128_480_LINEBREAK "Screenshots disabled"
#endif
#define TR_NEEDS_FILE                  "を含むファイルが必要です"
#define TR_EXT_MULTI_SPEC              "opentx-inv"
#define TR_INT_MULTI_SPEC              "stm-opentx-noinv"
#define TR_INCOMPATIBLE                "非対応"
#define TR_WARNING                     "警告"
#define TR_EEPROMWARN                  "EEPROM"
#define TR_STORAGE_WARNING             "ストレージ"
#define TR_EEPROM_CONVERTING           "EEPROM変換"
#define TR_SDCARD_CONVERSION_REQUIRE   "SDカードの変換が必要です"
#define TR_CONVERTING                  "変換: "
#define TR_THROTTLE_UPPERCASE          "THROTTLE"
#define TR_ALARMSWARN                  "アラーム"
#define TR_SWITCHWARN                  TR("スイッチ", "コントロール")
#define TR_FAILSAFEWARN                "フェイルセーフ"
#define TR_TEST_WARNING                TR("テスト中", "テストビルド")
#define TR_TEST_NOTSAFE                "テストのみで使用"
#define TR_WRONG_SDCARDVERSION         TR("Expected ver: ", "想定バージョン: ")
#define TR_WARN_RTC_BATTERY_LOW        "内蔵電池の低下"
#define TR_WARN_MULTI_LOWPOWER         "低出力モード"
#define TR_BATTERY                     "バッテリー"
#define TR_WRONG_PCBREV                "不正なPCBを検出しました"
#define TR_EMERGENCY_MODE              "エネルギーモード"
#define TR_NO_FAILSAFE                 "フェイルセーフが設定されていません"
#define TR_KEYSTUCK                    "キー不良"
#define TR_VOLUME                      "音量"
#define TR_LCD                         "LCD"
#define TR_BRIGHTNESS                  "輝度"
#define TR_CPU_TEMP                    "CPU温度"
#define TR_CPU_CURRENT                 "電流"
#define TR_CPU_MAH                     "消費量"
#define TR_COPROC                      "CoProc."
#define TR_COPROC_TEMP                 "MB温度"
#define TR_CAPAWARNING                 INDENT "電流が低すぎます"
#define TR_TEMPWARNING                 INDENT "オーバーヒートです"
#define TR_TTL_WARNING                 "警告: 論理値3.3Vを使用します"
#define TR_FUNC                        TR("機能", "ファンクション")
#define TR_V1                          "V1"
#define TR_V2                          "V2"
#define TR_DURATION                    "持続時間"
#define TR_DELAY                       "遅延"
#define TR_SD_CARD                     "SDカード"
#define TR_SDHC_CARD                   "SD-HCカード"
#define TR_NO_SOUNDS_ON_SD             "SDカード内に音声データがありません"
#define TR_NO_MODELS_ON_SD             "SDカード内にモデル情報がありません"
#define TR_NO_BITMAPS_ON_SD            "SDカード内に画像データがありません"
#define TR_NO_SCRIPTS_ON_SD            "SDカード内にスクリプトがありません"
#define TR_SCRIPT_SYNTAX_ERROR         TR("Syntax error", "スクリプト構文エラー")
#define TR_SCRIPT_PANIC                "スクリプトパニック"
#define TR_SCRIPT_KILLED               "スクリプトKillしました"
#define TR_SCRIPT_ERROR                "不明のエラー"
#define TR_PLAY_FILE                   "プレイ"
#define TR_DELETE_FILE                 "削除"
#define TR_COPY_FILE                   "コピー"
#define TR_RENAME_FILE                 "名称変更"
#define TR_ASSIGN_BITMAP               "画像割り当て"
#define TR_ASSIGN_SPLASH               "起動イメージ"
#define TR_EXECUTE_FILE                "実行"
#define TR_REMOVED                     "移動"
#define TR_SD_INFO                     "インフォメーション"
#define TR_NA                          "該当なし"
#define TR_HARDWARE                    "ハードウェア"
#define TR_FORMATTING                  "フォーマット中..."
#define TR_TEMP_CALIB                  "Temp.キャリブ"
#define TR_TIME                        "時間"
#define TR_MAXBAUDRATE                 "最大ボーレート"
#define TR_BAUDRATE                    "ボーレート"
#define TR_SAMPLE_MODE                 "サンプルモード"
#define TR_SAMPLE_MODES                "標準","OneBit"
#define TR_LOADING                     "読み込み中..."
#define TR_DELETE_THEME                "テーマを削除しますか？"
#define TR_SAVE_THEME                  "テーマを保存しますか？"
#define TR_EDIT_COLOR                  "カラー編集"
#define TR_NO_THEME_IMAGE              "テーマ画像はありません"
#define TR_BACKLIGHT_TIMER             "持続時間"

#if defined(COLORLCD)
  #define TR_MODEL_QUICK_SELECT        "モデル クイックセレクト"
#endif

#define TR_SELECT_TEMPLATE_FOLDER      "テンプレートフォルダを選択:"
#define TR_SELECT_TEMPLATE             "モデルテンプレートを選択:"
#define TR_NO_TEMPLATES                "このフォルダにモデルテンプレートは見つかりませんでした"
#define TR_SAVE_TEMPLATE               "テンプレートを保存"
#define TR_BLANK_MODEL                 "空モデル"
#define TR_BLANK_MODEL_INFO            "空モデルの作成"
#define TR_FILE_EXISTS                 "ファイルは既に存在します"
#define TR_ASK_OVERWRITE               "上書きしても良いですか？"

#define TR_BLUETOOTH                   "Bluetooth"
#define TR_BLUETOOTH_DISC              "検索"
#define TR_BLUETOOTH_INIT              "初期化"
#define TR_BLUETOOTH_DIST_ADDR         "ターゲットaddr"
#define TR_BLUETOOTH_LOCAL_ADDR        "ローカルaddr"
#define TR_BLUETOOTH_PIN_CODE          "PINコード"
#define TR_BLUETOOTH_NODEVICES         "デバイスが見つかりません"
#define TR_BLUETOOTH_SCANNING          "検索中..."
#define TR_BLUETOOTH_BAUDRATE          "BT ボーレート"
#if defined(PCBX9E)
#define TR_BLUETOOTH_MODES             "---","有効"
#else
#define TR_BLUETOOTH_MODES             "---","テレメトリー","トレーナー"
#endif

#define TR_SD_INFO_TITLE               "SD INFO"
#define TR_SD_TYPE                     "タイプ:"
#define TR_SD_SPEED                    "速度:"
#define TR_SD_SECTORS                  "セクタ:"
#define TR_SD_SIZE                     "サイズ:"
#define TR_TYPE                        INDENT "タイプ"
#define TR_GLOBAL_VARS                 "グローバル変数"
#define TR_GVARS                       "G変数"
#define TR_GLOBAL_VAR                  "グローバル変数"
#define TR_MENU_GLOBAL_VARS            "グローバル変数群"
#define TR_OWN                         "Own"
#define TR_DATE                        "日付"
#define TR_MONTHS                      { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" }
#define TR_ROTARY_ENCODER              "R.E."
#define TR_ROTARY_ENC_MODE             "選択操作リバース"
#define TR_CHANNELS_MONITOR            "チャンネルモニター"
#define TR_MIXERS_MONITOR              "ミキサーモニター"
#define TR_PATH_TOO_LONG               "パスが長すぎます"
#define TR_VIEW_TEXT                   "テキストビュー"
#define TR_FLASH_BOOTLOADER            "Bootloader書き込み"
#define TR_FLASH_DEVICE                TR("Flash device","デバイスに書き込み")
#define TR_FLASH_EXTERNAL_DEVICE       TR("Flash S.Port", "S.Portデバイスに書き込み")
#define TR_FLASH_RECEIVER_OTA          "OTAにて受信機に書き込み"
#define TR_FLASH_RECEIVER_BY_EXTERNAL_MODULE_OTA "OTAにて外部受信機に書き込み"
#define TR_FLASH_RECEIVER_BY_INTERNAL_MODULE_OTA "OTAにて内部受信機に書き込み"
#define TR_FLASH_FLIGHT_CONTROLLER_BY_EXTERNAL_MODULE_OTA "OTAにて外部FCに書き込み"
#define TR_FLASH_FLIGHT_CONTROLLER_BY_INTERNAL_MODULE_OTA "OTAにて内部FCに書き込み"
#define TR_FLASH_BLUETOOTH_MODULE      TR("Flash BT module", "Bluetoothモジュールに書き込み")
#define TR_FLASH_POWER_MANAGEMENT_UNIT "Flash pwr mngt unit"
#define TR_DEVICE_NO_RESPONSE          TR("Device not responding", "デバイスが応答しません")
#define TR_DEVICE_FILE_ERROR           TR("Device file prob.", "デバイスファイルに問題があります")
#define TR_DEVICE_DATA_REFUSED         TR("Device data refused", "デバイスデータが拒否しました")
#define TR_DEVICE_WRONG_REQUEST        TR("Device access problem", "デバイスアクセスに問題があります")
#define TR_DEVICE_FILE_REJECTED        TR("Device file refused", "デバイスファイルが拒否しました")
#define TR_DEVICE_FILE_WRONG_SIG       TR("Device file sig.", "デバイスファイル sig.")
#define TR_CURRENT_VERSION             TR("Curr Vers: ", "現バージョン: ")
#define TR_FLASH_INTERNAL_MODULE       TR("Flash int. module", "内部モジュールに書き込み")
#define TR_FLASH_INTERNAL_MULTI        TR("Flash Int. Multi", "内部マルチモジュールに書き込み")
#define TR_FLASH_EXTERNAL_MODULE       TR("Flash ext. module", "外部モジュールに書き込み")
#define TR_FLASH_EXTERNAL_MULTI        TR("Flash Ext. Multi", "外部マルチモジュールに書き込み")
#define TR_FLASH_EXTERNAL_ELRS         TR("Flash Ext. ELRS", "外部ELRSに書き込み")
#define TR_FIRMWARE_UPDATE_ERROR       TR("FW update error", "ファームウェアアップデートエラー")
#define TR_FIRMWARE_UPDATE_SUCCESS     "書き込みが成功しました"
#define TR_WRITING                     "書き込み中..."
#define TR_CONFIRM_FORMAT              "フォーマットしますか？"
#define TR_INTERNALRF                  "内部RFモジュール"
#define TR_INTERNAL_MODULE             TR("Int. module", "内部モジュール")
#define TR_EXTERNAL_MODULE             TR("Ext. module", "外部モジュール")
#define TR_OPENTX_UPGRADE_REQUIRED     "OpenTXアップグレードが必要です"
#define TR_TELEMETRY_DISABLED          "Telem. 無効"
#define TR_MORE_OPTIONS_AVAILABLE      "その他のオプション"
#define TR_NO_MODULE_INFORMATION       "モジュール情報なし"
#define TR_EXTERNALRF                  "外部RFモジュール"
#define TR_FAILSAFE                    TR(INDENT "Failsafe", INDENT "フェイルセーフモード")
#define TR_FAILSAFESET                 "フェイルセーフ設定"
#define TR_REG_ID                      "Reg. ID"
#define TR_OWNER_ID                    "オーナー ID"
#define TR_HOLD                        "ホールド"
#define TR_HOLD_UPPERCASE              "ホールド"
#define TR_NONE                        "なし"
#define TR_NONE_UPPERCASE              "なし"
#define TR_MENUSENSOR                  "センサー"
#define TR_POWERMETER_PEAK             "ピーク"
#define TR_POWERMETER_POWER            "出力"
#define TR_POWERMETER_ATTN             "Attn"
#define TR_POWERMETER_FREQ             "周波数"
#define TR_MENUTOOLS                   "ツール"
#define TR_TURN_OFF_RECEIVER           "受信機 電源OFF"
#define TR_STOPPING                    "停止中..."
#define TR_MENU_SPECTRUM_ANALYSER      "スペクトラムアナライザー"
#define TR_MENU_POWER_METER            "出力メーター"
#define TR_SENSOR                      "センサー"
#define TR_COUNTRY_CODE                "カントリーコード"
#define TR_USBMODE                     "USBモード"
#define TR_JACK_MODE                   "Jackモード"
#define TR_VOICE_LANGUAGE              "音声言語"
#define TR_UNITS_SYSTEM                "ユニット"
#define TR_EDIT                        "編集"
#define TR_INSERT_BEFORE               "前に挿入"
#define TR_INSERT_AFTER                "後に挿入"
#define TR_COPY                        "コピー"
#define TR_MOVE                        "移動"
#define TR_PASTE                       "貼り付け"
#define TR_PASTE_AFTER                 "後に貼り付け"
#define TR_PASTE_BEFORE                "前に貼り付け"
#define TR_DELETE                      "削除"
#define TR_INSERT                      "挿入"
#define TR_RESET_FLIGHT                "飛行記録リセット"
#define TR_RESET_TIMER1                "タイマー1 リセット"
#define TR_RESET_TIMER2                "タイマー2 リセット"
#define TR_RESET_TIMER3                "タイマー3 リセット"
#define TR_RESET_TELEMETRY             "テレメトリーリセット"
#define TR_STATISTICS                  "統計情報"
#define TR_ABOUT_US                    "概要"
#define TR_USB_JOYSTICK                "USB Joystick(HID)"
#define TR_USB_MASS_STORAGE            "USB ストレージ(SD)"
#define TR_USB_SERIAL                  "USB シリアル(デバッグ)"
#define TR_SETUP_SCREENS               "スクリーン設定"
#define TR_MONITOR_SCREENS             "モニター"
#define TR_AND_SWITCH                  "＆スイッチ"
#define TR_SF                          "SF"
#define TR_GF                          "GF"
#define TR_ANADIAGS_CALIB              "アナログ信号をキャリブレーションした値を表示"
#define TR_ANADIAGS_FILTRAWDEV         "素のアナログ信号(偏差含)をフィルターした値を表示"
#define TR_ANADIAGS_UNFILTRAW          "素のアナログ信号をフィルターしない値を表示"
#define TR_ANADIAGS_MINMAX             "最低値、最高値、範囲を表示"
#define TR_ANADIAGS_MOVE               "アナログ信号を極端まで動かした値を表示"
#define TR_SPEAKER                     INDENT "スピーカー"
#define TR_BUZZER                      INDENT "ブザー"
#define TR_BYTES                       "バイト"
#define TR_MODULE_BIND                 BUTTON(TR("Bnd", "バインド"))
#define TR_POWERMETER_ATTN_NEEDED      "減衰器が必要です"
#define TR_PXX2_SELECT_RX              "受信機選択"
#define TR_PXX2_DEFAULT                "<default>"
#define TR_BT_SELECT_DEVICE            "デバイス選択"
#define TR_DISCOVER                    "検索"
#define TR_BUTTON_INIT                 BUTTON("初期化")
#define TR_WAITING                     "待機中..."
#define TR_RECEIVER_DELETE             "受信機を削除しますか？"
#define TR_RECEIVER_RESET              "受信機をリセットしますか？"
#define TR_SHARE                       "共有"
#define TR_BIND                        "Bind"
#define TR_REGISTER                    TR("Reg", "登録")
#define TR_MODULE_RANGE                BUTTON(TR("Rng", "レンジテスト"))
#define TR_RANGE_TEST                  "受信強度テスト"
#define TR_RECEIVER_OPTIONS            TR("REC. OPTIONS", "受信機オプション")
#define TR_RESET_BTN                   BUTTON("リセット")
#define TR_DEBUG                       "デバッグ"
#define TR_KEYS_BTN                    BUTTON("キー")
#define TR_ANALOGS_BTN                 BUTTON(TR("Anas", "アナログ"))
#define TR_FS_BTN                      BUTTON(TR("Custom sw", "Customizable switches"))
#define TR_TOUCH_NOTFOUND              "タッチパネルは見つかりませんでした"
#define TR_TOUCH_EXIT                  "画面をタップして終了します"
#define TR_SET                         BUTTON("設定")
#define TR_TRAINER                     "トレーナー"
#define TR_CHANS                       "アクセス"
#define TR_ANTENNAPROBLEM              CENTER "送信アンテナに問題があります!!"
#define TR_MODELIDUSED                 "使用するID:"
#define TR_MODELIDUNIQUE               "IDはユニークです"
#define TR_MODULE                      "モジュール"
#define TR_RX_NAME                     "受信名称"
#define TR_TELEMETRY_TYPE              TR("Type", "テレメトリータイプ")
#define TR_TELEMETRY_SENSORS           "センサー"
#define TR_VALUE                       "値"
#define TR_PERIOD                      "ピリオド"
#define TR_INTERVAL                    "インターバル"
#define TR_REPEAT                      "リピート"
#define TR_ENABLE                      "有効"
#define TR_DISABLE                     "Disable"
#define TR_TOPLCDTIMER                 "上部LCDタイマー"
#define TR_UNIT                        "ユニット"
#define TR_TELEMETRY_NEWSENSOR         INDENT "新規追加"
#define TR_CHANNELRANGE                TR(INDENT "Ch. Range", INDENT "チャンネル範囲")
#define TR_ANTENNACONFIRM1             "外部アンテナ"
#if defined(PCBX12S)
  #define TR_ANTENNA_MODES             "内部","確認","モデル毎","内部＋外部"
#else
  #define TR_ANTENNA_MODES             "内部","確認","モデル毎","外部"
#endif
#define TR_USE_INTERNAL_ANTENNA        TR("Use int. antenna", "内部アンテナを使用")
#define TR_USE_EXTERNAL_ANTENNA        TR("Use ext. antenna", "外部アンテナを使用")
#define TR_ANTENNACONFIRM2             TR("Check antenna", "アンテナの装着を確認してください!!")
#define TR_MODULE_PROTOCOL_FLEX_WARN_LINE1   "FLEX規格を利用"
#define TR_MODULE_PROTOCOL_FCC_WARN_LINE1    "FCC規格を利用"
#define TR_MODULE_PROTOCOL_EU_WARN_LINE1     "EU規格を利用"
#define TR_MODULE_PROTOCOL_WARN_LINE2        "認証ファームウェア"
#define TR_LOWALARM                    INDENT "微弱時のアラーム"
#define TR_CRITICALALARM               INDENT "極微弱警告アラーム"
#define TR_RSSIALARM_WARN              "RSSI"
#define TR_NO_RSSIALARM                TR(INDENT "Alarms disabled", "テレメトリーアラームを無効にしました")
#define TR_DISABLE_ALARM               TR(INDENT "Disable alarms", INDENT "テレメトリーアラーム無効")
#define TR_POPUP                       "ポップアップ"
#define TR_MIN                         "最小"
#define TR_MAX                         "最大"
#define TR_CURVE_PRESET                "リセット..."
#define TR_PRESET                      "リセット"
#define TR_MIRROR                      "ミラー"
#define TR_CLEAR                       "クリア"
#define TR_RESET                       "リセット"
#define TR_RESET_SUBMENU               "リセット..."
#define TR_COUNT                       "カウント"
#define TR_PT                          "pt"
#define TR_PTS                         "pts"
#define TR_SMOOTH                      "スムーズ"
#define TR_COPY_STICKS_TO_OFS          TR("Cpy stick->subtrim", "スティックからサブトリムへコピー")
#define TR_COPY_MIN_MAX_TO_OUTPUTS     TR("Cpy min/max to all",  "最小/中央/最大値から全出力へコピー")
#define TR_COPY_TRIMS_TO_OFS           TR("Cpy trim->subtrim", "トリムからサブトリムへコピー")
#define TR_INCDEC                      "増加/減少"
#define TR_GLOBALVAR                   "グローバル変数"
#define TR_MIXSOURCE                   "ミキサーソース"
#define TR_CONSTANT                    "変化なし"
#define TR_PREFLIGHT_POTSLIDER_CHECK   "OFF","ON","自動"
#define TR_PREFLIGHT                   "飛行前チェック"
#define TR_CHECKLIST                   TR(INDENT "Checklist", INDENT "チェックリスト表示")
#define TR_CHECKLIST_INTERACTIVE       TR3(INDENT "C-Interact", INDENT "Interact. checklist", INDENT "Interactive checklist")
#define TR_AUX_SERIAL_MODE             "シリアルポート"
#define TR_AUX2_SERIAL_MODE            "シリアルポート 2"
#define TR_AUX_SERIAL_PORT_POWER       "ポート出力"
#define TR_SCRIPT                      "スクリプト"
#define TR_INPUTS                      "入力"
#define TR_OUTPUTS                     "出力"
#define STR_EEBACKUP                   "EEPROMバックアップ"
#define STR_FACTORYRESET               "ファクトリーリセット"
#define TR_CONFIRMRESET                TR("Erase ALL", "全モデルと全設定を消去しますか？")
#define TR_TOO_MANY_LUA_SCRIPTS        "LUAスクリプトが多すぎます!!"
#define TR_SPORT_UPDATE_POWER_MODE     "SP 電源"
#define TR_SPORT_UPDATE_POWER_MODES    "AUTO","ON"
#define TR_NO_TELEMETRY_SCREENS        "テレメトリー表示なし"
#define TR_TOUCH_PANEL                 "タッチパネル:"
#define TR_FILE_SIZE                   "ファイルサイズ"
#define TR_FILE_OPEN                   "ファイルを開きますか？"
#define TR_TIMER_MODES                 {TR_OFFON,TR_START,TR_THROTTLE_LABEL,TR_THROTTLE_PERCENT_LABEL,TR_THROTTLE_START}

// Horus and Taranis column headers
#define TR_PHASES_HEADERS_NAME         "名称"
#define TR_PHASES_HEADERS_SW           "スイッチ"
#define TR_PHASES_HEADERS_RUD_TRIM     "ラダートリム"
#define TR_PHASES_HEADERS_ELE_TRIM     "エレベータートリム"
#define TR_PHASES_HEADERS_THT_TRIM     "スロットルトリム"
#define TR_PHASES_HEADERS_AIL_TRIM     "エルロントリム"
#define TR_PHASES_HEADERS_CH5_TRIM     "トリム 5"
#define TR_PHASES_HEADERS_CH6_TRIM     "トリム 6"
#define TR_PHASES_HEADERS_FAD_IN       "フェードイン"
#define TR_PHASES_HEADERS_FAD_OUT      "フェードアウト"

#define TR_LIMITS_HEADERS_NAME         "名称"
#define TR_LIMITS_HEADERS_SUBTRIM      "サブトリム"
#define TR_LIMITS_HEADERS_MIN          "最小"
#define TR_LIMITS_HEADERS_MAX          "最大"
#define TR_LIMITS_HEADERS_DIRECTION    "方向"
#define TR_LIMITS_HEADERS_CURVE        "カーブ"
#define TR_LIMITS_HEADERS_PPMCENTER    "PPMセンター"
#define TR_LIMITS_HEADERS_SUBTRIMMODE  "サブトリムモード"
#define TR_INVERTED                    "リバース"


#define TR_LSW_DESCRIPTIONS            { "比較タイプまたは機能", "第1変数", "第2変数または定数", "第2変数または定数", "回線が有効となる追加条件", "論理スイッチの最小ON時間", "スイッチONになるまでの最小TRUE時間" }

#if defined(COLORLCD)
  // Horus layouts and widgets
  #define TR_FIRST_CHANNEL             "第1チャンネル"
  #define TR_FILL_BACKGROUND           "背景を塗り潰しますか？"
  #define TR_BG_COLOR                  "背景カラー"
  #define TR_SLIDERS_TRIMS             "スライダー＋トリム"
  #define TR_SLIDERS                   "スライダー"
  #define TR_FLIGHT_MODE               "飛行モード"
  #define TR_INVALID_FILE              "無効なファイル"
  #define TR_TIMER_SOURCE              "タイマーソース"
  #define TR_SIZE                      "サイズ"
  #define TR_SHADOW                    "影"
  #define TR_ALIGN_LABEL               "ラベルを揃える"
  #define TR_ALIGN_VALUE               "値を揃える"
  #define TR_ALIGN_OPTS                { "左", "中央", "右" }
  #define TR_TEXT                      "テキスト"
  #define TR_COLOR                     "カラー"
  #define TR_MAIN_VIEW_X               "メインビュー XX"
  #define TR_PANEL1_BACKGROUND         "パネル1 背景"
  #define TR_PANEL2_BACKGROUND         "パネル2 背景"
  #define TR_WIDGET_GAUGE              "ゲージ"
  #define TR_WIDGET_MODELBMP           "モデル"
  #define TR_WIDGET_OUTPUTS            "出力"
  #define TR_WIDGET_TEXT               "テキスト"
  #define TR_WIDGET_TIMER              "タイマー"
  #define TR_WIDGET_VALUE              "値"
#endif

// Bootloader common - Ascii only
#define TR_BL_USB_CONNECTED           "USB Connected"
#define TR_BL_USB_PLUGIN              "Or plug in a USB cable"
#define TR_BL_USB_MASS_STORE          "for mass storage"
#define TR_BL_USB_PLUGIN_MASS_STORE   "Or plug in a USB cable for mass storage"
#define TR_BL_WRITE_FW                "Write Firmware"
#define TR_BL_FORK                    "Fork:"
#define TR_BL_VERSION                 "Version:"
#define TR_BL_RADIO                   "Radio:"
#define TR_BL_EXIT                    "Exit"
#define TR_BL_DIR_MISSING             " Directory is missing"
#define TR_BL_DIR_EMPTY               " Directory is empty"
#define TR_BL_WRITING_FW              "Writing Firmware ..."
#define TR_BL_WRITING_COMPL           "Writing Complete"

#if LCD_W >= 480
  #define TR_BL_INVALID_FIRMWARE       "Not a valid firmware file"
#elif LCD_W >= 212
  #define TR_BL_OR_PLUGIN_USB_CABLE    TR_BL_USB_PLUGIN_MASS_STORE
  #define TR_BL_HOLD_ENTER_TO_START    "\012Hold [ENT] to start writing"
  #define TR_BL_INVALID_FIRMWARE       "\011Not a valid firmware file!        "
  #define TR_BL_INVALID_EEPROM         "\011Not a valid EEPROM file!          "
#else
  #define TR_BL_OR_PLUGIN_USB_CABLE    TR_BL_USB_PLUGIN
  #define TR_BL_HOLD_ENTER_TO_START    "\006Hold [ENT] to start"
  #define TR_BL_INVALID_FIRMWARE       "\004Not a valid firmware!        "
  #define TR_BL_INVALID_EEPROM         "\004Not a valid EEPROM!          "
#endif

#if defined(PCBTARANIS)
   // Bootloader Taranis specific - Ascii only
  #define TR_BL_RESTORE_EEPROM        "Restore EEPROM"
  #if defined(RADIO_COMMANDO8)
    #define TR_BL_POWER_KEY           "Press the power button."
    #define TR_BL_FLASH_EXIT          "Exit the flashing mode."
  #endif
#elif defined(PCBHORUS)
   // Bootloader Horus specific - Ascii only
  #define TR_BL_SELECT_KEY            "[ENT] to select file"
  #define TR_BL_FLASH_KEY             "Hold [ENT] long to flash"
  #define TR_BL_EXIT_KEY              "[RTN] to exit"
#elif defined(PCBNV14)
   // Bootloader NV14 specific - Ascii only
  #define TR_BL_RF_USB_ACCESS         "RF USB access"
  #define TR_BL_CURRENT_FW            "Current Firmware:"
  #define TR_BL_SELECT_KEY            "[R TRIM] to select file"
  #define TR_BL_FLASH_KEY             "Hold [R TRIM] long to flash"
  #define TR_BL_EXIT_KEY              " [L TRIM] to exit"
  #define TR_BL_ENABLE                "Enable"
  #define TR_BL_DISABLE               "Disable"
#endif

// About screen
#define TR_ABOUTUS                     TR(" 概要 ", "概要")

#define TR_CHR_HOUR                    'h'
#define TR_CHR_INPUT                   'I'   // Values between A-I will work

#define TR_BEEP_VOLUME                 "ビープ音の音量"
#define TR_WAV_VOLUME                  "WAV音量"
#define TR_BG_VOLUME                   TR("Bg volume", "BGM音量")

#define TR_TOP_BAR                     "上部バー"
#define TR_FLASH_ERASE                 "フラッシュ消去..."
#define TR_FLASH_WRITE                 "フラッシュ書き込み..."
#define TR_OTA_UPDATE                  "OTAアップデート..."
#define TR_MODULE_RESET                "モジュールリセット..."
#define TR_UNKNOWN_RX                  "不明な受信機"
#define TR_UNSUPPORTED_RX              "未サポート受信機"
#define TR_OTA_UPDATE_ERROR            "OTAアップデートエラー"
#define TR_DEVICE_RESET                "デバイスリセット..."
#define TR_ALTITUDE                    INDENT "高度"
#define TR_SCALE                       "スケール"
#define TR_VIEW_CHANNELS               "チャンネル表示"
#define TR_VIEW_NOTES                  "備考表示"
#define TR_MODEL_SELECT                "モデル選択"
#define TR_ID                          "ID"
#define TR_PRECISION                   "精度"
#define TR_RATIO                       "比率"
#define TR_FORMULA                     "公式"
#define TR_CELLINDEX                   "セル番号"
#define TR_LOGS                        "ログ"
#define TR_OPTIONS                     "オプション"
#define TR_FIRMWARE_OPTIONS            "ファームウェアオプション"

#define TR_ALTSENSOR                   "Altセンサー"
#define TR_CELLSENSOR                  "セルセンサー"
#define TR_GPSSENSOR                   "GPSセンサー"
#define TR_CURRENTSENSOR               "センサー"
#define TR_AUTOOFFSET                  "自動オフセット"
#define TR_ONLYPOSITIVE                "ポジティブ"
#define TR_FILTER                      "フィルター"
#define TR_TELEMETRYFULL               TR("All slots full!", "テレメトリー枠はすべて埋まりました!!")
#define TR_INVERTED_SERIAL             INDENT "リバース"
#define TR_IGNORE_INSTANCE             TR(INDENT "No inst.", INDENT "ID識別を無視")
#define TR_SHOW_INSTANCE_ID            "インスタンスIDの表示"
#define TR_DISCOVER_SENSORS            "新規検索"
#define TR_STOP_DISCOVER_SENSORS       "停止"
#define TR_DELETE_ALL_SENSORS          "すべて削除"
#define TR_CONFIRMDELETE               "本当に " LCDW_128_480_LINEBREAK "すべて削除しますか？"
#define TR_SELECT_WIDGET               "ウィジェット選択"
#define TR_WIDGET_FULLSCREEN           "フルスクリーン"
#define TR_REMOVE_WIDGET               "ウィジェット削除"
#define TR_WIDGET_SETTINGS             "ウィジェット設定"
#define TR_REMOVE_SCREEN               "スクリーン削除"
#define TR_SETUP_WIDGETS               "ウィジェット設定"
#define TR_USER_INTERFACE              "ユーザインターフェイス"
#define TR_THEME                       "テーマ"
#define TR_SETUP                       "設定"
#define TR_LAYOUT                      "レイアウト"
#define TR_ADD_MAIN_VIEW               "メインビュー追加"
#define TR_BACKGROUND_COLOR            "背景色"
#define TR_MAIN_COLOR                  "メイン色"
#define TR_BAR2_COLOR                  "セカンダリバー色"
#define TR_BAR1_COLOR                  "メインバー色"
#define TR_TEXT_COLOR                  "テキスト色"
#define TR_TEXT_VIEWER                 "テキストビューワ"
#define TR_MENU_INPUTS                 STR_CHAR_INPUT "入力"
#define TR_MENU_LUA                    STR_CHAR_LUA "LUAスクリプト"
#define TR_MENU_STICKS                 STR_CHAR_STICK "スティック"
#define TR_MENU_POTS                   STR_CHAR_POT "ダイヤル"
#define TR_MENU_MIN                    STR_CHAR_FUNCTION "最小"
#define TR_MENU_MAX                    STR_CHAR_FUNCTION "最大"
#define TR_MENU_HELI                   STR_CHAR_CYC "サイクリック"
#define TR_MENU_TRIMS                  STR_CHAR_TRIM "トリム"
#define TR_MENU_SWITCHES               STR_CHAR_SWITCH "スイッチ"
#define TR_MENU_LOGICAL_SWITCHES       STR_CHAR_SWITCH "論理スイッチ"
#define TR_MENU_TRAINER                STR_CHAR_TRAINER "トレーナー"
#define TR_MENU_CHANNELS               STR_CHAR_CHANNEL "チャンネル"
#define TR_MENU_GVARS                  STR_CHAR_SLIDER "グローバル変数"
#define TR_MENU_TELEMETRY              STR_CHAR_TELEMETRY "テレメトリー"
#define TR_MENU_DISPLAY                "表示"
#define TR_MENU_OTHER                  "その他"
#define TR_MENU_INVERT                 "リバース"
#define TR_AUDIO_MUTE                  TR("Audio mute","Mute if no sound")
#define TR_JITTER_FILTER               "ADCフィルター"
#define TR_DEAD_ZONE                   "デッドゾーン"
#define TR_RTC_CHECK                   TR("Check RTC", "内蔵電池チェック")
#define TR_AUTH_FAILURE                "検証失敗"
#define TR_RACING_MODE                 "レースモード"

#define TR_USE_THEME_COLOR              "テーマ色を使用"

#define TR_ADD_ALL_TRIMS_TO_SUBTRIMS    "サブトリムにすべてのトリムを追加"
#if LCD_W > LCD_H
  #define TR_OPEN_CHANNEL_MONITORS        "チャンネルモニター起動"
#else
  #define TR_OPEN_CHANNEL_MONITORS        "Open Channel Mon."
#endif
#define TR_DUPLICATE                    "複製"
#define TR_ACTIVATE                     "設定の有効"
#define TR_RED                          "赤"
#define TR_BLUE                         "青"
#define TR_GREEN                        "緑"
#define TR_COLOR_PICKER                 "ピックアップ色"
#define TR_EDIT_THEME_DETAILS           "テーマ詳細の編集"
#define TR_THEME_COLOR_DEFAULT          "デフォルト"
#define TR_THEME_COLOR_PRIMARY1         "プライマリ 1"
#define TR_THEME_COLOR_PRIMARY2         "プライマリ 2"
#define TR_THEME_COLOR_PRIMARY3         "プライマリ 3"
#define TR_THEME_COLOR_SECONDARY1       "セカンダリ 1"
#define TR_THEME_COLOR_SECONDARY2       "セカンダリ 2"
#define TR_THEME_COLOR_SECONDARY3       "セカンダリ 3"
#define TR_THEME_COLOR_FOCUS            "フォーカス"
#define TR_THEME_COLOR_EDIT             "編集"
#define TR_THEME_COLOR_ACTIVE           "有効"
#define TR_THEME_COLOR_WARNING          "警告"
#define TR_THEME_COLOR_DISABLED         "無効"
#define TR_THEME_COLOR_CUSTOM           "カスタム"
#define TR_THEME_CHECKBOX               "チェック"
#define TR_THEME_ACTIVE                 "有効"
#define TR_THEME_REGULAR                "通常"
#define TR_THEME_WARNING                "警告"
#define TR_THEME_DISABLED               "無効"
#define TR_THEME_EDIT                   "編集"
#define TR_THEME_FOCUS                  "フォーカス"
#define TR_AUTHOR                       "作者"
#define TR_DESCRIPTION                  "説明"
#define TR_SAVE                         "保存"
#define TR_CANCEL                       "キャンセル"
#define TR_EDIT_THEME                   "テーマ編集"
#define TR_DETAILS                      "詳細情報"
#define TR_THEME_EDITOR                 "テーマ"

// Main menu
#define TR_MAIN_MENU_SELECT_MODEL       "モデル\n選択"
#define TR_MAIN_MENU_MANAGE_MODELS      "モデル\n管理"
#define TR_MAIN_MENU_MODEL_NOTES        "モデル\nノート"
#define TR_MAIN_MENU_CHANNEL_MONITOR    "チャンネル\nモニター"
#define TR_MAIN_MENU_MODEL_SETTINGS     "モデル\n設定"
#define TR_MAIN_MENU_RADIO_SETTINGS     "送信機\n設定"
#define TR_MAIN_MENU_SCREEN_SETTINGS    "スクリーン\n設定"
#define TR_MAIN_MENU_RESET_TELEMETRY    "リセット\nテレメトリ"
#define TR_MAIN_MENU_STATISTICS         "統計情報"
#define TR_MAIN_MENU_ABOUT_EDGETX       "EdgeTX\nについて"
// End Main menu

// Voice in native language
#define TR_VOICE_ENGLISH                "アメリカ-EN"
#define TR_VOICE_CHINESE                "中文-CN"
#define TR_VOICE_CZECH                  "チェコ-CZ"
#define TR_VOICE_DANISH                 "デンマーク-DA"
#define TR_VOICE_DEUTSCH                "ドイツ-DE"
#define TR_VOICE_DUTCH                  "オランダ-NL"
#define TR_VOICE_ESPANOL                "スペイン-ES"
#define TR_VOICE_FRANCAIS               "フランス-FR"
#define TR_VOICE_HUNGARIAN              "ハンガリー-HU"
#define TR_VOICE_ITALIANO               "イタリア-IT"
#define TR_VOICE_POLISH                 "ポーランド-PL"
#define TR_VOICE_PORTUGUES              "ポルトガル-PT"
#define TR_VOICE_RUSSIAN                "ロシア-RU"
#define TR_VOICE_SLOVAK                 "スロバキア-SK"
#define TR_VOICE_SWEDISH                "スウェーデン-SV"
#define TR_VOICE_TAIWANESE              "中文-TW"
#define TR_VOICE_JAPANESE               "日本-JP"
#define TR_VOICE_HEBREW                 "ヘブライ語"

#define TR_USBJOYSTICK_LABEL           "USB Joystick"
#define TR_USBJOYSTICK_EXTMODE         "モード"
#define TR_VUSBJOYSTICK_EXTMODE        "クラシック","アドバンス"
#define TR_USBJOYSTICK_SETTINGS        "チャンネル設定"
#define TR_USBJOYSTICK_IF_MODE         TR("If. mode","インターフェイスモード")
#define TR_VUSBJOYSTICK_IF_MODE        "Joystick","Gamepad","MultiAxis"
#define TR_USBJOYSTICK_CH_MODE         "モード"
#define TR_VUSBJOYSTICK_CH_MODE        "None","Btn","Axis","Sim"
#define TR_VUSBJOYSTICK_CH_MODE_S      "-","B","A","S"
#define TR_USBJOYSTICK_CH_BTNMODE      "ボタンモード"
#define TR_VUSBJOYSTICK_CH_BTNMODE     "Normal","Pulse","SWEmu","Delta","Companion"
#define TR_VUSBJOYSTICK_CH_BTNMODE_S   TR("Norm","Normal"),TR("Puls","Pulse"),TR("SWEm","SWEmul"),TR("Delt","Delta"),TR("CPN","Companion")
#define TR_USBJOYSTICK_CH_SWPOS        "ポジション"
#define TR_VUSBJOYSTICK_CH_SWPOS       "Push","2POS","3POS","4POS","5POS","6POS","7POS","8POS"
#define TR_USBJOYSTICK_CH_AXIS         "Axis"
#define TR_VUSBJOYSTICK_CH_AXIS        "X","Y","Z","rotX","rotY","rotZ","Slider","Dial","Wheel"
#define TR_USBJOYSTICK_CH_SIM          "Sim axis"
#define TR_VUSBJOYSTICK_CH_SIM         "Ail","Ele","Rud","Thr"
#define TR_USBJOYSTICK_CH_INVERSION    "リバース"
#define TR_USBJOYSTICK_CH_BTNNUM       "ボタンNo."
#define TR_USBJOYSTICK_BTN_COLLISION   "!ボタンNo.の衝突!"
#define TR_USBJOYSTICK_AXIS_COLLISION  "!軸設定の衝突!"
#define TR_USBJOYSTICK_CIRC_COUTOUT    TR("Circ. cut", "円形カットアウト")
#define TR_VUSBJOYSTICK_CIRC_COUTOUT   "None","X-Y, Z-rX","X-Y, rX-rY"
#define TR_USBJOYSTICK_APPLY_CHANGES   "変更を適用"

#define TR_DIGITAL_SERVO          "Servo333HZ"
#define TR_ANALOG_SERVO           "Servo 50HZ"
#define TR_SIGNAL_OUTPUT          "Signal出力"
#define TR_SERIAL_BUS             "シリアルバス"
#define TR_SYNC                   "同期"

#define TR_ENABLED_FEATURES       "有効機能"
#define TR_RADIO_MENU_TABS        "送信機メニュータブ"
#define TR_MODEL_MENU_TABS        "モデルメニュータブ"
