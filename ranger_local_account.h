
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
#define RANGER_ERROR_TIMEOUT						-1002		/*!< 调用超时 */

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


#ifdef __cplusplus
}
#endif

#endif
