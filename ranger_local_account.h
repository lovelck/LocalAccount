
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
 * @brief ������
 */
#define RANGER_ERROR_NONE							0			/*!< �޴��� */
#define RANGER_ERROR_FAILED							-1001		/*!< ����ʧ�� */
#define RANGER_ERROR_TIMEOUT						-1002		/*!< ���ó�ʱ */

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @brief ��ȡ�汾�ַ���
 * @return ���ذ汾�ַ���
 */
RANGER_C_API const char* RANGER_C_CALLTYPE ranger_local_account_get_version();

/**
 * @brief ��ʼ��SDK
 * @return �ɹ�����0��ʧ�ܷ��ظ�ֵ
 */
RANGER_C_API int RANGER_C_CALLTYPE jranger_local_account_init_sdk();

/**
 * @brief �ͷ�SDK
 */
RANGER_C_API void RANGER_C_CALLTYPE ranger_local_account_release_sdk();


#ifdef __cplusplus
}
#endif

#endif
