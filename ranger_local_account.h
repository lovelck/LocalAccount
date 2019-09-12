
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
#define RANGER_ERROR_PASSWORD_ERR					-1002		/*!< ������� */
#define RANGER_ERROR_NO_POWER						-1003		/*!< ��Ȩ�� */
#define RANGER_ERROR_NO_FROZEN						-1004		/*!< ���� */
#define RANGER_ERROR_NO_EXSIT						-1005		/*!< �Ѵ��� */


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

/**
 * @brief ��½�������ʺ�ǰ��Ҫ�ȵ�½
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_login();

/**
 * @brief �ǳ����������ʺ���ǳ�
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_logout();

/**
 * @brief �����˺ţ����
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_add();

/**
 * @brief �����˺ţ�����
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_update();

/**
 * @brief �����˺ţ�ɾ��
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_remove();

/**
 * @brief �����˺ţ���ȡ����
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_get_count();

/**
 * @brief �����˺ţ���ȡ��Ϣ
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_get_account();

/**
* @brief �û���֤
* @param username �û���
* @param password ���룬����
* @param controls Ȩ��
 */
RANGER_C_API int RANGER_C_CALLTYPE ranger_local_account_verify(const char* username, const char* password, const unsigned controls);


#ifdef __cplusplus
}
#endif

#endif
