enum {
    LANG_BG,
    LANG_DE,
    LANG_EN,
    LANG_ES,
    LANG_FR,
    LANG_HI, //5
    LANG_JA,
    LANG_IT,
    LANG_LV,
    LANG_NL,
    LANG_NO, //10
    LANG_BR,
    LANG_PL,
    LANG_RO,
    LANG_RU,
    LANG_TR, //15
    LANG_UA,
    LANG_CN,
    LANG_TW,
    LANG_CS,
    LANG_DK,
    LANG_SV,
    LANG_HU,
    LANG_PT,
    LANG_EO,

    NUM_LANGS // add langs before this line
};

enum {
    //This ensures that all statically initialized to zero UI_STRING_ID vars
    //will render as canary "BUG. PLEASE REPORT." strings.
    UI_STRING_ID_INVALID = 0,

    STR_REQ_SENT,
    STR_REQ_RESOLVE,
    STR_DNS_DISABLED,
    STR_REQ_INVALID_ID,
    STR_REQ_EMPTY_ID,
    STR_REQ_LONG_MSG,
    STR_REQ_NO_MSG,
    STR_REQ_SELF_ID,
    STR_REQ_ALREADY_FRIENDS,
    STR_REQ_UNKNOWN,
    STR_REQ_BAD_CHECKSUM,
    STR_REQ_BAD_NOSPAM,
    STR_REQ_NO_MEMORY,

    STR_SEND_FILE,
    STR_SAVE_FILE,
    STR_WHERE_TO_SAVE_FILE_PROMPT,
    STR_SEND_FILE_PROMPT,
    STR_SCREEN_CAPTURE_PROMPT,

    /* Transfer strings */
    STR_TRANSFER_NEW,
    STR_TRANSFER_STARTED,
    STR_TRANSFER___,
    STR_TRANSFER_PAUSED,
    STR_TRANSFER_BROKEN,
    STR_TRANSFER_CANCELLED,
    STR_TRANSFER_COMPLETE,

    STR_GROUPCHAT_JOIN_AUDIO,
    STR_START_AUDIO_CALL,
    STR_START_VIDEO_CALL,

    /* A/V Call Strings */
    STR_CALL_CANCELLED,
    STR_CALL_INVITED,
    STR_CALL_RINGING,
    STR_CALL_STARTED,

    /* Settings strings */
    STR_PROFILE_SETTINGS,
    STR_PROFILE_PW_WARNING,
    STR_PROFILE_PW_NO_RECOVER,

    STR_ADDFRIENDS,
    STR_TOXID,
    STR_MESSAGE,
    STR_SEARCHFRIENDS,
    STR_FILTER_ALL,
    STR_FILTER_ONLINE,
    STR_FILTER_CONTACT_TOGGLE,
    STR_FILTER_TO_ALL,
    STR_FILTER_TO_ONLINE,
    STR_ADD,
    STR_CREATEGROUPCHAT,
    STR_SWITCHPROFILE,
    STR_FRIENDREQUEST,
    STR_USERSETTINGS,
    STR_FRIEND_SETTINGS,
    STR_NAME,
    STR_PROFILE,
    STR_STATUSMESSAGE,
    STR_PREVIEW,
    STR_DEVICESELECTION,
    STR_AUDIOINPUTDEVICE,
    STR_AUDIOFILTERING,
    STR_AUDIOOUTPUTDEVICE,
    STR_VIDEOINPUTDEVICE,
    STR_PUSH_TO_TALK,

    // Status info
    STR_STATUS,
    STR_STATUS_ONLINE,
    STR_STATUS_AWAY,
    STR_STATUS_BUSY,

    // Status strings
    STR_NOT_CONNECTED,

    // Setting strings
    STR_OTHERSETTINGS,
    STR_UI,
    STR_USER_INTERFACE,
    STR_UTOX_SETTINGS,
    STR_NETWORK_SETTINGS,
    STR_AUDIO_VIDEO,
    STR_PROFILE_PASSWORD,
    STR_LOCK_UTOX,
    STR_LOCK,

    STR_DPI,
    STR_SAVELOCATION,
    STR_LANGUAGE,
    STR_NETWORK,
    STR_IPV6,
    STR_UDP,
    STR_PROXY,
    STR_WARNING,
    STR_LOGGING,
    STR_AUDIONOTIFICATIONS,
    STR_RINGTONE,
    STR_IS_TYPING,
    STR_CLOSE_TO_TRAY,
    STR_START_IN_TRAY,
    STR_AUTO_STARTUP,


