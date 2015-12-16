#ifdef __cplusplus
extern "C" {
#endif

void* QNdefFilter_NewQNdefFilter();
void* QNdefFilter_NewQNdefFilter2(void* other);
void QNdefFilter_Clear(void* ptr);
int QNdefFilter_OrderMatch(void* ptr);
int QNdefFilter_RecordCount(void* ptr);
void QNdefFilter_SetOrderMatch(void* ptr, int on);
void QNdefFilter_DestroyQNdefFilter(void* ptr);
void* QNdefMessage_NewQNdefMessage();
void* QNdefMessage_NewQNdefMessage3(void* message);
void* QNdefMessage_NewQNdefMessage2(void* record);
void* QNdefMessage_ToByteArray(void* ptr);
void* QNdefNfcSmartPosterRecord_NewQNdefNfcSmartPosterRecord();
void* QNdefNfcSmartPosterRecord_NewQNdefNfcSmartPosterRecord3(void* other);
void* QNdefNfcSmartPosterRecord_NewQNdefNfcSmartPosterRecord2(void* other);
int QNdefNfcSmartPosterRecord_Action(void* ptr);
void QNdefNfcSmartPosterRecord_AddIcon2(void* ptr, void* ty, void* data);
int QNdefNfcSmartPosterRecord_AddTitle(void* ptr, void* text);
int QNdefNfcSmartPosterRecord_AddTitle2(void* ptr, char* text, char* locale, int encoding);
int QNdefNfcSmartPosterRecord_HasAction(void* ptr);
int QNdefNfcSmartPosterRecord_HasIcon(void* ptr, void* mimetype);
int QNdefNfcSmartPosterRecord_HasSize(void* ptr);
int QNdefNfcSmartPosterRecord_HasTitle(void* ptr, char* locale);
int QNdefNfcSmartPosterRecord_HasTypeInfo(void* ptr);
void* QNdefNfcSmartPosterRecord_Icon(void* ptr, void* mimetype);
int QNdefNfcSmartPosterRecord_IconCount(void* ptr);
int QNdefNfcSmartPosterRecord_RemoveIcon2(void* ptr, void* ty);
int QNdefNfcSmartPosterRecord_RemoveTitle(void* ptr, void* text);
int QNdefNfcSmartPosterRecord_RemoveTitle2(void* ptr, char* locale);
void QNdefNfcSmartPosterRecord_SetAction(void* ptr, int act);
void QNdefNfcSmartPosterRecord_SetTypeInfo(void* ptr, void* ty);
void QNdefNfcSmartPosterRecord_SetUri(void* ptr, void* url);
void QNdefNfcSmartPosterRecord_SetUri2(void* ptr, void* url);
char* QNdefNfcSmartPosterRecord_Title(void* ptr, char* locale);
int QNdefNfcSmartPosterRecord_TitleCount(void* ptr);
void* QNdefNfcSmartPosterRecord_TypeInfo(void* ptr);
void* QNdefNfcSmartPosterRecord_Uri(void* ptr);
void QNdefNfcSmartPosterRecord_DestroyQNdefNfcSmartPosterRecord(void* ptr);
void* QNdefNfcTextRecord_NewQNdefNfcTextRecord();
void* QNdefNfcTextRecord_NewQNdefNfcTextRecord2(void* other);
int QNdefNfcTextRecord_Encoding(void* ptr);
char* QNdefNfcTextRecord_Locale(void* ptr);
void QNdefNfcTextRecord_SetEncoding(void* ptr, int encoding);
void QNdefNfcTextRecord_SetLocale(void* ptr, char* locale);
void QNdefNfcTextRecord_SetText(void* ptr, char* text);
char* QNdefNfcTextRecord_Text(void* ptr);
void* QNdefNfcUriRecord_NewQNdefNfcUriRecord();
void* QNdefNfcUriRecord_NewQNdefNfcUriRecord2(void* other);
void QNdefNfcUriRecord_SetUri(void* ptr, void* uri);
void* QNdefNfcUriRecord_Uri(void* ptr);
void* QNdefRecord_NewQNdefRecord();
void* QNdefRecord_NewQNdefRecord2(void* other);
void* QNdefRecord_Id(void* ptr);
int QNdefRecord_IsEmpty(void* ptr);
void* QNdefRecord_Payload(void* ptr);
void QNdefRecord_SetId(void* ptr, void* id);
void QNdefRecord_SetPayload(void* ptr, void* payload);
void QNdefRecord_SetType(void* ptr, void* ty);
void QNdefRecord_SetTypeNameFormat(void* ptr, int typeNameFormat);
void* QNdefRecord_Type(void* ptr);
int QNdefRecord_TypeNameFormat(void* ptr);
void QNdefRecord_DestroyQNdefRecord(void* ptr);
int QNearFieldManager_RegisterNdefMessageHandler(void* ptr, void* object, char* method);
int QNearFieldManager_StartTargetDetection(void* ptr);
void* QNearFieldManager_NewQNearFieldManager(void* parent);
int QNearFieldManager_IsAvailable(void* ptr);
int QNearFieldManager_RegisterNdefMessageHandler2(void* ptr, int typeNameFormat, void* ty, void* object, char* method);
int QNearFieldManager_RegisterNdefMessageHandler3(void* ptr, void* filter, void* object, char* method);
void QNearFieldManager_SetTargetAccessModes(void* ptr, int accessModes);
void QNearFieldManager_StopTargetDetection(void* ptr);
int QNearFieldManager_TargetAccessModes(void* ptr);
void QNearFieldManager_ConnectTargetDetected(void* ptr);
void QNearFieldManager_DisconnectTargetDetected(void* ptr);
void QNearFieldManager_ConnectTargetLost(void* ptr);
void QNearFieldManager_DisconnectTargetLost(void* ptr);
int QNearFieldManager_UnregisterNdefMessageHandler(void* ptr, int handlerId);
void QNearFieldManager_DestroyQNearFieldManager(void* ptr);
void* QNearFieldShareManager_NewQNearFieldShareManager(void* parent);
void QNearFieldShareManager_ConnectError(void* ptr);
void QNearFieldShareManager_DisconnectError(void* ptr);
void QNearFieldShareManager_SetShareModes(void* ptr, int mode);
int QNearFieldShareManager_ShareError(void* ptr);
int QNearFieldShareManager_ShareModes(void* ptr);
void QNearFieldShareManager_ConnectShareModesChanged(void* ptr);
void QNearFieldShareManager_DisconnectShareModesChanged(void* ptr);
int QNearFieldShareManager_QNearFieldShareManager_SupportedShareModes();
void QNearFieldShareManager_ConnectTargetDetected(void* ptr);
void QNearFieldShareManager_DisconnectTargetDetected(void* ptr);
void QNearFieldShareManager_DestroyQNearFieldShareManager(void* ptr);
void QNearFieldShareTarget_Cancel(void* ptr);
void QNearFieldShareTarget_ConnectError(void* ptr);
void QNearFieldShareTarget_DisconnectError(void* ptr);
int QNearFieldShareTarget_IsShareInProgress(void* ptr);
int QNearFieldShareTarget_Share(void* ptr, void* message);
int QNearFieldShareTarget_ShareError(void* ptr);
void QNearFieldShareTarget_ConnectShareFinished(void* ptr);
void QNearFieldShareTarget_DisconnectShareFinished(void* ptr);
int QNearFieldShareTarget_ShareModes(void* ptr);
void QNearFieldShareTarget_DestroyQNearFieldShareTarget(void* ptr);
int QNearFieldTarget_AccessMethods(void* ptr);
void QNearFieldTarget_ConnectDisconnected(void* ptr);
void QNearFieldTarget_DisconnectDisconnected(void* ptr);
int QNearFieldTarget_HasNdefMessage(void* ptr);
int QNearFieldTarget_IsProcessingCommand(void* ptr);
void QNearFieldTarget_ConnectNdefMessagesWritten(void* ptr);
void QNearFieldTarget_DisconnectNdefMessagesWritten(void* ptr);
int QNearFieldTarget_Type(void* ptr);
void* QNearFieldTarget_Uid(void* ptr);
void* QNearFieldTarget_Url(void* ptr);
void QNearFieldTarget_DestroyQNearFieldTarget(void* ptr);
int QQmlNdefRecord_TypeNameFormat(void* ptr);
void* QQmlNdefRecord_NewQQmlNdefRecord(void* parent);
void* QQmlNdefRecord_NewQQmlNdefRecord2(void* record, void* parent);
void QQmlNdefRecord_ConnectRecordChanged(void* ptr);
void QQmlNdefRecord_DisconnectRecordChanged(void* ptr);
void QQmlNdefRecord_SetRecord(void* ptr, void* record);
void QQmlNdefRecord_SetType(void* ptr, char* newtype);
void QQmlNdefRecord_SetTypeNameFormat(void* ptr, int newTypeNameFormat);
char* QQmlNdefRecord_Type(void* ptr);
void QQmlNdefRecord_ConnectTypeChanged(void* ptr);
void QQmlNdefRecord_DisconnectTypeChanged(void* ptr);
void QQmlNdefRecord_ConnectTypeNameFormatChanged(void* ptr);
void QQmlNdefRecord_DisconnectTypeNameFormatChanged(void* ptr);

#ifdef __cplusplus
}
#endif