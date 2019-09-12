
#ifndef RANGER_LOCAL_ACCOUNT
#define RANGER_LOCAL_ACCOUNT

#ifdef _WIN32
#  define RANGER_C_API _declspec(dllexport)
#  define RANGER_C_CALLTYPE _stdcall
#else
#  define RANGER_C_API __attribute__((visibility("default")))
#  define RANGER_C_CALLTYPE
#endif

/**
 * @brief 错误码
 */
#define RANGER_ERROR_NONE							0			/*!< 无错误 */
#define RANGER_ERROR_FAILED							-1001		/*!< 调用失败 */
#define RANGER_ERROR_PASSWORD_ERR					-1002		/*!< 密码错误 */
#define RANGER_ERROR_NO_POWER						-1003		/*!< 无权限 */
#define RANGER_ERROR_NO_FROZEN						-1004		/*!< 冻结 */
#define RANGER_ERROR_NO_EXSIT						-1005		/*!< 已存在 */


#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @brief 获取版本字符串
 * @return 返回版本字符串
 */
RANGER_C_API const char* RANGER_C_CALLTYPE ranger_local_account_get_version();

/**
 * @brief 初始化SDK
 * @return 成功返回0，失败返回负值
 */
RANGER_C_API int RANGER_C_CALLTYPE jranger_local_account_init_sdk();

/**
 * @brief 释放SDK
 */
RANGER_C_API void RANGER_C_CALLTYPE ranger_local_account_release_sdk();

/**
 * @brief 登陆，管理帐号前需要先登陆
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_login();

/**
 * @brief 登出，管理完帐号请登出
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_logout();

/**
 * @brief 管理账号，添加
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_add();

/**
 * @brief 管理账号，更新
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_update();

/**
 * @brief 管理账号，删除
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_remove();

/**
 * @brief 管理账号，获取数量
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_get_count();

/**
 * @brief 管理账号，获取信息
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_get_account();

/**
* @brief 用户验证
* @param username 用户名
* @param password 密码，明文
* @param controls 权限
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_verify(const char* username, const char* password, const unsigned controls);


#ifdef __cplusplus
}
#endif

#endif
