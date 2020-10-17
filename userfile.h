#ifndef USERFILE_H
#define USERFILE_H

enum userfile_rtn {
    USERFILE_SUCCESS = 0,
    USERFILE_ERROR = 1
};

enum userfile_tokens {
    USERFILE_NO_MATCH       = 0x00,
    USERFILE_USER_MATCH     = 0x01,
    USERFILE_GROUP_MATCH    = 0x02,
    USERFILE_NO_BLANK       = 0x04
};

int UserInAuthList(const char* username, int* match);

#endif