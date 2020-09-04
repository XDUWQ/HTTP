#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <assert.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>

#define BNUFREEE_SIZE 4096

enum CHECK_STATE {
    CHECK_STATE_REQUESTLINE = 0,
    CHECK_STATE_HEADER
};

enum LINE_STATUES {
    LINE_OK = 0,
    LINE_BAD,
    LINE_OPEN
};

enum HTTP_CODE {
    NO_REQUEST,
    GET_REQUEST,
    BAD_REQUEST
};

static const char* szret[] = {"I get a corret result!\n", "something wrong\n"};

// 有限状态机 解析出一行的内容
LINE_STATUES parse_line (char* buffer, int& check_index, int& read_index) {

}

// 分析请求行
HTTP_CODE parse_requestline (char* temp, CHECK_STATE& checkstate) {

}

// 分析头部字段
HTTP_CODE parse_headers (char* temp) {

}

// 分析请求入口函数
HTTP_CODE parse_content (char* buffer, int& checked_index, CHECK_STATE& checkstate, int& read_index, int& state_line) {

}

int main(int argc, char* argv[]) {




    return 0;
}