    // Interact with texts / clipboard
    STR_COPY, STR_COPY_TOX_ID = STR_COPY,
    STR_COPYWITHOUTNAMES,
    STR_COPY_WITH_NAMES,
    STR_CUT,
    STR_PASTE,
    STR_DELETE,
    STR_SELECTALL,

    STR_REMOVE,
    STR_REMOVE_FRIEND,
    STR_REMOVE_GROUP,
    STR_LEAVE,
    STR_LEAVE_GROUP,
    STR_ACCEPT, STR_REQ_ACCEPT = STR_ACCEPT,
    STR_CTOPIC, STR_CHANGE_GROUP_TOPIC = STR_CTOPIC,
    STR_IGNORE, STR_REQ_DECLINE = STR_IGNORE,
    STR_SET_ALIAS,

    STR_ALIAS, STR_FRIEND_ALIAS = STR_ALIAS,
    STR_FRIEND_AUTOACCEPT,

    STR_SENDMESSAGE,
    STR_SENDSCREENSHOT,

    STR_CLICKTOSAVE,
    STR_CLICKTOOPEN,
    STR_CANCELLED,

    STR_DPI_050,
    STR_DPI_060,
    STR_DPI_070,
    STR_DPI_080,
    STR_DPI_090,
    STR_DPI_100,
    STR_DPI_110,
    STR_DPI_120,
    STR_DPI_130,
    STR_DPI_140,
    STR_DPI_150,
    STR_DPI_160,
    STR_DPI_170,
    STR_DPI_180,
    STR_DPI_190,
    STR_DPI_200,
    STR_DPI_210,
    STR_DPI_220,
    STR_DPI_230,
    STR_DPI_240,
    STR_DPI_250,
    STR_DPI_260,
    STR_DPI_270,
    STR_DPI_280,
    STR_DPI_290,
    STR_DPI_300,
    STR_DPI_TINY,
    STR_DPI_NORMAL,
    STR_DPI_BIG,
    STR_DPI_LARGE,
    STR_DPI_HUGE,

    STR_CONTACT_SEARCH_ADD_HINT,

    STR_PROXY_DISABLED,
    STR_PROXY_FALLBACK,
    STR_PROXY_ALWAYS_USE,

    STR_PROXY_EDIT_HINT_IP,
    STR_PROXY_EDIT_HINT_PORT,

    STR_NO,
    STR_YES,
    STR_OFF,
    STR_ON,
    STR_SHOW,
    STR_HIDE,

    STR_VIDEO_IN_NONE, STR_AUDIO_IN_NONE = STR_VIDEO_IN_NONE,
    STR_VIDEO_IN_DESKTOP,

    STR_AUDIO_IN_DEFAULT_LOOPBACK,
    STR_AUDIO_IN_ANDROID,

    STR_DEFAULT_FRIEND_REQUEST_MESSAGE,

    STR_WINDOW_TITLE_VIDEO_PREVIEW,

    STR_MUTE,
    STR_UNMUTE,

    STR_SELECT_AVATAR_TITLE,
    STR_AVATAR_TOO_LARGE_MAX_SIZE_IS,
    STR_CANT_FIND_FILE_OR_EMPTY,

    STR_CLEAR_HISTORY,

    STR_THEME,
    STR_THEME_DEFAULT,
    STR_THEME_LIGHT,
    STR_THEME_DARK,
    STR_THEME_HIGHCONTRAST,
    STR_THEME_CUSTOM,
    STR_THEME_ZENBURN,
    STR_SEND_TYPING_NOTIFICATIONS,

    STR_LANG_NATIVE_NAME,
    STR_LANG_ENGLISH_NAME,

    NUM_STRS // add strings before this line
};

typedef uint8_t UI_LANG_ID;
typedef uint16_t UI_STRING_ID;

STRING* ui_gettext(UI_LANG_ID lang, UI_STRING_ID string_id);

UI_LANG_ID ui_guess_lang_by_posix_locale(const char* locale, UI_LANG_ID deflt);
UI_LANG_ID ui_guess_lang_by_windows_lang_id(uint16_t lang_id, UI_LANG_ID deflt);
